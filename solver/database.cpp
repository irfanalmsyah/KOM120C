#include <bits/stdc++.h>
using namespace std;

class Barang {
    private:
        int id, jumlah;
        string kelompok, nama;
    public:
        Barang(int i, int j, string k, string n) {
            id = i;
            jumlah = j;
            kelompok = k;
            nama = n;
        }
        string getKelompok() {
            return kelompok;
        }
        int getJumlah() {
            return jumlah;
        }
        string getNama() {
            return nama;
        }
        void print() {
            cout << nama << " " << jumlah << endl;
        }
};

bool compareBarang(Barang a, Barang b) {
    return a.getNama() < b.getNama();
}

class Kelompok {
    private:
        string nama;
        int jumlah;
    public:
        Kelompok(string n, int j) {
            nama = n;
            jumlah = j;
        }
        int getJumlah() {
            return jumlah;
        }
        string getnama() {
            return nama;
        }
};

bool compareKelompok(Kelompok a, Kelompok b) {
    return a.getJumlah() > b.getJumlah();
}

class Database {
    private:
        vector <Barang> barang;
        map <string, int> pairKelompok;
        vector <Kelompok> pasanganKelompok;
    
    public:
        void init() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                int id, jumlah;
                string kelompok, nama;
                cin >> id;
                cin >> kelompok;
                cin >> nama;
                cin >> jumlah;
                Barang item = {id, jumlah, kelompok, nama};
                barang.push_back(item);
                pairKelompok[kelompok]++;
            }
            sort(barang.begin(), barang.end(), compareBarang);
            for (auto it = pairKelompok.begin(); it != pairKelompok.end(); it++) {
                Kelompok temp = {it->first, it->second};
                pasanganKelompok.push_back(temp);
            }
            sort(pasanganKelompok.begin(), pasanganKelompok.end(), compareKelompok);
            for (auto it = pasanganKelompok.begin(); it != pasanganKelompok.end(); it++) {
                cout << it->getnama() << " " << it->getJumlah() << endl;
            }
            cout << "*****" << endl;

        }
        void query() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                string kelompok;
                cin >> kelompok;
                cout << "Daftar Barang " << kelompok << endl;
                for (auto it = barang.begin(); it != barang.end(); it++) {
                    if (it->getKelompok() == kelompok) {
                        it->print();
                    }
                }
                if (i < n - 1) {
                    cout << "*****" << endl;
                }
            }
        }
};

int main() {
    Database database;
    database.init();
    database.query();
    return 0;
}