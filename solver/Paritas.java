import java.util.Scanner;

public class Paritas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        if (n % 2 == 0) {
            System.out.println("GENAP");
        } else {
            System.out.println("GANJIL");
        }
    }
}
