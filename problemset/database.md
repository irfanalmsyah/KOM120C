# Database Stok Barang

## Description
Toko Cek Sebelah sedang menyusun database barang jualan. Setiap barang memiliki atribut berupa nomor id barang (unik), kelompok, nama barang, dan jumlah (unit). Kelompok dan nama barang selalu berupa satu kata.

Stok seluruh barang yang ada di Toko Cek Sebelah dimasukkan ke dalam database Stok. Dengan demikian, pengolahan terkait stok ini dapat dengan mudah dilakukan, antara lain menghitung banyaknya jenis barang di setiap kelompok yang ada. Atau bisa juga menampilkan daftar barang di kelompok tertentu.

Susunkan program berorientasi objek untuk menyusun data stok barang tersebut. Dan selanjutnya gunakan program tersebut untuk membaca data dan menyajikan informasi seperti yang tertuang pada input/output di bawah ini. Paradigma OOP harus menjadi tumpuan utama dalam mengembangkan program untuk problem ini. Penalti diberikan jika tidak menerapkan paradigma OOP dalam program yang dibuat.

## Input Format
```
Beberapa baris nama kelompok dan jumlah jenis barang per kelompok, yang terurut berdasarkan jumlah jenis barang secara descending (menurun). Jika jumlah jenis barang sama, maka data diurutkan berdasarkan nama kelompok barang secara ascending. 
Selanjutnya adalah beberapa baris nama barang per kelompok yang terurut berdasarkan nama barang secara menaik (ascending).
```

## Output Format
```
Sebuah pola segitiga dengan menggunakan string * dan diakhiri dengan newline
```

## Sample Input
```
7
121 Komputer Laptop 3
211 Furniture KursiLipat 52
212 Furniture KursiKayu 72
221 Furniture Lemari 6
231 AlatMakan Sendok 61
241 AlatMakan Garpu 85
111 Komputer PC 2
2
AlatMakan
Komputer
```

## Sample Output
```
Furniture 3
AlatMakan 2
Komputer 2
*****
Daftar Barang AlatMakan
Garpu 85
Sendok 61
*****
Daftar Barang Komputer
Laptop 3
PC 2

```