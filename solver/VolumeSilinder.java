import java.util.Scanner;

abstract class BangunDatar {
    abstract double luas();
}

class Lingkaran extends BangunDatar {
    protected double diameter;
    
    public Lingkaran(double diameter) {
        setDiameter(diameter);
    }
    
    public void setDiameter(double diameter) {
        this.diameter = diameter;
    }
    
    public double luas(){
        return Math.PI * diameter * diameter / 4;
    }
}

class Segiempat extends BangunDatar {
    protected double panjang = 0.0;
    protected double lebar = 0.0;

    public Segiempat(double panjang, double lebar) {
        setPanjang(panjang);
        setLebar(lebar);
    }

    public void setPanjang(double panjang) {
        this.panjang = panjang;
    }

    public void setLebar(double lebar) {
        this.lebar = lebar;
    }

    public double luas(){
        return panjang * lebar;    
    }
}

class Silinder {
    protected double diameter;
    protected double tinggi;
    protected double volume;
    protected Lingkaran alas;
    protected Segiempat selimut;
    
    public Silinder(double diameter, double lebar, double tinggi) {
        this.diameter = diameter;
        this.tinggi = tinggi;
        alas = new Lingkaran(diameter);
        selimut = new Segiempat(lebar, tinggi);
        volume = hitungVolume();
    }
    
    public double hitungVolume() {
        return alas.luas() * this.tinggi;
    }
    
}

public class VolumeSilinder {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Silinder[] silinder = new Silinder[n];
        double totalVolume = 0.0;
        for (int i = 0; i < n; i++) {
            double diameter = sc.nextDouble();
            double lebar = sc.nextDouble();
            double tinggi = sc.nextDouble();
            silinder[i] = new Silinder(diameter, lebar, tinggi);
            totalVolume += silinder[i].volume;
        }
        double rataVolume = totalVolume / n;
        int aboveRata = 0;
        for (int i = 0; i < n; i++) {
            if (silinder[i].volume > rataVolume) {
                aboveRata++;
            }
        }
        System.out.printf("%.2f %d\n", rataVolume, aboveRata);
	}
}
