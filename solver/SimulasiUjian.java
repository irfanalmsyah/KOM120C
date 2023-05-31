import java.util.Scanner;

interface Answerable {
    boolean cekJawaban(String jawaban);
}


class Soal implements Answerable {
    private String pertanyaan;
    private String jawaban;

    public Soal (String pertanyaan, String jawaban) {
        this.pertanyaan = pertanyaan;
        this.jawaban = jawaban;
    }

    public boolean cekJawaban(String jawaban) {
        return jawaban.equals(this.jawaban); // return true if jawaban adalah jawaban  
    }

}

class SoalIsian extends Soal {
    public SoalIsian(String soalpertanyaan, String kuncijawaban) { // parameter soalpertanyaan dan kuncijawaban
        super(soalpertanyaan, kuncijawaban);
    }

    public boolean cekJawaban(String jawaban) {
        return super.cekJawaban(jawaban);
    }

}

class Ujian {
    private SoalIsian[] soalIsian;
    private int jumlahSoal;
    private int jumlahBenar;
    Scanner input = new Scanner(System.in);

    // method untuk menerima soal
    public void getSoal() {
        int n = input.nextInt();
        input.next(); // untuk mengabaikan newline, karena nextInt() menerima input int dan tidak mengabaikan newline
        for (int i = 0; i < n; i++) {
            String pertanyaan = input.nextLine(); // kalau next aja itu membaca sampe white space aj, klo nextLine itu membaca sampe newline pertama
            String jawaban = input.nextLine();
            soalIsian[i] = new SoalIsian(pertanyaan, jawaban);
        }  
        jumlahSoal = n;
    }

    // method untuk menerima jawaban
    public void getJawaban() {
        int n = input.nextInt();
        for (int i = 0; i < n; i++) {
            int nomor = input.nextInt();
            input.next(); // untuk mengabaikan newline, karena nextInt() menerima input int dan tidak mengabaikan newline
            String jawaban = input.nextLine();
            if (soalIsian[nomor-1].cekJawaban(jawaban)) {
                jumlahBenar++;
            }
        }
    }

    // method untuk menampilkan nilai
    public void getNilai() {
        double nilai = (double) jumlahBenar / jumlahSoal * 100;
        System.out.printf("%.2f\n", nilai);
    }

}
public class SimulasiUjian {
    public static void main(String[] args) {
        Ujian ujian = new Ujian();
        ujian.getSoal();
        ujian.getJawaban();
        ujian.getNilai();
    }
}
