#include <bits/stdc++.h>
using namespace std;

class Orang {
    protected:
        string nama;
        int usia;

    public:
        Orang() {
            nama = "";
            usia = 0;
        }
        void setData(string nama, int usia) {
            this->nama = nama;
            this->usia = usia;
        }
};

class Mahasiswa : public Orang {
    protected:
        string nim;
    
    public:
        Mahasiswa() {
            nim = "";
        }
        void setData(string nama, int umur, string nim) {
            this->nama = nama;
            this->usia = umur;
            this->nim = nim;
        }
};

class Nilai : public Mahasiswa {
    private:
        int sks;
        int nilai;
        double ipk;

    public:
        Nilai() {
            sks = 0;
            nilai = 0;
        }
        void setIdentitas(string nama, int umur, string nim) {
            this->nama = nama;
            this->usia = umur;
            this->nim = nim;
        }
        void addNilai(int sks, char nilai) {
            this->sks += sks;
            if (nilai == 'A') {
                this->nilai += 4 * sks;
            } else if (nilai ==  'B') {
                this->nilai += 3 * sks;
            } else if (nilai == 'C') {
                this->nilai += 2 * sks;
            } else if (nilai == 'D') {
                this->nilai += 1 * sks;
            } else if (nilai == 'F') {
                this->nilai += 0 * sks;
            }
            this->ipk = (double) this->nilai / this->sks;
        }
        void print() {
            cout << fixed << setprecision(2);
            
            cout << nama << " (" << nim << "):" << sks << ":" << ipk << endl;
        }
};

int main() {
    Nilai n;
    string nama, nim, kode, sks;
    char nilai;
    int umur;
    
    getline(cin, nama);
    cin >> umur >> nim;
    n.setIdentitas(nama, umur, nim);
    while (cin >> kode) {
        cin >> sks >> nilai;
        n.addNilai(stoi(sks), nilai);
    }
    n.print();
}