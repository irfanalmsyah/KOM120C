#include <bits/stdc++.h>
using namespace std;

class Pecahan {
    private:
        int utama, pembilang, penyebut;
    
    public:
        Pecahan() {
            utama = 0;
            pembilang = 0;
            penyebut = 1;
        }
        void setPecahan() {
            int a, b, c;
            cin >> a >> b >> c;
            utama = a;
            pembilang = b;
            penyebut = c;
        }
        Pecahan operator+(Pecahan p) {
            Pecahan temp;
            int atas1 = (utama * penyebut + pembilang);
            int atas2 = (p.utama * p.penyebut + p.pembilang);
            if (penyebut == p.penyebut) {
                temp.penyebut = penyebut;
                temp.pembilang = atas1 + atas2;
            } else {
                temp.penyebut = penyebut * p.penyebut;
                temp.pembilang = atas1 * p.penyebut + atas2 * penyebut;
            }
            return temp;
        }
        Pecahan operator*(Pecahan p) {
            Pecahan temp;
            int atas = (utama * penyebut + pembilang) * (p.utama * p.penyebut + p.pembilang);
            int bawah = penyebut * p.penyebut;
            temp.penyebut = bawah;
            temp.pembilang = atas;
            return temp;
        }
        Pecahan operator++(int){
            Pecahan temp = *this;
            utama++;
            return temp;
        }
        Pecahan operator--(int){
            Pecahan temp = *this;
            utama--;
            return temp;
        }
        void printPecahan() {
            if (penyebut == 0) {
                cout << "0" << endl;
                return;
            }
            int gcd = __gcd(pembilang, penyebut);
            pembilang /= gcd;
            penyebut /= gcd;
            if (pembilang == penyebut) {
                utama += pembilang / penyebut;
                pembilang = 0;
                penyebut = 1;
                cout << utama << endl;
            } else if (pembilang > penyebut) {
                utama += pembilang / penyebut;
                pembilang %= penyebut;
                if (pembilang == 0) {
                    cout << utama << endl;
                }
                else {
                    cout << utama << " " << pembilang << "/" << penyebut << endl;
                }
            }
            else if (pembilang == 0) {
                cout << utama << endl;
            }
            else {
                cout << utama << " " << pembilang << "/" << penyebut << endl;
            }
            
        }
};

int main() {
    string instruksi;
    Pecahan pecahan;
    cin >> instruksi;
    while (instruksi != "end") {
        if (instruksi == "set") {
            pecahan.setPecahan();
        } else if (instruksi == "p") {
            pecahan.printPecahan();
        } else if (instruksi == "add") {
            Pecahan temp;
            temp.setPecahan();
            pecahan = pecahan + temp;
        } else if (instruksi == "mul") {
            Pecahan temp;
            temp.setPecahan();
            pecahan = pecahan * temp;
        } else if (instruksi == "inc") {
            pecahan++;
        } else if (instruksi == "dec") {
            pecahan--;
        }
        cin >> instruksi;
    }
}