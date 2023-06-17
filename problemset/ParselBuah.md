# Parsel Buah

## Description
Toko Buah Harapan Kita Semua membuat sebuah aplikasi yang memungkinkan pelanggan memesan parsel buah premium sesuai dengan keinginan mereka. Sebuah paket parsel buah terdiri atas sebuah keranjang kayu dan sekumpulan buah (1 <= n < 100). Spesifikasi jenis keranjang dan buah yang dapat dimasukkan ke dalam parsel terdapat pada tabel berikut.

|Jenis Keranjang|Berat Maksimum|
|---|---|
|Kecil|300 gram|
|Sedang|500 gram|
|Besar|1000 gram|

|Buah|Harga|Informasi|
|---|---|---|
|Pisang|20 per gram|Berat, jenis, warna|
|Anggur|50 per gram|Berat, berbiji?, warna|
|Melon|100 per gram|Berat, dipotong?, warna|

Pengguna akan menyusun parsel buahnya dengan aturan berikut.
- Setiap buah yang dipilih oleh pengguna akan diberikan id. 
- Pengguna dapat menambahkan buah ke dalam keranjang selama keranjang parsel masih dapat menampung berat buah tersebut. 
- Apabila keranjang tidak bisa menampung buah tersebut, maka buah tersebut tidak dimasukkan ke dalam keranjang. 

Buatlah program menggunakan pendekatan berorientasi objek untuk mensimulasikan aktivitas di atas. Program Anda harus mengandung kelas Parsel yang di dalamnya terdapat koleksi yang menampung seluruh buah yang dimasukkan. Program Anda juga harus mengandung setidaknya satu hubungan pewarisan. 
## Input Format
- Baris pertama adalah sebuah string yang merupakan jenis keranjang. 
- Setiap baris berikutnya terdiri atas komponen berikut yang dipisahkan oleh spasi:
  - Tanda + untuk menambah barang. 
  - Id dari barang yang dimasukkan. 
  - Nama buah.
  - Berat buah (bilangan bulat).
  - Informasi lainnya, bergantung pada jenis buah. Setiap informasi ini hanya terdiri atas satu kata. 
- Masukan diakhiri oleh sebuah baris yang berisi kata purchase.

## Output Format
Baris pertama terdiri atas dua buah bilangan yang merupakan total berat pada parsel buah dan total harga dari parsel tersebut. Setelah itu, seluruh id barang yang masuk pada parsel akan dicetak pada baris berbeda, sesuai dengan urutan dimasukkannya barang tersebut ke dalam parsel. Akhiri setiap baris dengan karakter newline.

## Sample Input 1
```
Besar
+ 100 Pisang 150 Cavendish Kuning
+ 101 Anggur 150 Tidak Hijau
+ 102 Anggur 100 Ya Ungu
+ 103 Melon 200 Ya Hijau
+ 104 Melon 500 Tidak Kuning
+ 105 Melon 400 Tidak Kuning
purchase
```

## Sample Output 1
```
1000 75500
100
101
102
103
105
```

## Sample Input 2
```
Sedang
+ 100 Pisang 150 Cavendish Kuning
+ 104 Melon 500 Tidak Kuning
purchase
```

## Sample Output 2
```
150 3000
100
```