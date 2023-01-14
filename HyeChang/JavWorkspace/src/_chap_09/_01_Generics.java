package _chap_09;

public class _01_Generics {
    public static void main(String[] args) {
        // 제네릭스
        Integer[] iArray = {1, 2, 3, 4, 5};
        Double[] dArray = {1.0, 2.0, 3.0, 4.0, 5.0};
        String[] sArray = {"A", "B", "C", "D", "E"};

        printIntArray(iArray);
        printDoubleArray(dArray);
        printStringArray(sArray);
        System.out.println("---------------");
        printAnyArray(iArray);
        printAnyArray(dArray);
        printAnyArray(sArray);

    }
    // T : Type
    public static <T> void printAnyArray(T[] Array){
        for(T t : Array){
            System.out.print(t + " ");
        }
        System.out.println();
    }

    public static void printIntArray(Integer[] iARray) {
        for(int Array : iARray){
            System.out.print(Array + " ");
        }
        System.out.println();
    }
    public static void printDoubleArray(Double[] dArray) {
        for(double Array : dArray){
            System.out.print(Array + " ");
        }
        System.out.println();
    }
    public static void printStringArray(String[] sArray) {
        for(String Array : sArray){
            System.out.print(Array + " ");
        }
        System.out.println();
    }
}
