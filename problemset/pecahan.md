# Bilangan Pecahan

## Description
Buatlah program untuk mengelola bilangan pecahan a b/c dimana a, b, dan c semuanya berupa bilangan bulat positif. Bilangan pecahan tersebut dapat diolah dengan menggunakan beberapa operasi seperti format berikut:

- set a b c      inisialisasi bilangan pecahan a b/c
- p                 menampilkan bilangan pecahan sesederhana mungkin
- add a b c    menambah bilangan pecahan yang ada dengan a b/c
- mul a b c    mengalikan bilangan pecahan yang ada dengan a b/c
- inc              postfix increment
- dec             postfix decrement
- end            akhir dari pengolahan

Bilangan pecahan dituliskan sesederhana mungkin, dan program harus mengimplementasikan konsep OOP serta penggunaan operator overloading. Program yang tidak mengimplementasikan konsep OOP atau tidak menggunakan operator overloading, akan diberi nilai 0 (nol).

## Input Format
Beberapa baris perintah sesuai deskripsi soal.

## Output Format
Beberapa baris bilangan pecahan hasil operasi yang diberikan, yang dituliskan sesederhana mungkin. Setiap baris output diakhiri dengan newline.

## Sample Input
```
set 4 2 8
p
add 0 6 8
inc
p
end
```

## Sample Output
```
4 1/4
6
```