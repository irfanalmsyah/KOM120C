#include <bits/stdc++.h>
using namespace std;

class Makanan {
    protected:
        string nama, jenis;
        int gula, karbohidrat;

    public:
        void setMakanan(string n, string j, int g, int k) {
            nama = n;
            jenis = j;
            gula = g;
            karbohidrat = g;
        }
        int getKalori() {
            if (jenis == "Kalori") {
                return 50 * gula + 20 * karbohidrat;
            } else {
                return 20 * gula + 10 * karbohidrat;
            }
        }
        string getNama() {
            return nama;
        }
};

class Kalori : public Makanan {
    public:
        Kalori(string n, int g, int k) {
            nama = n;
            gula = g;
            karbohidrat = k;
        }
        int getKalori() {
            return 50 * gula + 20 * karbohidrat;
        }
};

class Nutrisi : public Makanan {
    public:
        Nutrisi(string n, int g, int k) {
            nama = n;
            gula = g;
            karbohidrat = k;
        }
        int getKalori() {
            return 20 * gula + 10 * karbohidrat;
        }
};

class KalkulatorKalori {
    private:
        vector <Kalori> kalori;
        vector <Nutrisi> nutrisi;
        vector <Makanan> makanan;
        int total;
    
    public:
        KalkulatorKalori() {
            total = 0;
        }
        void init() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                string nama, jenis;
                int gula, karbohidrat;
                cin >> nama >> jenis >> gula >> karbohidrat;
                if (jenis == "Kalori") {
                    Kalori temp = {nama, gula, karbohidrat};
                    kalori.push_back(temp);
                    total += temp.getKalori();
                } else {
                    Nutrisi temp = {nama, gula, karbohidrat};
                    nutrisi.push_back(temp);
                    total += temp.getKalori();
                }
                Makanan temp;
                temp.setMakanan(nama, jenis, gula, karbohidrat);
                makanan.push_back(temp);
            }
            cout << total << endl;
        }
        void print() {
            for (auto it = makanan.begin(); it != makanan.end(); it++) {
                if (it->getKalori() > 1000) {
                    cout << it->getNama() << endl;
                }
            }
        }
};

int main() {
    KalkulatorKalori calc;
    calc.init();
    calc.print();
    return 0;
}