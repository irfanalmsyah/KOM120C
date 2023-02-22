# Akun Bank

## Description
Transaksi di Bank Semprul melibatkan ribuan akun dalam sehari. Sering terjadi, 1 akun Bank melakukan transaksi lebih dari sekali dalam sehari. Untuk memudahkan proses, di akhir minggu dilakukan rekapitulasi transaksi harian dengan membuat daftar urut akun beserta jumlah transaksi yang dilakukan oleh setiap akunnya.

Buatlah program C++ untuk memproses transaksi mingguan tersebut. Program harus mengimplementasikan konsep. Program yang tidak mengimplementasikan konsep OOP akan diberi nilai 0 (nol).

## Input Format
t [banyaknya testcase <= 5]
n [banyaknya akun<= 100 000] 
[daftar akun yang melakukan transaksi]
[baris kosong]
[testcase berikutnya]

## Output Format
daftar akun yang terurut ascending, spasi, dan banyaknya transaksi] 
[baris kosong]
[hasil output dari testcase berikutnya]

## Sample Input
```
2
6
031 0142 
031 0141 
302 0141 
302 0142 
302 0141 
302 0142 

5
302 0144 
302 0142 
302 0145 
302 0146 
302 0143
```

## Sample Output
```
031 0141 1
031 0142 1
302 0141 2
302 0142 2

302 0142 1
302 0143 1
302 0144 1
302 0145 1
302 0146 1
```