# Manajemen Mahasiswa

## Description
Diketahui struktur class dalam representasi UML seperti yang tampil di ![link ini](https://github.com/irfanalmsyah/KOM120C/raw/master/img/mahasiswa.png)

Struktur class ini digunakan untuk mengelola data nilai mahasiswa (kode mata kuliah, sks, dan huruf mutu). Anda harus mendefinisikan setiap class sesuai gambar yang tersedia, dimana untuk class Nilai, Anda diberi keleluasaan untuk membuat atribut dan fungsi/method.

## Input Format
[nama mahasiswa]
[usia]
[nim]
{ [kode mata kuliah] [sks] [huruf mutu] }

## Output Format
Satu baris dengan format [nama mahasiswa][spasi]([nim])[:][total sks][:][ipk, dengan 2 digit di belakang tanda desimal]
Catatan: Huruf mutu berturut-turut adalah A, B, C, D, F dengan nilai 4, 3, 2, 1, 0

## Sample Input
```
Nam Do-San 
18 
G64251234 
KOM20C 3 A 
KOM123 2 B 
KOM098 3 B 
KOM789 4 C 

5
302 0144 
302 0142 
302 0145 
302 0146 
302 0143
```

## Sample Output
```
Nam Do-San (G64251234):12:2.92
```