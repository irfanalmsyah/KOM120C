import java.util.Scanner;

public class BilanganPecahan {
    private int utama, pembilang, penyebut;

    // Default constructor yang menginisialisasi pecahan menjadi 0/1
    public BilanganPecahan() {
        utama = 0;
        pembilang = 0;
        penyebut = 1;
    }

    // Method untuk mengatur nilai objek Pecahan berdasarkan user input.
    public void setPecahan(Scanner sc) {
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        utama = a;
        pembilang = b;
        penyebut = c;
    }

    // Method untuk menambahkan dua pecahan.
    public void add(BilanganPecahan p) {
        BilanganPecahan temp = new BilanganPecahan();
        int atas1 = (utama * penyebut + pembilang);
        int atas2 = (p.utama * p.penyebut + p.pembilang);
        if (penyebut == p.penyebut) {
            temp.penyebut = penyebut;
            temp.pembilang = atas1 + atas2;
        } else {
            temp.penyebut = penyebut * p.penyebut;
            temp.pembilang = atas1 * p.penyebut + atas2 * penyebut;
        }
        utama = temp.utama;
        pembilang = temp.pembilang;
        penyebut = temp.penyebut;
    }

    // Method untuk mengalikan dua pecahan.
    public void multiply(BilanganPecahan p) {
        BilanganPecahan temp = new BilanganPecahan();
        int atas = (utama * penyebut + pembilang) * (p.utama * p.penyebut + p.pembilang);
        int bawah = penyebut * p.penyebut;
        temp.penyebut = bawah;
        temp.pembilang = atas;
        utama = temp.utama;
        pembilang = temp.pembilang;
        penyebut = temp.penyebut;
    }

    // Method untuk mengincrement nilai pecahan sebesar 1.
    public void inc() {
        utama++;
    }

    // method untuk mengdecrement nilai pecahan sebesar 1.
    public void dec() {
        utama--;
    }

    // Method untuk mencetak pecahan dalam format bilangan pecahan campuran atau pecahan biasa
    public void print() {
        if (penyebut == 0) {
            System.out.println("0");
            return;
        }
        int gcd = getGcd(pembilang, penyebut);
        pembilang /= gcd;
        penyebut /= gcd;
        if (pembilang == penyebut) {
            utama += pembilang / penyebut;
            pembilang = 0;
            penyebut = 1;
            System.out.println(utama);
        } else if (pembilang > penyebut) {
            utama += pembilang / penyebut;
            pembilang %= penyebut;
            if (pembilang == 0) {
                System.out.println(utama);
            }
            else {
                System.out.println(utama + " " + pembilang + "/" + penyebut);
            }
        }
        else if (pembilang == 0) {
            System.out.println(utama);
        }
        else {
            System.out.println(utama + " " + pembilang + "/" + penyebut);
        }
        
    }

    /* 
        Code berikut mengimplementasikan algoritma Euclidean untuk menghitung faktor persekutuan terbesar
        (FPB) dari dua bilangan bulat a dan b.
        1. Jika b sama dengan 0, maka a adalah FPB dan fungsi mengembalikan a.
        2. Jika tidak, fungsi menghitung sisa dari a dibagi b menggunakan operator modulo %.
        3. Fungsi kemudian memanggil dirinya sendiri secara rekursif dengan b dan sisa sebagai argumennya.
        4. Ini terus berlanjut sampai b sama dengan 0, di mana titik FPB ditemukan dan dikembalikan.
    */
    private int getGcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return getGcd(b, a % b);
    }

    // Method main driver untuk berinteraksi dengan user dan melakukan berbagai operasi pada pecahan
    public static void main(String[] args) {
        BilanganPecahan pecahan = new BilanganPecahan();
        
        // Buat objek scanner baru untuk membaca input dari user
        Scanner sc = new Scanner(System.in);
        String instruksi;
        
        // Baca instruksi pertama dari user
        instruksi = sc.next();

        // Lanjutkan memproses instruksi sampai instruksi "end" diterima
        while (!instruksi.equals("end")) {
            // Lakukan operasi yang sesuai berdasarkan instruksi
            if (instruksi.equals("set")) {
                pecahan.setPecahan(sc);
            } else if (instruksi.equals("p")) {
                pecahan.print();
            } else if (instruksi.equals("add")) {
                BilanganPecahan temp = new BilanganPecahan();
                temp.setPecahan(sc);
                pecahan.add(temp);
            } else if (instruksi.equals("mul")) {
                BilanganPecahan temp = new BilanganPecahan();
                temp.setPecahan(sc);
                pecahan.multiply(temp);
            } else if (instruksi.equals("inc")) {
                pecahan.inc();
            } else if (instruksi.equals("dec")) {
                pecahan.dec();
            }

            // Baca instruksi selanjutnya dari user
            instruksi = sc.next();
        }
    }
}