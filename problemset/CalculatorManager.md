# Kalkulator

## Description
Suatu kalkulator akan memiliki nilai currentValue yang awalnya bernilai 0. Setelah itu, nilai tersebut akan dimodifikasi dengan operasi aritmatika yang diberikan terus menerus hingga kalkulator dimatikan. Pada soal ini, kalian diminta untuk membuat suatu interface yang mendefinisikan sifat suatu kalkulator yang dapat melakukan beberapa operasi matematika. Detail interface yang perlu kalian buat dapat dilihat pada deskripsi berikut:

[1] AritmatikaDasar - berisi fungsi-fungsi:
- double tambah(double a, double b): menjumlahkan a dan b.
- double kurang(double a, double b): mengurangi a dengan b.
- double kali(double a, double, b): mengalikan a dan b;
- double bagi(double a, double b): membagi a dengan b

[2] AritmatikaLanjut - berisi fungsi-fungsi:
- double akarKuadrat(double a): mengembalikan nilai akar kuadrat dari a.
- double pangkat(double a, double b): mengembalikan nilai a pangkat b

[3] KalkulatorSaintifik - merupakan kalkulator yang dapat melakukan operasi AritmatikaDasar dan AritmatikaLanjut. Juga memiliki fungsi void clear(): mengembalikan nilai currentValue pada kalkulator menjadi 0.

Selanjutnya buatlah objek kalkulator dengan jenis KalkulatorSaintifik yang mengolah data seperti pada penjelasan di bawah ini.

## Input Format
Setiap baris masukan merupakan salah satu dari tujuh kemungkinan berikut. Masukan akan diakhiri dengan simbol ~. 
```
- + X  :     menambah currentValue dengan X. 
- - X  :     mengurangi currentValue dengan X.
- * X  :     mengalikan currentValue dengan X.
- / X  :     membagi currentValue dengan X.
- ^ X  :     memangkatkan currentValue dengan X.
- #    :     akar kuadrat dari currentValue
- C    :     mengembalikan nilai currentValue menjadi 0.
- ~    :     mematikan kalkulator, program berhenti
```

## Output Format
Nilai-nilai currentValue setiap kali suatu operasi selesai dilakukan. Cetak dengan dua angka di belakang koma dan akhiri dengan newline.

## Sample Input
```
+ 10
- 5
* 2
/ 5
^ 2
#
C 
+ 5
~
```

## Sample Output
```
10.00
5.00
10.00
2.00
4.00
2.00
0.00
5.00
```