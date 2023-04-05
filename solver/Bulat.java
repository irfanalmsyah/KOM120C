import java.util.ArrayList;
import java.util.Scanner;

public class Bulat {
    private ArrayList<Integer> number = new ArrayList<Integer>();
    private int sumBefore;
    private int sumAfter;
    private int countAfter;

    public void read(Scanner sc) {
        int n = sc.nextInt();
        while (n != -9) {
            number.add(n);
            sumBefore += n;
            n = sc.nextInt();
        }
    }
    public void remove(Scanner sc) {
        if (number.size() == 0) {
            return;
        }
        sumAfter = sumBefore;
        countAfter = number.size();
        int n = sc.nextInt();
        while (n != -9) {
            sumAfter -= number.get(n - 1);
            countAfter--;
            n = sc.nextInt();
        }
    }
    public void print() {
        System.out.println(number.size() + " " + countAfter);
        if (number.size() > 0) {
            System.out.printf("%.2f ", (double) sumBefore / number.size());
        } else {
            System.out.print("-9.99 ");
        }
        if (countAfter > 0) {
            System.out.printf("%.2f\n", (double) sumAfter / countAfter);
        } else {
            System.out.print("-9.99\n");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Bulat b = new Bulat();
        b.read(sc);
        b.remove(sc);
        b.print();
    }
}
