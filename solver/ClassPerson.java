import java.util.Scanner;

public class ClassPerson {
    private String nama;
    private int usia, tinggi;
    private double berat;

    public ClassPerson() {
        nama = "";
        usia = 0;
        tinggi = 0;
        berat = 0;
    }

    public void setPerson(String nama, int usia, int tinggi, double berat) {
        this.nama = nama;
        this.usia = usia;
        this.tinggi = tinggi;
        this.berat = berat;
    }

    public String getNama() {
        return nama;
    }

    public int getUsia() {
        return usia;
    }

    public int getTinggi() {
        return tinggi;
    }

    public double getBerat() {
        return berat;
    }

    public double getIMT() {
        return berat / (tinggi * tinggi) * 10000;
    }

    public String getStatusGizi() {
        double imt = getIMT();
        if (imt < 17) {
            return "sangat kurus";
        } else if (imt < 18.5) {
            return "kurus";
        } else if (imt < 25) {
            return "normal";
        } else if (imt < 28) {
            return "gemuk";
        } else {
            return "sangat gemuk";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double totalTinggi = 0;
        int n;
        n = sc.nextInt();
        ClassPerson[] p = new ClassPerson[n];
        for (int i = 0; i < n; i++) {
            p[i] = new ClassPerson();
            String nama = sc.next();
            int usia = sc.nextInt();
            int tinggi = sc.nextInt();
            double berat = sc.nextDouble();
            p[i].setPerson(nama, usia, tinggi, berat);
            totalTinggi += p[i].getTinggi();
        }
        int tinggiDiatasRata = 0;
        int statusGizi[] = {0, 0, 0, 0, 0};
        for (int i = 0; i < n; i++) {
            System.out.println(p[i].getNama() + " " + p[i].getUsia());
            if (p[i].getTinggi() > totalTinggi / n) {
                tinggiDiatasRata++;
            }
            if (p[i].getStatusGizi().equals("sangat kurus")) {
                statusGizi[0]++;
            } else if (p[i].getStatusGizi().equals("kurus")) {
                statusGizi[1]++;
            } else if (p[i].getStatusGizi().equals("normal")) {
                statusGizi[2]++;
            } else if (p[i].getStatusGizi().equals("gemuk")) {
                statusGizi[3]++;
            } else {
                statusGizi[4]++;
            }
        }
        System.out.printf("%.2f\n", totalTinggi / n);
        System.out.println(tinggiDiatasRata);
    }
}


