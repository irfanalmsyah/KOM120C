#include <bits/stdc++.h>
using namespace std;

class Mahasiswa {
    private:
        string nama;
        char jk;
        double ipk;

    public:
        Mahasiswa() {
            nama = "";
            jk = 'A';
            ipk = 0;
        }
        void setMahasiswa(string n, char j, double i) {
            nama = n;
            jk = j;
            ipk = i;
        }
        char getJk() {
            return jk;
        }
        double getIPK() {
            return ipk;
        }
};

class Kelas {
    private:
        map <string, Mahasiswa> kelas;
        int L, P;
        double IPK;
    
    public:
        Kelas() {
            L = P = IPK = 0;
        }
        void init() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                string nama, nim;
                char jk;
                double ipk;
                cin >> nim >> nama >> jk >> ipk;
                Mahasiswa temp;
                temp.setMahasiswa(nama, jk, ipk);
                kelas[nim] = temp;
            }
        }
        void print() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                string nim;
                cin >> nim;
                if (kelas[nim].getJk() == 'L') {
                    L++;
                } else if (kelas[nim].getJk() == 'P'){
                    P++;
                }
                IPK += kelas[nim].getIPK();
            }
            cout << L << " " << P << endl;
            if (L + P == 0) {
                cout << "0.00" << endl;
            } else {
                cout << fixed << setprecision(2) << (double) IPK / (L + P) << endl;
            }
        }
};

int main() {
    Kelas cls;
    cls.init();
    cls.print();
    return 0;
}