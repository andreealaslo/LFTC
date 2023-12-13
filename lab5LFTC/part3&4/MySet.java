package FA;

import java.util.*;
import java.util.function.BiConsumer;

public class MySet<T> {
    private final List<T> elements;

    public MySet() {
        this.elements = new ArrayList<>();
    }

    public void add(T element) {
        if (!contains(element)) {
            elements.add(element);
        }
    }

    public boolean contains(T element) {
        return elements.contains(element);
    }

    public int size() {
        return elements.size();
    }

    @Override
    public String toString() {
        return elements.toString();
    }

    public T getElementAtPosition(int position) {
        return elements.get(position);
    }

    public List<T> getElements() {
        return elements;
    }

    public void clear() {
        elements.clear();
    }

    public void addAll(MySet<T> set) {
        for(var element: set.getElements())
            add(element);
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        MySet<?> mySet = (MySet<?>) o;
        return elements.equals(mySet.elements);
    }

    @Override
    public int hashCode() {
        return Objects.hash(elements);
    }


    public void forEach(BiConsumer<? super T, ? super T> action) {
        Objects.requireNonNull(action);
        Iterator<T> iterator = elements.iterator();
        while (iterator.hasNext()) {
            T first = iterator.next();
            action.accept(first, first);
        }
    }

    public int indexOf(T element) {
        return elements.indexOf(element);
    }

    public boolean remove(T element) {
        return elements.remove(element);
    }

    public T get(int i) {
        return elements.get(i);
    }
}
