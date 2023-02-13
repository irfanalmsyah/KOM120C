#include <bits/stdc++.h>
using namespace std;

class Barang {
    public:
        string kode; // kode barang
        string nama; // nama barang
        int harga; // harga satuan barang (rupiah)
};
class DaftarKode {
    private:
        map<string,Barang> dt; // daftar kode barang
        int size; // ukuran daftar kode barang yang ada
        
    public:
        DaftarKode() { dt.clear(); size = 0; }
        void init() { // membaca daftar kode barang dari stdin
            int n;
            cin >> n;
            size = n;
            for (int i = 0; i < n; i++) {
                Barang b;
                cin >> b.kode >> b.nama >> b.harga;
                dt[b.kode] = b;
            }
        } 
        string getNama(string kode) { // mendapatkan nama barang dari kode
            return dt[kode].nama;
        } 
        int getHarga(string kode) { // mendapatkan harga barang dari kode
            return dt[kode].harga;
        }
        bool isExist(string kode) { // mengecek apakah kode barang ada
            return dt.find(kode) != dt.end();
        }
};

class Penjualan {
    private:
        DaftarKode daftar; // daftar kode barang yang ada
        map<string,int> dt; // data penjualan
        int size; // ukuran data penjualan
    public:
    Penjualan() {
        daftar.init();
        size=0; 
    }
    void add(string kode, int jumlah) { // menambah data penjualan
        if (daftar.isExist(kode)) { 
            dt[kode] += jumlah;
            size++;
        }
    }
    int getJumlah(string kode) { // mendapatkan jumlah barang yang terjual
        return dt[kode];
    }
    int getTotalHarga() { // mendapatkan total harga penjualan
        int total = 0;
        for (auto it = dt.begin(); it != dt.end(); it++) {
            total += daftar.getHarga(it->first) * it->second;
        }
        return total;
    }
    void print() { // mencetak data penjualan
        for (auto it = dt.begin(); it != dt.end(); it++) {
            cout << it->first << " " << daftar.getNama(it->first) << " " << it->second << " " << fixed << setprecision(2) << (double)daftar.getHarga(it->first) * it->second / 1000000 << endl;
        }
        cout << "Total Nilai : " << fixed << setprecision(2) << (double)getTotalHarga() / 1000000 << " juta rupiah" << endl;
    }
    void printSortedByTotalDividedByHarga() { // mencetak data penjualan yang diurutkan berdasarkan total harga / harga barang
        vector<pair<string,double>> v;
        for (auto it = dt.begin(); it != dt.end(); it++) {
            v.push_back({it->first, (double)daftar.getHarga(it->first) * it->second / getTotalHarga()});
        }
        sort(v.begin(), v.end(), [](pair<string,double> a, pair<string,double> b) {
            return a.second > b.second;
        });
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << it->first << " " << daftar.getNama(it->first) << " " << dt[it->first] << " " << fixed << setprecision(2) << (double)daftar.getHarga(it->first) * dt[it->first] / 1000000 << endl;
        }
        cout << "Total Nilai : " << fixed << setprecision(2) << (double)getTotalHarga() / 1000000 << " juta rupiah" << endl;
    }
};

int main() {
    DaftarKode daftar;
    Penjualan penjualan;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string kode;
        int jumlah;
        cin >> kode >> jumlah;
        penjualan.add(kode, jumlah);
    }
    penjualan.printSortedByTotalDividedByHarga();
    return 0;
}