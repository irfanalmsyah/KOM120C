import java.util.ArrayList;
import java.util.Scanner;

abstract class Buah {
    int hargaPerGram;
    int berat;
    int id;
    String warna;

    public abstract int getHarga();
}

class Pisang extends Buah {
    String jenis;

    public Pisang(int id, int berat, String jenis, String warna) {
        this.id = id;
        this.berat = berat;
        this.jenis = jenis;
        this.warna = warna;
        this.hargaPerGram = 20;
    }

    public int getHarga() {
        return hargaPerGram * berat;
    }
}

class Anggur extends Buah {
    boolean isBerbiji;

    public Anggur(int id, int berat, boolean isBerbiji, String warna) {
        this.id = id;
        this.berat = berat;
        this.isBerbiji = isBerbiji;
        this.warna = warna;
        this.hargaPerGram = 50;
    }

    public int getHarga() {
        return hargaPerGram * berat;
    }
}

class Melon extends Buah {
    boolean iSDipotong;

    public Melon(int id, int berat, boolean iSDipotong, String warna) {
        this.id = id;
        this.berat = berat;
        this.iSDipotong = iSDipotong;
        this.warna = warna;
        this.hargaPerGram = 100;
    }

    public int getHarga() {
        return hargaPerGram * berat;
    }
}


class Keranjang {
    ArrayList<Buah> buah = new ArrayList<Buah>();
    int maxBerat;

    public Keranjang(int maxBerat) {
        this.maxBerat = maxBerat;
    }

    public void addBuah(Buah b) {
        if (b.berat + getBerat() <= maxBerat) {
            buah.add(b);
        }
    }

    public int getBerat() {
        int totalBerat = 0;
        for (Buah b : buah) {
            totalBerat += b.berat;
        }
        return totalBerat;
    }

    public int getHarga() {
        int totalHarga = 0;
        for (Buah b : buah) {
            totalHarga += b.getHarga();
        }
        return totalHarga;
    }
}

class Parcel {
    Scanner sc = new Scanner(System.in);
    Keranjang keranjang;
    int beratParcel;
    
    public void createKeranjang() {
        String ukuranKeranjang = sc.nextLine();
        if (ukuranKeranjang.equals("Kecil")) {
            keranjang = new Keranjang(300);
        } else if (ukuranKeranjang.equals("Sedang")) {
            keranjang = new Keranjang(500);
        } else if (ukuranKeranjang.equals("Besar")) {
            keranjang = new Keranjang(1000);
        }
    }

    public void addBuah() {
        String input;
        while (true) {
            input = sc.next();
            if (input.equals("purchase")) {
                break;
            }
            int id = sc.nextInt();
            String jenisBuah = sc.next();
            int berat = sc.nextInt();
            if (jenisBuah.equals("Pisang")) {
                String warna = sc.next();
                String jenisPisang = sc.next();
                Pisang p = new Pisang(id, berat, jenisPisang, warna);
                keranjang.addBuah(p);
            } else if (jenisBuah.equals("Anggur")) {
                String isBerbijiString = sc.next();
                boolean isBerbiji = false;
                if (isBerbijiString.equals("berbiji")) {
                    isBerbiji = true;
                }
                String warna = sc.next();
                Anggur a = new Anggur(id, berat, isBerbiji, warna);
                keranjang.addBuah(a);
            } else if (jenisBuah.equals("Melon")) {
                String isDipotongString = sc.next();
                boolean isDipotong = false;
                if (isDipotongString.equals("dipotong")) {
                    isDipotong = true;
                }
                String warna = sc.next();
                Melon m = new Melon(id, berat, isDipotong, warna);
                keranjang.addBuah(m);
            }
        }
        beratParcel = keranjang.getBerat();
    }

    public void cetak() {
        System.out.println(beratParcel + " " + keranjang.getHarga());
        for (Buah b : keranjang.buah) {
            System.out.println(b.id);
        }
    }
    
}

public class ParselBuah {
    public static void main(String[] args) {
        Parcel parcel = new Parcel();
        parcel.createKeranjang();
        parcel.addBuah();
        parcel.cetak();
    }
}
