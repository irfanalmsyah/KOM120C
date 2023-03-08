#include <bits/stdc++.h>
using namespace std;

class Ruang2D {
    protected:
        double sisi1, sisi2, sisi3, sisi4;
    public:
        virtual double luas() = 0;
        virtual double keliling() = 0;
        void set(int s1=0, int s2=0, int s3=0,int s4=0);
};

class SegiEmpat : public Ruang2D {
    public:
        double luas() {
            return sisi1 * sisi2;
        }
        
        double keliling() {
            return sisi1 + sisi2 + sisi3 + sisi4;
        }

        void set(int panjang, int lebar) {
            sisi1 = panjang;
            sisi2 = lebar;
            sisi3 = panjang;
            sisi4 = lebar;
        }

        bool operator<(SegiEmpat other) {
            if (this->luas() == other.luas()) {
                return this->keliling() > other.keliling();
            } else {
                return this->luas() > other.luas();
            }
        }
};

class Segitiga : public Ruang2D {
    public:
        double luas() {
            return 0.5 * sisi1 * sisi2;
        }
        
        double keliling() {
            return sisi1 + sisi2 + sisi3;
        }

        void set(int alas, int tinggi) {
            sisi1 = alas;
            sisi2 = tinggi;
            sisi3 = sqrt(alas * alas + tinggi * tinggi);
        }

        bool operator<(Segitiga other) {
            if (this->luas() == other.luas()) {
                return this->keliling() > other.keliling();
            } else {
                return this->luas() > other.luas();
            }
        }

        
};

class RuangManager {
    private:
        vector <SegiEmpat> segiempat;
        vector <Segitiga> segitiga;

    public:
        void init() {
            int m, n;
            cin >> m >> n;
            for (int i = 0; i < m; i++) {
                double panjang, lebar;
                cin >> panjang >> lebar;
                SegiEmpat s;
                s.set(panjang, lebar);
                segiempat.push_back(s);
            }
            for (int i = 0; i < n; i++) {
                double alas, tinggi;
                cin >> alas >> tinggi;
                Segitiga s;
                s.set(alas, tinggi);
                segitiga.push_back(s);
            }
        }
        void print() {
            cout << fixed << setprecision(1);
            cout << "SEGIEMPAT" << endl;
            sort(segiempat.begin(), segiempat.end());
            for (int i = 0; i < segiempat.size(); i++) {
                cout << segiempat[i].luas() << " " << segiempat[i].keliling() << endl;
            }
            cout << "SEGITIGA" << endl;
            sort(segitiga.begin(), segitiga.end());
            for (int i = 0; i < segitiga.size(); i++) {
                cout << segitiga[i].luas() << " " << segitiga[i].keliling() << endl;
            }
        }
};

int main() {
    RuangManager rm;
    rm.init();
    rm.print();
}