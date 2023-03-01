#include <bits/stdc++.h>
using namespace std;

class Person {
    protected:
        string nama; 
        char jk; 
        int usia; 
        string kota; 
    public:
        void set(string n, char j, int u, string k) {
            nama = n;
            jk = j;
            usia = u;
            kota = k;
        }
        string getNama() {
            return nama;
        }
        char getSex() {
            return jk;
        }
        int getUsia() {
            return usia;
        }
        string getKota() {
            return kota;
        }
};

class Male : public Person {
    public:
        void set(string n, int u, string k) {
            nama = n;
            jk = 'L';
            usia = u;
            kota = k;
        }
};

class Female : public Person {
    public:
        void set(string n, int u, string k) {
            nama = n;
            jk = 'P';
            usia = u;
            kota = k;
        }
};

template <class T>
double rataan(vector<T> p) {
    double sum = 0;
    for (int i = 0; i < p.size(); i++) {
        sum += p[i].getUsia();
    }
    return sum / p.size();
}

int main() {
    vector<Male> L;
    vector<Female> P;
    string input;
    while (getline(cin, input)) {
        string nama = input.substr(0, 23);
        char jk = input[25];
        int usia = stoi(input.substr(26, 2));
        string kota = input.substr(28, 24);
        if (jk == 'L') {
            Male m; 
            m.set(nama, usia, kota);
            L.push_back(m);
        } else {
            Female f;
            f.set(nama, usia, kota);
            P.push_back(f);
        }
    }
    double rataL = rataan(L);
    double rataP = rataan(P);
    int countLdibawahRata = 0;
    int countPdibawahRata = 0;
    for (int i = 0; i < L.size(); i++) {
        if (L[i].getUsia() < rataL) {
            countLdibawahRata++;
        }
    }
    for (int i = 0; i < P.size(); i++) {
        if (P[i].getUsia() < rataP) {
            countPdibawahRata++;
        }
    }
    cout << "L " << L.size() << " " << setprecision(2) << fixed << rataL << " " << countLdibawahRata << endl;
    cout << "P " << P.size() << " " << setprecision(2) << fixed << rataP << " " << countPdibawahRata << endl;
}