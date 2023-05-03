import java.util.Scanner;

interface Tanah {
    public double keliling();
}

class PersegiPanjang implements Tanah {
    private double panjang;
    private double lebar;

    public PersegiPanjang(double panjang, double lebar) {
        this.panjang = panjang;
        this.lebar = lebar;
    }

    @Override
    public double keliling() {
        return 2 * (panjang + lebar);
    }
}

class Lingkaran implements Tanah {
    private double radius;

    public Lingkaran(double radius) {
        this.radius = radius;
    }

    @Override
    public double keliling() {
        return 2 * Math.PI * radius;
    }
}

public class TanahManager {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Tanah[] tanah = new Tanah[n];
        double totalKeliling = 0;
        double pagar = 0;
        for (int i = 0; i < n; i++) {
            String jenis = sc.next();
            if (jenis.equals("0")) {
                double panjang = sc.nextDouble();
                double lebar = sc.nextDouble();
                tanah[i] = new PersegiPanjang(panjang, lebar);
                totalKeliling += tanah[i].keliling();
            } else if (jenis.equals("1")) {
                double radius = sc.nextDouble();
                tanah[i] = new Lingkaran(radius);
                totalKeliling += tanah[i].keliling();
            }
        }
        double rataKeliling = totalKeliling / n;
        for (int i = 0; i < n; i++) {
            if (tanah[i].keliling() > rataKeliling) {
                pagar += tanah[i].keliling();
            }
        }
        System.out.printf("%.2f\n", pagar);
    }
}

