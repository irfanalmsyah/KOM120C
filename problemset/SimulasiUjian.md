# Simulasi Ujian

## Description
Pada problem ini, buatlah sebuah program berorientasi objek dengan bahasa Java untuk mensimulasikan suatu ujian. Suatu ujian terdiri atas beberapa soal isian. Soal isian berisi pasangan pertanyaan dan kunci jawaban yang dapat diperiksa dengan jawaban yang diberikan. Nilai ujian diberikan dengan formula Jumlah Jawaban Benar / Total Pertanyaan. 

Program yang dibuat harus memuat setidaknya kelas Soal, kelas SoalIsian, dan kelas Ujian serta sebuah interface bernama Answerable yang memiliki abstract method:
```
boolean cekJawaban(String jawaban);
``` 
Jawaban yang tidak memuat hal-hal di atas secara lengkap akan diberi nilai 0 pada pemeriksaan manual.

## Input Format
1. Baris pertama berisi jumlah pertanyaan (N) yang diberikan pada ujian (maksimal 100). 
2. Dua baris berikutnya berisi pasangan pertanyaan dan kunci jawaban, dengan total N pasangan pertanyaan dan kunci jawaban. 
3. Baris berikutnya adalah sebuah bilangan bulat yang berisi jumlah pertanyaan yang dijawab. 
4. Dua baris berikutnya berisi nomor pertanyaan yang dijawab dan jawaban yang diberikan. Satu pertanyaan hanya bisa dijawab paling banyak satu kali, namun pertanyaan tidak harus dijawab secara berurutan. 


## Output Format
Sebuah bilangan bulat dengan dua digit di belakang koma yang merupakan nilai yang diperoleh. Akhiri dengan karakter newline.

## Sample Input
```
3
Nama Ibukota Indonesia?
DKI Jakarta
Kampus IPB salah satunya terletak di? 
Darmaga
Nama Fakultas dengan Kode G?
FMIPA
3
2
Dramaga
1
DKI Jakarta
3
FMIPA
```

## Sample Output
```
66.67
```

## Penjelasan
Pada contoh di atas, pertanyaan dijawab dengan urutan pertanyaan 2, 1, dan 3. Karena 2 dari 3 jawaban benar, maka nilai akhir yang diberikan adalah 66.67.  