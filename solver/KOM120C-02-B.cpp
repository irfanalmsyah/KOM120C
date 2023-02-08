#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
        string nama;
        int umur, tinggi;
        double berat;
    public:
        Person() {
            nama = "";
            umur = 0;
            tinggi = 0;
            berat = 0;
        }

        void setPerson(string n, int u, int t, double b) {
            nama = n;
            umur = u;
            tinggi = t;
            berat = b;
        }

        void printPerson() {
            cout << nama << " " << umur << endl;
        }

        int getTinggi() {
            return tinggi;
        }
};

int main() {
    int n;
    cin >> n;
    Person* people = (Person*) malloc(n * sizeof(Person));
    for (int i = 0; i < n; i++) {
        string nama;
        int umur, tinggi;
        double berat;
        cin >> nama >> umur >> tinggi >> berat;
        people[i].setPerson(nama, umur, tinggi, berat);
    }
    for (int i = 0; i < n; i++) {
        people[i].printPerson();
    }
    double totalTinggi = 0;
    for (int i = 0; i < n; i++) {
        totalTinggi += people[i].getTinggi();
    }
    printf("%.2f\n", totalTinggi / n);
    int tinggiDiatasRata = 0;
    for (int i = 0; i < n; i++) {
        if (people[i].getTinggi() > totalTinggi / n) {
            tinggiDiatasRata++;
        }
    }
    cout << tinggiDiatasRata << endl;
    return 0;
}