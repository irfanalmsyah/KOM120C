# Mengolah Matrik

## Description
Ingin dibuat sebuah program untuk mengolah matrik 2 dimensi berukuran row x col. Program akan menerima perintah berupa kata sebagai berikut:

- matrik, untuk membaca matrik awal
- tambah, untuk menjumlahkan matrik sekarang dengan matrik lainnya
- kurang, untuk mengurangi matrik sekarang dengan matrik lainnya
- transpose, untuk memutar matrik sekarang (baris menjadi kolom, dan sebaliknya)
- print, untuk mencetak matrik sekarang
- stop, akhir dari perintah

Untuk itu, dibuat class Matrik yang belum selesai sebagai berikut:

```cpp
class Matrik
{
    private:
        vector<vector<int> > X;     // matrik 2 dimensi
        int row,col;                // ukuran baris dan kolom
    public:
        Matrik() { X.clear(); row=col=0; }
        void set();
        void print();
        Matrik& operator+=(Matrik p);
        Matrik& operator-=(Matrik p);
        void transpose();
        ...
        ...
};
```
Tugas Anda adalah melengkapi implementasi setiap fungsi dari class Matrik tanpa diperkenankan untuk mengubah setiap elemen class. Namun demikian Anda diperbolehkan menambah fitur di dalam class Matrik pada bagian yang diberi tanda titik-titik. Semua itu dilakukan untuk membaca data dan menyajikan output seperti yang diminta dalam format seperti di bawah ini.

## Input Format
Beberapa baris input sesuai deskripsi soal.

## Output Format
Matrik hasil perintah print, dimana setiap elemen matrik dipisahkan oleh satu spasi, dan setiap baris diakhiri hanya dengan newline.

## Sample Input
```
matrik
3 4
1 2 3 4
5 6 7 8
9 0 1 2
print
tambah
3 4
1 2 3 4
2 1 0 1
0 2 3 5
print
transpose
print
stop
```

## Sample Output
```
1 2 3 4
5 6 7 8
9 0 1 2
2 4 6 8
7 7 7 9
9 2 4 7
2 7 9
4 7 2
6 7 4
8 9 7
```

## Penjelasan
Input data matrik selalu diawali dengan ukuran baris dan kolom. Dan setiap perintah tambah atau kurang diasumsikan dengan matrik yang berukuran sama dengan matrik sekarang.