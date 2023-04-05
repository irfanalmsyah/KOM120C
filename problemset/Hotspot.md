# Hotspot

## Description
Area titik kebakaran (Hot Spot) di Pulau Kalimantan digambarkan dalam bentuk peta grid (petak-petak) dimana  setiap  petak  diberi  koordinat  kartesian  XY  dengan  titik  pusat  (0,0)  terletak  di  tengah-tengah Pulau Kalimantan seperti ilustrasi gambar berikut.

Data  setiap  koordinat  hot  spot  dicatat  di  kertas  secara manual  kemudian  dimasukkan  ke  dalam  komputer  untuk diolah.  Karena  petugas  yang  survei  lebih dari  satu  orang, maka koordinat titik sering dicatat berulang. Koordinat titik yang sama akan dianggap sebagai satu titik. Buatlah  program  untuk  membaca  hasil  pencatatan  titik koordinat hot spot tersebut dan menuliskan koordinat titik yang berada di kuadran I dan II serta tidak berada di sumbu horisontal  X  dengan  urutan  mulai  dari  ujung  kanan  atas hingga kiri bawah. Titik A(x1,y1) disebut terletak di kanan atas dari titik B(x2,y2) jika: 

• x1 > x2, atau 

• x1 == x2 && y1 > y2 

## Input Format
```
[N, 0<N<10000]  banyaknya titik hotspot 
[X Y] koordinat titik sebanyak N 
```

## Output Format
Baris  pertama  adalah  banyaknya  titik  kebakaran.  Baris  kedua  adalah  koordinat  titik  dengan  format seperti pada contoh. Setiap baris output diakhiri dengan newline.

## Sample Input
```
10 
1 2 1 2 -3 4 5 6 6 -5 10 11 20 -1 1 20 10 11 5 6 
```

## Sample Output
```
7 
(10,11)(5,6)(1,20)(1,2)(-3,4)
```