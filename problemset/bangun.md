# Class Ruang Dua Dimensi

## Description
Diketahui 3 class, yaitu Ruang2D (untuk mengolah data ruang 2 dimensi yang memiliki maksimum 4 sisi), Segiempat (untuk mengolah data segi empat), dan Segitiga (untuk mengolah data segitiga siku-siku). Class Ruang2D merupakan abstract class yang memiliki atribut 4 sisi bilangan double, dan fungsi abstrak luas() dan keliling(), serta sebuah fungsi mutator set(). Lengkapi setiap class dan buat program OOP untuk membaca m sisi (panjang dan lebar) segiempat, dan n sisi (alas dan tinggi) segitiga siku-siku. Program menampilkan luas dan keliling segiempat diikuti luas dan keliling segitiga, terurut dimulai dari luas terbesar. Jika luas sama, data diurutkan berdasarkan keliling secara descending.

Class Ruang2D sudah didefinisikan sebagai berikut:
```cpp
class Ruang2D {
   protected:
      double sisi1, sisi2, sisi3, sisi4;
   public:
      virtual double luas() = 0;
      virtual double keliling() = 0;
      void set(double s1=0,double s2=0, double s3=0,double s4=0); 
};
```
## Input Format
[m n] m adalah banyaknya segiempat, n adalah banyaknya segitiga
[panjang lebar] beberapa baris sisi segiempat
[alas tinggi] beberapa baris sisi segitiga siku-siku

## Output Format
Sebanyak m baris luas dan keliling segiempat, diikuti dengan n baris luas dan keliling segitiga. Diurutkan secara menurun berdasarkan luas dan keliling. Luas dan keliling dituliskan dalam satu digit di belakang tanda desimal.

## Sample Input
```
4 3
2 3
4 5
2 9
3 1
1 2
3 4
2 3

5
302 0144 
302 0142 
302 0145 
302 0146 
302 0143
```

## Sample Output
```
SEGIEMPAT
20.0 18.0
18.0 22.0
6.0 10.0
3.0 8.0
SEGITIGA
6.0 12.0
3.0 8.6
1.0 5.2
```