# Magic Battle

## Description
Azam sedang bermain permainan Magic Battle yang merupakan sebuah permainan perang antara 2 kerajaan: kerajaan pemain dan kerajaan musuh. Azam sudah memiliki M prajurit di awal yang siap diturunkan ke medan perang. Untuk memperbesar jumlah prajuritnya, Azam dapat melatih prajurit-prajurit baru. Dalam satu kali proses pelatihan, dibutuhkan seorang pelatih (trainer) yang dapat merekrut dan melatih prajurit-prajurit baru . Ada dua jenis cara pelatihan prajurit:
- Pelatihan jenis biasa, membutuhkan seorang pelatih berjenis warrior. Seorang warrior dengan kemampuan p dapat merekrut dan menambah prajurit sebanyak p orang apabila digunakan.
- Pelatihan berjenis ajaib (magic), yang membutuhkan seorang pelatih berjenis wizard. Seorang wizard  dengan kemampuan p dapat merekrut dan menggandakan jumlah prajurit saat ini menjadi p kali lipat apabila digunakan.

Lebih lanjut, setiap proses pelatihan membutuhkan waktu sebanyak 1 hari. Musuh akan segera menyerang dalam T hari, oleh karena itu, Azam hanya dapat melakukan maksimal sebanyak T kali pelatihan. Selain itu, karena penerapan magic sangat berbahaya, Azam hanya dapat menggunakan maksimal satu kali pelatihan dengan pelatih wizard.

Diberikan daftar para pelatih warrior dan wizard yang dimiliki oleh Azam, tentukan berapakah maksimal jumlah prajurit yang dapat dibentuk oleh Azam sebelum musuh menyerang?

## Input Format
Masukan dimulai dengan 3 buah bilangan bulat, M, N dan T. M menyatakan jumlah prajurit yang dimiliki Azam saat ini. N menyatakan banyaknya pelatih yang tersedia, dan T adalah jumlah hari sampai musuh menyerang. N baris berikutnya berisi data para pelatih yang tersedia. Setiap baris berisi 2 buah bilangan bulat, j dan p, dimana j bernilai 0 atau 1, menunjukkan jenis dari pelatih tersebut (0 = pelatih biasa, 1 = pelatih ajaib), sedangkan p menyatakan kemampuan pelatih tersebut.

## Output Format
Keluaran berupa sebuah baris berisi satu buah bilangan bulat, menyatakan maksimal jumlah prajurit yang dapat diperoleh Azam sebelum kerajaan musuh menyerang. 

## Sample Input
```
10 5 4
0 4
0 5
1 2
0 3
0 4
```

## Sample Output
```
46
```

## Penjelasan Contoh
Azam di awal memiliki 10 orang prajurit. Ada 5 orang pelatih yang tersedia, dimana hanya salah satu di antaranya yang merupakan seorang pelatih berjenis wizard . Namun, Azam hanya dapat menggunakan maksimal 4 orang pelatih. Ia dapat melakukan strategi pelatihan sebagai berikut:

- Gunakan pelatih kedua berjenis pelatih warrior dengan kemampuan 5. Jumlah prajurit Azam akan bertambah 5 menjadi 10 + 5 = 15 orang
- Gunakan pelatih pertama berjenis pelatih warrior dengan kemampuan 4. Jumlah prajurit Azam akan bertambah 4 menjadi 15 + 4 = 19 orang
- Gunakan pelatih kelima berjenis pelatih warrior  dengan kemampuan 4. Jumlah prajurit Azam akan bertambah 4 menjadi 19 + 4 = 23 orang
- Gunakan pelatih ketiga berjenis pelatih wizard dengan kemampuan 2. Jumlah prajurit Azam akan digandakan 2x lipat menjadi 23 * 2 = 46 orang

Tidak ada strategi lain yang menghasilkan jumlah prajurit lebih dari 46. Maka jawaban untuk soal ini adalah 46. 

Batasan
- 0 ≤ M ≤ 1000
- 0 ≤ N ≤ 10000
- 0 ≤ T ≤ 10000
- 2 ≤ p ≤ 1000
- Dijamin bahwa jawaban yang benar tidak lebih dari 2 milyar

## Catatan 1
Anda diharapkan menggunakan rancangan program dengan menggunakan kelas abstrak untuk mengimplementasikan adanya proses pelatihan dengan kedua jenis pelatih. Misalnya, Anda dapat membuat kelas abstrak sebagai berikut:

```java
abstract class Train 
{
    protected Integer power;
    public Train(Integer p)
    {
        power = p;
    }
    
    public Integer getPower()
    {
        return power;
    }
    
    abstract public Integer train(Integer current);
}
```
dan kemudian membuat dua kelas turunan untuk merepresentasikan jenis pelatih warrior dan wizard, misalnya:

```java
class Warrior extends Train 
{

...

}
dan 

class Wizard extends Train 
{

...

}
```

## Catatan 2
Jika Anda perlu melakukan pengurutan (sorting) pada sebuah koleksi data, Anda dapat menggunakan Comparator untuk memudahkan pengurutan. Silakan baca misalnya disini: [Java 8 – Comparator.comparing() method for custom/reverse sorting - BenchResources.Net](https://www.benchresources.net/java-8-comparator-comparing-method-for-custom-reverse-sorting/)