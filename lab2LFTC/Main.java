public class Main {
    public static void main(String[] args) {
        SymbolTable symbolTable = new SymbolTable(13);
        try{
            System.out.println(symbolTable.getSize());
            System.out.println("aaaab: " + symbolTable.addIdentifier("aaaab"));
            System.out.println("constant: " + symbolTable.addConstant("constant"));
            System.out.println("tnatsnoc: " + symbolTable.addConstant("tnatsnoc"));
            System.out.println("aaaba: " + symbolTable.addIdentifier("aaaba"));
            System.out.println(symbolTable.containsIdentifier("aaaab"));
            System.out.println(symbolTable.containsConstant("constant"));
            System.out.println("aaaab is " + symbolTable.getPositionIdentifier("aaaab"));
            System.out.println("constant is " + symbolTable.getPositionConstant("constant"));
            System.out.println(symbolTable);
            System.out.println(symbolTable.deleteIdentifier("aaaab"));
            System.out.println(symbolTable.deleteConstant("constant"));
            System.out.println(symbolTable);
            System.out.println(symbolTable.addIdentifier("aaaba"));
            //System.out.println(symbolTable.getPositionIdentifier("nuexista"));  #to test the exceptions
            //System.out.println(symbolTable.deleteConstant("constant"));
            //System.out.println(symbolTable.deleteIdentifier("aaaab"));
        }
        catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}