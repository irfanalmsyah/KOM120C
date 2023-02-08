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
                dt[b.kode] = b;            }
        } 
        string getNama(string kode) { // mendapatkan nama barang dari kode
            return dt[kode].nama;
        } 
        int getHarga(string kode) { // mendapatkan harga barang dari kode
            return dt[kode].harga;
        }
};

class Penjualan {
    private:
        DaftarKode daftar; // daftar kode barang yang ada
        map<string,int> st; // data penjualan
        int size; // ukuran data penjualan
    public:
    Penjualan() {
        daftar.init();
        size=0;
    }
    void add(string kode, int jumlah) { // menambah data penjualan
        st[kode] += jumlah;
        size++;
    }
    int getJumlah(string kode) { // mendapatkan jumlah barang yang terjual
        return st[kode];
    }
    int getTotalHarga() { // mendapatkan total harga penjualan
        int total = 0;
        for (auto it = st.begin(); it != st.end(); it++) {
            total += daftar.getHarga(it->first) * it->second;
        }
        return total;
    }
    void print() { // mencetak data penjualan
        for (auto it = st.begin(); it != st.end(); it++) {
            cout << daftar.getNama(it->first) << " " << it->second << endl;
        }
    }
};

int main() {
    DaftarKode daftar;
    daftar.init();
    Penjualan penjualan;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string kode;
        int jumlah;
        cin >> kode >> jumlah;
        penjualan.add(kode, jumlah);
    }

}