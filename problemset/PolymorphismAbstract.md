# Polymorphism Menggunakan Abstract Class

## Description
Buat program Java dengan menggunakan polymorphism dengan abstract class untuk menyelesaikan permasalahan berikut. Diberikan masukan berupa nilai n, diikuti n buah baris, masing-masing berisi dua kemungkinan:

- baris diawali angka 1 dan kemudian terdapat dua buah bilangan desimal a dan b
- baris diawali dengan angka 2, kemudian terdapat 4 buah bilangan bulat, p q r s yang melambangkan dua buah pecahan a = p/q dan b = r/s

Keluarkan beberapa buah baris yang berisi pecahan hasil penjumlahan a + b dari indeks ke-i sampai dengan indeks ke-j. Jika masukan pada sebuah baris adalah pecahan desimal, maka keluarkan jumlah dalam bentuk desimal pula (dengan 2 digit di belakang koma). Jika masukan adalah pecahan rasional, keluarkan dalam bentuk pecahan rasional pula (dalam bentuk paling sederhana). CATATAN: Pemeriksaan program akan dilakukan secara manual.

## Input Format
Baris pertama adalah sebuah bilangan bulat n yang menunjukkan banyaknya objek bilangan. Sebanyak n baris berikutnya adalah data dengan kemungkinan jenis 1 dan jenis 2 seperti pada deskripsi soal. Baris terakhir adalah indeks ke-i dan indeks ke-j yang menunjukkan awal dan akhir baris data yang ingin ditampilkan.

## Output Format
Beberapa baris output sesuai deskripsi soal. Setiap baris diakhiri dengan newline.

## Sample Input
```
5
1 0.3 0.25
2 1 2 1 4
2 1 3 1 1
1 1.5 3.78
2 1 2 3 4
2 5
```

## Sample Output
```
3 4
4 3
5.28
5 4
```