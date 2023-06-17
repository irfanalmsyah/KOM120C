import java.util.Scanner;
import java.util.ArrayList;

interface FiturKubus {
    public double luasPermukaan();
    public double volume();
}

class Kubus implements FiturKubus {
    private double sisi;
    
    public Kubus(double sisi) {
        this.sisi = sisi;
    }
    
    public double luasPermukaan() {
        return 6 * sisi * sisi;
    }
    
    public double volume() {
        return sisi * sisi * sisi;
    }
}


public class LuasPermukaanDanVolumeKubus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double totalLuas = 0;
        double totalVolume = 0;
        ArrayList<Kubus> kubus = new ArrayList<Kubus>();
        for (int i = 0; i < n; i++) {
            double sisi = sc.nextDouble();
            Kubus k = new Kubus(sisi);
            kubus.add(k);
        }
        int indexAwal = sc.nextInt();
        int indexAkhir = sc.nextInt();
        for (int i = indexAwal; i <= indexAkhir; i++) {
            totalLuas += kubus.get(i - 1).luasPermukaan();
            totalVolume += kubus.get(i - 1).volume();
        }
        n = indexAkhir - indexAwal + 1;
        System.out.printf("%.2f %.2f\n", totalLuas/n, totalVolume/n);
    }    
}
