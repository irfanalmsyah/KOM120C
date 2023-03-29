# Class Person

## Description
Buatlah program yang mengimplementasikan sebuah class bernama Person, yang memiliki atribut nama (string), usia (int), tinggi (int), dan berat (double). Default contructor class ini akan secara otomatis mengisi atribut nama dengan string kosong, dan atribut lainnya diisi dengan nilai 0 (nol). Class Person memiliki prosedur bernama setPerson untuk mengisi nilai setiap atribut. 
Tambahkan prosedur lainnya agar dapat memproses apa yang diminta oleh program utama (main) yang diuraikan di bawah ini.

Program akan membaca n baris data yang berisi nama, usia, tinggi badan, dan berat badan. Gunakan class Person untuk menyimpan n data tersebut. Selanjutnya program akan menuliskan seluruh nama dan usia, dan dilanjutkan dengan menuliskan rata-rata tinggi badan, serta banyaknya orang (person) yang tinggi badannya di atas nilai rata-rata. Program harus benar-benar mengimplementasikan class bagi obyek Person. Oleh karena itu, tidak diperkenankan mengolah data yang berasal dari variabel biasa (bukan atribut dari class). Semua atribut class dikelompokkan sebagai private.

## Input Format
Baris pertama adalah sebuah bilangan bulat n, 1≤n≤100, yang menunjukkan banyaknya baris data yang akan dibaca. Dan n baris berikutnya berisi data nama, usia, tinggi badan, dan berat badan yang masing-masing dipisahkan oleh satu spasi. Nama orang berupa string dengan hanya terdiri atas satu kata.

## Output Format
Daftar nama orang dan usia yang dipisahkan oleh satu spasi, diikuti oleh nilai rata-rata tinggi badan(dengan dua digit di belakang tanda desimal), dan banyaknya orang dengan tinggi badan di atas rata-rata. Output program diakhiri dengan newline.

## Sample Input
```
4
Dudung 20 165 60.5
Abdullah 21 160 70.2
Sempurna 19 170 80.1
Oskadon 17 155 90.0
```

## Sample Output
```
Dudung 20
Abdullah 21
Sempurna 19
Oskadon 17
162.50
2
```