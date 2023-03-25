# Pembagian Kelas

## Description

Pak Wira akan mengajar di salah satu kelas mata kuliah Pemrograman. Mata kuliah ini telah dibagi ke dalam beberapa kelas paralel. Mula-mula, terdapat N orang mahasiswa yang mengambil mata kuliah tersebut. Pak Wira hanya akan mengajar di salah satu kelas paralel yang terdiri dari hanya M orang mahasiswa. Sebelum memulai perkuliahan, biasanya Pak Wira akan mencoba melihat data kelas tersebut dan merangkum dua hal terkait mahasiswa-mahasiswa pada kelas paralel yang akan diajarnya, yaitu:

- Jumlah mahasiswa laki-laki dan perempuan pada kelas tersebut
- Rata-rata IPK semua mahasiswa di kelas tersebut

Diberikan data-data seluruh mahasiswa serta daftar NIM mahasiswa yang akan masuk ke kelas paralel yang akan diajar oleh Pak Wira, tentukan kedua informasi di atas untuk membantu Pak Wira.

## Input Format
```

Masukan dimulai dengan sebuah baris berisi dua buah bilangan bulat, yaitu N (banyaknya mahasiswa yang mengambil mata kuliah Pemrograman). N baris berikutnya berisi data semua mahasiswa. Data setiap mahasiswa diberikan dalam satu baris berisi NIM, nama, jenis kelamin dan IPK (terpisahkan oleh spasi). NIM dinyatakan dengan sebuah string dengan format G64XXXXXX, dimana masing-masing X adalah sebuah digit (0 - 9) yang bisa berbeda. Nama mahasiswa dapat diasumsikan sebagai string dengan satu kata saja (tanpa spasi) dalam huruf kecil semua. Jenis kelamin berisi sebuah karakter ('L' = laki-laki, 'P' = perempuan). Sedangkan IPK berupa sebuah angka dengan dua bilangan di belakang desimal (antara 0 - 4). 

Baris berikutnya berisi satu buah bilangan bulat menyatakan M (jumlah mahasiswa di kelas Pak Wira). M buah baris berikutnya berisi masing-masing NIM dari seluruh mahasiswa di kelas Pak Wira. 
```

## Output Format
```
Keluaran berisi dua baris. Baris pertama berisi dua buah nilai menyatakan masing-masing banyaknya mahasiswa laki-laki dan mahasiswa perempuan di kelas Pak Wira. Baris kedua berisi satu buah angka dengan dua digit di belakang tanda desimal, menyatakan rata-rata IPK mahasiswa di kelas Pak Wira. 
```

## Sample Input
```
10
G64100123 cici P 3.51
G64200201 rina P 3.23
G64123103 egi L 3.01
G64987125 toni L 3.41
G64893124 didi L 2.89
G64765309 sofia P 3.14
G64192837 emma P 3.45
G64564738 azam L 3.78
G64112334 ammar L 3.85
G64997755 zayn L 3.75
5
G64123103
G64112334
G64893124
G64200201
G64192837 
```

## Sample Output
```
3 2
3.29

```

## Penjelasan Contoh
Terdapat 10 mahasiswa yang mengambil mata kuliah Pemrograman. Di antara 10 orang tersebut, terdapat 5 orang yang akan masuk ke kelas paralel yang akan diajar oleh Pak Wira. 3 orang di antaranya adalah laki-laki, dan 2 orang perempuan. Rata-rata IPK dari kelima orang tersebut adalah 3.29.
Batasan
```
1 ≤ N ≤ 100'000
1 ≤ Mi ≤ N
Panjang setiap nama tidak lebih dari 20 karakter (huruf kecil semua tanpa spasi)
```