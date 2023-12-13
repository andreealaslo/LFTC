import FA.MySet;

import java.io.*;
import java.sql.SQLOutput;
import java.util.*;

public class Parser {

    private final Grammar grammar;
    private Map<String, MySet<String>> firstSets;
    private Map<String, MySet<String>> followSets;

    private HashMap<Pair, Pair> parseTable;
    private MySet<List<String>> productionsRHS;

    public Parser(Grammar grammar) {
        this.grammar = grammar;
        this.firstSets = new HashMap<>();
        this.followSets = new HashMap<>();
        this.parseTable = new HashMap<>();
        computeFirstSets();
        computeFollowSets();
        computeParseTable();

        System.out.println(printParseTable());
    }

    public void computeFirstSets() {
        for (String nonterminal : grammar.getNonterminals().getElements()) {
            MySet<String> f0Set = computeF0(nonterminal);
            firstSets.put(nonterminal, f0Set);
        }
        var isChanged = true;
        while (isChanged) {
            isChanged = false;
            Map<String, MySet<String>> newColumn = new HashMap<>();
            for (String nonterminal : grammar.getNonterminals().getElements()) {
                MySet<List<String>> productionForNonterminal = grammar.getProductionsForNonterminal(nonterminal);
                MySet<String> toAdd = new MySet<>();
                toAdd.addAll(firstSets.get(nonterminal));
                for (List<String> production : productionForNonterminal.getElements()) {
                    List<String> rhsNonterminals = new ArrayList<>();
                    String rhsTerminal = null;
                    for (String symbol : production) {
                        if (this.grammar.getNonterminals().getElements().contains(symbol))
                            rhsNonterminals.add(symbol);
                        else {
                            rhsTerminal = symbol;
                            break;
                        }
                    }
                    var resultConcatenation = concatenationOfLengthOne(rhsNonterminals, rhsTerminal);
                    toAdd.addAll(resultConcatenation);
                }
                newColumn.put(nonterminal, toAdd);
            }
            if (!newColumn.entrySet().equals(firstSets.entrySet()))
                isChanged = true;
            firstSets = newColumn;
        }
        for (String terminal : grammar.getTerminals().getElements()) {
            MySet<String> terminalSet = new MySet<>();
            terminalSet.add(terminal);
            firstSets.put(terminal, terminalSet);
        }

//        System.out.println("FIRST Sets:");
//        for (String nonterminal : grammar.getNonterminals().getElements()) {
//            System.out.println("FIRST(" + nonterminal + ") = " + firstSets.get(nonterminal));
//        }
    }

    private MySet<String> concatenationOfLengthOne(List<String> rhsNonterminals, String rhsTerminal) {
        if (rhsNonterminals.size() == 0)
            return new MySet<>();
        if (rhsNonterminals.size() == 1) {
            return firstSets.get(rhsNonterminals.iterator().next());
        }
        MySet<String> concatenation = new MySet<>();
        int step = 0;
        boolean allEpsilon = true;
        for (String nonterminal : rhsNonterminals) {
            if (!firstSets.get(nonterminal).contains("EPSILON")) {
                allEpsilon = false;
            }
        }
        if (allEpsilon) {
            concatenation.add(Objects.requireNonNullElse(rhsTerminal, "EPSILON"));
        }
        while (step < rhsNonterminals.size()) {
            boolean thereIsOneEpsilon = false;
            for (String s : firstSets.get(rhsNonterminals.get(step)).getElements()) {
                if (s.equals("EPSILON"))
                    thereIsOneEpsilon = true;
                else
                    concatenation.add(s);
            }
            if (thereIsOneEpsilon)
                step++;
            else break;
        }
        return concatenation;
    }

    public MySet<String> computeF0(String nonterminal) {
        MySet<String> f0Set = new MySet<>();
        for (Production production : grammar.getProductions().getElements()) {
            if (production.getLhs().equals(nonterminal)) {
                for (List<String> rhsList : production.getRhs().getElements()) {
                    String firstSymbol = rhsList.get(0);
                    if (grammar.getTerminals().contains(firstSymbol) || "EPSILON".equals(firstSymbol)) {
                        f0Set.add(firstSymbol);
                    }
                }
            }
        }
        return f0Set;
    }

    public void computeFollowSets() {
        for (String nonterminal : grammar.getNonterminals().getElements()) {
            followSets.put(nonterminal, new MySet<>());
        }
        followSets.get(grammar.getStartingSymbol()).add("EPSILON");
        boolean isChanged = true;
        while (isChanged) {
            isChanged = false;
            HashMap<String, MySet<String>> newColumn = new HashMap<>();

            for (String nonterminal : grammar.getNonterminals().getElements()) {
                newColumn.put(nonterminal, new MySet<>());
                var productionsWithNonterminalInRhs = new HashMap<String, Set<List<String>>>();
                var allProductions = grammar.getProductions();
                for (Production currentProduction : allProductions.getElements()) {
                    for (List<String> smallProduction : currentProduction.getRhs().getElements()) {
                        if (smallProduction.contains(nonterminal)) {
                            String lhs = currentProduction.getLhs();
                            if (!productionsWithNonterminalInRhs.containsKey(lhs))
                                productionsWithNonterminalInRhs.put(lhs, new HashSet<>());
                            productionsWithNonterminalInRhs.get(lhs).add(smallProduction);
                        }
                    }
                }
                MySet<String> toAdd = new MySet<>();
                toAdd.addAll(followSets.get(nonterminal));
                productionsWithNonterminalInRhs.forEach((k, v) -> {
                    for (List<String> production : v) {
                        for (int indexOfNonterminal = 0; indexOfNonterminal < production.size(); ++indexOfNonterminal) {
                            if (production.get(indexOfNonterminal).equals(nonterminal)) {
                                if (indexOfNonterminal + 1 == production.size()) {
                                    toAdd.addAll(followSets.get(k));
                                } else {
                                    String followSymbol = production.get(indexOfNonterminal + 1);
                                    if (grammar.getTerminals().getElements().contains(followSymbol))
                                        toAdd.add(followSymbol);
                                    else {
                                        for (String symbol : firstSets.get(followSymbol).getElements()) {
                                            if (symbol.equals("EPSILON"))
                                                toAdd.addAll(followSets.get(k));
                                            else
                                                toAdd.addAll(firstSets.get(followSymbol));
                                        }
                                    }
                                }
                            }
                        }
                    }

                });

                newColumn.put(nonterminal, toAdd);
            }
            if (!newColumn.entrySet().equals(followSets.entrySet()))
                isChanged = true;
            followSets = newColumn;
        }
//        System.out.println("FOLLOW Sets:");
//        for (String nonterminal : grammar.getNonterminals().getElements()) {
//            System.out.println("FOLLOW(" + nonterminal + ") = " + followSets.get(nonterminal));
//        }
    }

    public Map<String, MySet<String>> getFirstSets() {
        return firstSets;
    }

    public Map<String, MySet<String>> getFollowSets() {
        return followSets;
    }

    public void computeParseTable() {
        List<String> rows = new ArrayList<>();
        rows.addAll(grammar.getNonterminals().getElements());
        rows.addAll(grammar.getTerminals().getElements());
        rows.add("$");
        List<String> columns = new ArrayList<>();
        columns.addAll(grammar.getTerminals().getElements());
        columns.add("$");

        for (var row : rows)
            for (var col : columns)
                parseTable.put(new Pair<String, String>(row, col), new Pair<String, Integer>("error", -1));

        for (var col : columns)
            parseTable.put(new Pair<String, String>(col, col), new Pair<String, Integer>("pop", -1));

        parseTable.put(new Pair<String, String>("$", "$"), new Pair<String, Integer>("accept", -1));

        MySet<Production> productions = grammar.getProductions();
        this.productionsRHS = new MySet<>();
        for (Production p : productions.getElements()) {
            for (var smallProduction : p.getRhs().getElements()) {
                if (!smallProduction.get(0).equals("EPSILON"))
                    productionsRHS.add(smallProduction);
                else {
                    productionsRHS.add(new ArrayList<>(List.of("EPSILON", p.getLhs())));
                }
            }
        }

        for (Production p : productions.getElements()) {
            String key = p.getLhs();
            for (var smallProduction : p.getRhs().getElements()) {
                String firstSymbol = smallProduction.get(0);
                if (grammar.getTerminals().getElements().contains(firstSymbol)) {
                    if (parseTable.get(new Pair<>(key, firstSymbol)).getFirst().equals("error"))
                        parseTable.put(new Pair<>(key, firstSymbol), new Pair<>(String.join(",", smallProduction), productionsRHS.indexOf(smallProduction) + 1));
                    else {
                        try {
                            throw new IllegalAccessException("CONFLICT IN THE PARSE TABLE: pair " + key + ", " + firstSymbol);
                        } catch (IllegalAccessException e) {
                            e.printStackTrace();
                        }
                    }
                } else if (grammar.getNonterminals().getElements().contains(firstSymbol)) {
                    if (smallProduction.size() == 1) {
                        for (var symbol : firstSets.get(firstSymbol).getElements()) {
                            if (symbol.equals("EPSILON"))
                                symbol = "$";
                            if (parseTable.get(new Pair<>(key, symbol)).getFirst().equals("error"))
                                parseTable.put(new Pair<>(key, symbol), new Pair<>(String.join(",", smallProduction), productionsRHS.indexOf(smallProduction) + 1));
                            else {
                                try {
                                    throw new IllegalAccessException("CONFLICT IN THE PARSE TABLE: pair " + key + "," + symbol);
                                } catch (IllegalAccessException e) {
                                    e.printStackTrace();
                                }
                            }
                        }
                    } else {
                        int index = 1;
                        String nextSymbol = smallProduction.get(1); //al doilea symbol
                        MySet<String> firstSetForSmallProduction = firstSets.get(firstSymbol);

                        while (index < smallProduction.size() && grammar.getNonterminals().getElements().contains(nextSymbol)) {
                            MySet<String> firstForNext = firstSets.get(nextSymbol);
                            if (firstSetForSmallProduction.contains("EPSILON")) {
                                firstSetForSmallProduction.remove("EPSILON");
                                firstSetForSmallProduction.addAll(firstForNext);
                            }
                            index++;
                            if (index < smallProduction.size())
                                nextSymbol = smallProduction.get(index);
                        }

                        for (String symbol : firstSetForSmallProduction.getElements()) {
                            if (symbol.equals("EPSILON"))
                                symbol = "$";
                            if (parseTable.get(new Pair<>(key, symbol)).getFirst().equals("error"))
                                parseTable.put(new Pair<>(key, symbol), new Pair<>(String.join(",", smallProduction), productionsRHS.indexOf(smallProduction) + 1));
                            else {
                                try {
                                    throw new IllegalAccessException("CONFLICT IN THE PARSE TABLE: pair " + key + "," + symbol);
                                } catch (IllegalAccessException e) {
                                    e.printStackTrace();
                                }
                            }
                        }
                    }
                } else {
                    MySet<String> followLHS = followSets.get(key);
                    for (String symbol : followLHS.getElements()) {
                        if (symbol.equals("EPSILON")) {
                            if (parseTable.get(new Pair<>(key, "$")).getFirst().equals("error")) {
                                var prod = new ArrayList<>(List.of("EPSILON", key));
                                parseTable.put(new Pair<>(key, "$"), new Pair<>("EPSILON", productionsRHS.indexOf(prod) + 1));
                            } else {
                                try {
                                    throw new IllegalAccessException("CONFLICT IN THE PARSE TABLE: pair " + key + "," + symbol);
                                } catch (IllegalAccessException e) {
                                    e.printStackTrace();
                                }
                            }
                        } else if (parseTable.get(new Pair<>(key, symbol)).getFirst().equals("error")) {
                            var prod = new ArrayList<>(List.of("EPSILON", key));
                            parseTable.put(new Pair<>(key, symbol), new Pair<>("EPSILON", productionsRHS.indexOf(prod) + 1));
                        } else {
                            try {
                                throw new IllegalAccessException("CONFLICT IN THE PARSE TABLE: pair " + key + "," + symbol);
                            } catch (IllegalAccessException e) {
                                e.printStackTrace();
                            }
                        }

                    }
                }
            }
        }
    }

    public List<Integer> parseSequence(List<String> sequence) {
        Stack<String> alpha = new Stack<>();
        Stack<String> beta = new Stack<>();
        List<Integer> result = new ArrayList<>();
        alpha.push("$");
        for (var i = sequence.size() - 1; i >= 0; --i)
            alpha.push(sequence.get(i));

        beta.push("$");
        beta.push(grammar.getStartingSymbol());

        while (!(alpha.peek().equals("$") && beta.peek().equals("$"))) {
            String alphaPeek = alpha.peek();
            String betaPeek = beta.peek();
            Pair<String, String> key = new Pair<>(betaPeek, alphaPeek);
            Pair<String, Integer> value = parseTable.get(key);
            if (!value.getFirst().equals("error")) {
                if (value.getFirst().equals("pop")) {
                    alpha.pop();
                    beta.pop();
                } else {
                    beta.pop();
                    if (!value.getFirst().equals("EPSILON")) {
                        String[] val = value.getFirst().split(",");
                        for (var i = val.length - 1; i >= 0; --i)
                            beta.push(val[i]);
                    }
                    result.add(value.getSecond());
                }
            } else {
                System.out.println("Syntax error for key " + key);
                System.out.println("Current alpha and beta for sequence parsing:");
                System.out.println(alpha);
                System.out.println(beta);
                result = new ArrayList<>(List.of(-1));
                return result;
            }
        }

        return result;

    }

    public String printParseTable() {
        StringBuilder builder = new StringBuilder();
        parseTable.forEach((k, v) -> {
            builder.append(k).append(" -> ").append(v).append("\n");
        });
        return builder.toString();
    }

    public List<String> getProductionByOrderNumber(int order) {
        var production = productionsRHS.get(order - 1);
        if (production.contains("EPSILON"))
            return List.of("EPSILON");
        return production;
    }

    public Grammar getGrammar() {
        return grammar;
    }

    public List<String> readSequence(String file) throws IOException {
        File f = new File(file);
        List<String> sequence = new ArrayList<>();
        BufferedReader reader = new BufferedReader(new FileReader(f));
        String line;
        while ((line = reader.readLine()) != null) {
            sequence = Arrays.stream(line.split(" ")).toList();

        }
        return sequence;
    }

    public MySet<List<String>> getProductionsRHS() {
        return productionsRHS;
    }
}
