#include <bits/stdc++.h>
using namespace std;

class Pegawai {
    protected:
        string id;
        int usia, tipe;
        int income;
    
    public:
        void set(string pid, int u, int t ) {
            id = pid; 
            usia = u; 
            tipe = t; 
        }

        string getID() { 
            return id; 
        }

        void print() { 
            cout << id << " " << tipe << " " << income << endl; 
        }
};

class Tetap : public Pegawai {
    private:
        int lembur;
    
    public:
        void set(string pid, int u, int t, int i) {
            Pegawai::set(pid, u, t);
            income = i;
        }

        void setLembur(int l) {
            lembur = l;
            income += lembur;
        }
};

class Harian : public Pegawai {
    private:
        int upah;

    public:
        Harian() {
            income = 0;
        }
        void setUpah(int u) {
            upah = u;
            income = upah;
        }
};

int main() {
    int n;
    cin >> n;
    vector<Tetap> pegawaiTetap;
    vector<Harian> pegawaiHarian;
    for (int i = 0; i < n; i++) {
        string id;
        int usia, tipe;
        cin >> id >> usia >> tipe;
        if (tipe == 1) {
            int pokok;
            cin >> pokok;
            Tetap pegawai;
            pegawai.set(id, usia, tipe, pokok);
            pegawaiTetap.push_back(pegawai);
        } else {
            Harian pegawai;
            pegawai.set(id, usia, tipe);
            pegawaiHarian.push_back(pegawai);
        }
    }
    string input;
    cin >> input;
    
    while (input != "END") {
        for (auto &pegawai : pegawaiTetap) {
            if (pegawai.getID() == input) {
                int lembur;
                cin >> lembur;
                pegawai.setLembur(lembur);
                break;
            }
        }
        for (auto &pegawai : pegawaiHarian) {
            if (pegawai.getID() == input) {
                int upah;
                cin >> upah;
                pegawai.setUpah(upah);
                break;
            }
        }
        cin >> input;
    }
    for (auto &pegawai : pegawaiTetap) {
        pegawai.print();
    }
    for (auto &pegawai : pegawaiHarian) {
        pegawai.print();
    }
    
}