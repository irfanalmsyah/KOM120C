# Luas Permukaan dan Volume Kubus

## Description
Ada ketentuan bahwa semua objek 3D memiliki ukuran luas permukaan dan volume. Untuk itu, dibuat acuan pemrograman berupa interface sebagai berikut:
```java
interface FiturKubus {
    public double luasPermukaan();
    public double volume();
}
```
Saat ini Anda diminta mengolah sekumpulan objek kubus yang diketahui panjang sisinya. Kubus adalah bangun 3 dimensi dengan semua sisinya sama panjang, misalnya s. Luas permukaan kubus adalah 6s2, dan volume kubus adalah s3. Setiap objek kubus secara default memiliki panjang sisi nol (0), namun dapat diubah atau diisi nilai panjang sisi dengan menggunakan fungsi mutator.

Berdasarkan deskripsi ini, buatlah program Java untuk mengolah sekumpulan objek kubus, dan menampilkan rata-rata luas permukaan dan volume beberapa kubus yang ditentukan. Program harus menerapkan konsep OOP secara utuh, dan mengimplementasikan interface yang ada.

## Input Format
Baris pertama adalah sebuah bilangan bulat n dengan kisaran nilai  [1,10000], yang menunjukkan banyaknya kubus yang akan dibaca. Sebanyak n baris berikutnya adalah panjang sisi kubus yang memiliki kisaran nilai [0,10].
Baris terakhir adalah batas awal dan batas akhir dari objek kubus yang dihitung rata-rata luas permukaan dan volumenya.

## Output Format
Dua bilangan riil masing-masing dengan dua digit di belakang tanda desimal, yang merupakan rata-rata luas permukaan (di sebelah kiri) dan rata-rata volume (di sebelah kanan) dari beberapa kubus sesuai posisi awal dan posisi akhir kubus. Output dipisahkan oleh tepat satu spasi dan diakhiri dengan newline.

## Sample Input
```
4
1.0
2.0
3.0
4.0
2 4
```

## Sample Output
```
58.00 33.00
```