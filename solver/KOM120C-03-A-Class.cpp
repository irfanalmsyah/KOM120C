#include <bits/stdc++.h>
using namespace std;

class Person {
    string nama;
    int usia;
    int tinggi;
    double berat;
    public:
        Person() {
            nama = "";
            usia = 0;
            tinggi = 0;
            berat = 0;
        }
        void setPerson(string nm, int u, int t, double b) {
            nama = nm;
            usia = u;
            tinggi = t;
            berat = b;
        }
        string getNama() {
            return nama;
        }
        int getUsia() {
            return usia;
        }
        int getTinggi() {
            return tinggi;
        }
        double getBerat() {
            return berat;
        }
        double getIMT() {
            return berat / (tinggi * tinggi) * 10000;
        }
        string getStatusGizi() {
            double imt = getIMT();
            if (imt < 17) {
                return "sangat kurus";
            } else if (imt < 18.5) {
                return "kurus";
            } else if (imt < 25) {
                return "normal";
            } else if (imt < 28) {
                return "gemuk";
            } else {
                return "sangat gemuk";
            }
        }
};

int main() {
    int n;
    cin >> n;
    Person* people = new Person[n];
    double totalTinggi = 0;
    for (int i = 0; i < n; i++) {
        string nama;
        int usia, tinggi;
        double berat;
        cin >> nama >> usia >> tinggi >> berat;
        people[i].setPerson(nama, usia, tinggi, berat);
        totalTinggi += tinggi;
    }
    int tinggiDiatasRata = 0;
    int statusGizi[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        cout << people[i].getNama() << " " << people[i].getUsia() << " " << people[i].getTinggi() << " ";
        printf("%.2f", people[i].getBerat());
        printf(" %.2f ", people[i].getIMT());
        cout << people[i].getStatusGizi() << endl;
        if (people[i].getTinggi() > totalTinggi / n) {
            tinggiDiatasRata++;
        }
        if (people[i].getStatusGizi() == "sangat kurus") {
            statusGizi[0]++;
        } else if (people[i].getStatusGizi() == "kurus") {
            statusGizi[1]++;
        } else if (people[i].getStatusGizi() == "normal") {
            statusGizi[2]++;
        } else if (people[i].getStatusGizi() == "gemuk") {
            statusGizi[3]++;
        } else {
            statusGizi[4]++;
        }
    }
    printf("%.2f\n", totalTinggi / n);
    cout << tinggiDiatasRata << endl;
    cout << statusGizi[0] << " " << statusGizi[1] << " " << statusGizi[2] << " " << statusGizi[3] << " " << statusGizi[4] << endl;
    return 0;
}