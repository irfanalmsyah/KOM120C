# Interface Shape2D

## Description
Suatu bidang tertutup 2 dimensi (shape 2D) dicatat sebagai kumpulan n buah edge (sisi) yang menghubungkan n buah titik (x,y). Sebagai contoh poligon yang memiliki 8 sisi akan dihubungkan oleh titik (x0,y0) sampai dengan titik (x7,y7).

Sebuah interface Shape2D dibuat untuk memfasilitasi 3 fungsi sebagai berikut:

- set, fungsi untuk memberikan nilai n (banyaknya sisi) dan semua titik dalam bentuk array dari koordinat x dan array dari koordinat y.
- print, mencetak koordinat titik dan koordinat titik akhir dalam format [x0,y0]-[x(n-),y(n-1)].
- keliling, menghitung keliling dari poligon, yaitu total jumlah jarak Euclidean antara setiap titik.

Sekarang, buatlah program Java OOP yang membuat objek poligon dalam bentuk class Poligon yang mengimplementasi interface Shape2D. Program akan membaca data n dan koordinat titik sehingga dapat menghasilkan output seperti yang diberikan pada penjelasan di bawah ini.

## Input Format
Baris pertama berisi sebuah bilangan bulat n, 3<n, menunjukkan banyaknya sisi poligon yang akan dibuat. Diikuti oleh n baris koordinat x dan y, masing-masing bilangan riil yang dipisahkan oleh satu spasi.

## Output Format
Baris pertama adalah koordinat titik awal dan koordinat titik akhir dari poligon. Baris kedua adalah keliling poligon seperti definisi sebelumnya. Semua nilai ditulis dalam dua digit di belakang tanda desimal, dan setiap baris diakhiri oleh newline.

## Sample Input
```
5
-1.5 2.67
0 2.5
3.45 0
2.512 -2.5
-0.25 -1.58
```

## Sample Output
```
[-1.50,2.67]-[-0.25,-1.58]
15.78
```