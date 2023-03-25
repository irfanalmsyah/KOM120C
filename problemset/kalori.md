# Menghitung Kalori

## Description
Kotaro sedang rajin menghitung kalori yang Ia konsumsi karena adanya tugas di kampusnya. Pada dasarnya, makanan akan dibagi dua jenis, yaitu makanan kaya kalori dan makanan kaya nutrisi. Jumlah kalori total dari suatu makanan dihitung berdasarkan seberapa banyak gula dan karbohidrat dalam makanan tersebut dengan rumus berikut:

Total Kalori = A * berat gula (gram) * + B * berat karbohidrat (gram).

Yang membedakan makanan kaya kalori dan kaya nutrisi adalah nilai A dan B. Makanan kaya kalori memiliki nilai A = 50 dan B = 20, sedangkan makanan kaya nutrisi memiliki nilai A = 20 dan B = 10;

Kotaro setiap harinya akan mencatat seluruh makanan yang ia makan, beserta dengan jenis makanan, berat gula, dan berat karbohidrat dalam makanan tersebut. Setelah seluruh makanan dimasukkan, Kotaro ingin mengetahui (a) total kalori yang Ia konsumsi pada hari tersebut dan (b) daftar makanan dengan total kalori > 1000. 

Susunkan program berorientasi objek untuk mensimulasikan hal di atas. Paradigma OOP harus menjadi tumpuan utama dalam mengembangkan program untuk problem ini. Program yang dibuat wajib menerapkan pewarisan (inheritance) pada objek-objek makanan kaya kalori/nutrisi yang diberikan. Penalti diberikan jika tidak menerapkan paradigma OOP dalam program yang dibuat.

## Input Format
```
[n, 1<n<20, banyaknya makanan yang Kotaro konsumsi setiap hari]
{[<Nama_Makanan> <Kalori/Nutrisi> <berat gula> <berat karbohidrat>]}
```

## Output Format
```
Baris pertama: Total kalori yang dikonsumsi pada hari tersebut.
Baris-baris berikutnya adalah nama makanan dengan total kalori > 1000, diurutkan sesuai dengan urutan pada input. 
```

## Sample Input
```
5
Martabak_Telur Kalori 200 500
Nasi_Goreng Kalori 100 400
Salad_Sayur Nutrisi 0 50
Brownies Kalori 400 400
Tomat Nutrisi 0 20
```

## Sample Output
```
61700
Martabak_Telur
Nasi_Goreng
Brownies

```