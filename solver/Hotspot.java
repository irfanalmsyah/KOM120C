import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

class Titik implements Comparable<Titik> {
    int x, y;

    public Titik(int x, int y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public int compareTo(Titik other) {
        if (x < other.x || (x == other.x && y < other.y)) {
            return 1;
        } else if (x == other.x && y == other.y) {
            return 0;
        } else {
            return -1;
        }
    }
}

class Points {
    private Set<Titik> points = new TreeSet<>();

    public void insertPoint(Scanner scanner) {
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        Titik p = new Titik(x, y);
        points.add(p);
    }

    public void printPoints() {
        System.out.println(points.size());
        for (Titik p : points) {
            if (p.y > 0) {
                System.out.printf("(%d,%d)", p.x, p.y);
            }
        }
        System.out.println();
    }
}

public class Hotspot {
    public static void main(String[] args) {
        Points p = new Points();
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            p.insertPoint(scanner);
        }
        p.printPoints();
    }
}
