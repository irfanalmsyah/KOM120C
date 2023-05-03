# Pewarisan Class Pegawai

## Description
PT Covid Corona Corp (CCC) ingin mengelola data kepegawaiannya. PT CCC memiliki 2 tipe pegawai, yaitu Pegawai Tetap dan Pegawai Harian. Perbedaan keduanya terletak pada sistem gaji, dimana Pegawai Tetap memiliki gaji pokok dan uang lembur, sedangkan Pegawai Harian hanya memiliki upah yang dihitung berdasarkan jumlah hari bekerja dalam sebulan.
Untuk membuat sistem pengolahan data kepegawaian ini, PT CCC telah meminta konsultan membuat program aplikasi. Konsultan tersebut telah menyusun kerangka program menggunakan platform OOP Java. 
Sebagai base class, dibuat bernama Pegawai sebagai berikut:

```java
class Pegawai
{
 protected String id;
 protected int usia;
 protected int tipe;
 protected int income;
 public Pegawai() { id=""; usia=income=0; tipe=1; }
 public void set(string pid, int u, int t ) {id=pid; usia=u; tipe=t; }
 public String getID() { return id; }
 public void show() { System.out.printf("%s %d %d\n", id, tipe, income); } 
};
```

Dari bentuk class ini, dapat diketahui bahwa semua pegawai PT CCC memiliki atribut id (identitas pegawai), usia (dalam tahun), tipe (kelompok pegawai dalam bentuk kode bilangan, 1: Pegawai Tetap, 2: Pegawai Harian), dan income (gaji dalam bulan tertentu dalam satuan ribu rupiah).
Dari base class ini, dibuat class turunan yaitu Tetap untuk semua pegawai tetap, dan Harian untuk semua pegawai harian. Selanjutnya dari ketiga class tersebut, dibuat program utama untuk membaca N data pegawai beserta informasi gaji.
Tanpa mengubah definisi class Pegawai, buatlah program lengkap untuk membaca input data dan menghasilkan output daftar gaji pada bulan tertentu seperti pada format data dan contoh yang diberikan.

## Input Format
```
[N : banyaknya pegawai, 1<N<100]
[N baris data pegawai : id, usia, tipe. Jika pegawai tetap, ada nilai gaji pokok.]
[T baris data gaji : id dan upah (pegawai harian) | uang lembur (pegawai tetap).]
END
```

## Output Format
Beberapa baris data id, tipe, dan penghasilan sebulan. Kelompok pegawai tetap di bagian atas, disambung dengan kelompok pegawai harian. Urutan data sesuai dengan urutan data masuk. Setiap baris diakhiri dengan newline.

## Sample Input
```
5
123456 19 1 5000
989212 21 1 6000
876523 20 2
092831 20 2
187632 19 1 5000
123456 2000
876523 1000
092831 5000
187632 4000
END
```

## Sample Output
```
123456 1 7000
989212 1 6000
187632 1 9000
876523 2 1000
092831 2 5000
```