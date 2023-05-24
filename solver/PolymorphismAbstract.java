import java.text.DecimalFormat;
import java.util.Scanner;

abstract class Bilangan{
    abstract public void print();
}

class BilanganDesimal extends Bilangan{
    public double nilai;
    
    BilanganDesimal(double nilai){
        this.nilai = nilai;
    }
    
    public void add(BilanganDesimal b){
        this.nilai += b.nilai;
    }
    
    public void print(){
        DecimalFormat df = new DecimalFormat("#.00");
        System.out.println(df.format(nilai));
    }
}

class BilanganPecahan extends Bilangan{
    public int pembilang;
    public int penyebut;
    
    BilanganPecahan(int pembilang, int penyebut){
        this.pembilang = pembilang;
        this.penyebut = penyebut;
    }
    
    void add(BilanganPecahan b){
        int p = this.pembilang;
        int q = this.penyebut;
        int r = b.pembilang;
        int s = b.penyebut;
        
        this.pembilang = p*s + q*r;
        this.penyebut = q * s;
        
        int fpb = 1;
        for(int i=1; i<=this.pembilang && i<=this.penyebut; i++){
            if(this.pembilang % i == 0 && this.penyebut % i == 0)
                fpb = i;
        }

        this.pembilang /= fpb;
        this.penyebut /= fpb;
    }
    
    public void print(){
        System.out.println(pembilang + " " + penyebut);
    }
}

public class PolymorphismAbstract{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Bilangan bilangan[] = new Bilangan[n];
        
        for (int i = 0; i < n; i++) {
            int type = sc.nextInt();
            if(type == 1) {
                BilanganDesimal a = new BilanganDesimal(sc.nextDouble());
                BilanganDesimal b = new BilanganDesimal(sc.nextDouble());
                a.add(b);
                bilangan[i] = a;
            } else {
                BilanganPecahan a = new BilanganPecahan(sc.nextInt(), sc.nextInt());
                BilanganPecahan b = new BilanganPecahan(sc.nextInt(), sc.nextInt());
                a.add(b);
                bilangan[i] = a;
            }
        }

        int i = sc.nextInt();
        int j = sc.nextInt();

        for (int k = i - 1; k <= j - 1; k++) {
            bilangan[k].print();
        }
    }
}