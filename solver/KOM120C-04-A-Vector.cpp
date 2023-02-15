#include <bits/stdc++.h>
using namespace std;

class Data {
    private:
        vector<int> angka;
        double sumBefore = 0;
        double sumAfter = 0;
        int nBefore = 0;
        int nAfter = 0;
    public:
        void readAngka() {
            int num;
            cin >> num;
            while (num != -9) {
                angka.push_back(num);
                sumBefore += num;
                cin >> num;
            }
            nBefore = angka.size();
        }
        void removeAngka() {
            if (nBefore == 0) {
                return;
            }
            vector<bool> removed(nBefore);
            int pos;
            cin >> pos;
            while (pos != -9) {
                removed[pos - 1] = true;
                cin >> pos;
            }
            for (int i = 0; i < nBefore; i++) {
                if (!removed[i]) {
                    nAfter++;
                    sumAfter += angka[i];
                }
            }
        }
        void print() {
            cout << nBefore << " " << nAfter << endl;
            if (nBefore > 0) {
                cout << fixed << setprecision(2) << sumBefore / nBefore << " ";
            } else {
                cout << "-9.99 ";
            }
            if (nAfter > 0) {
                cout << fixed << setprecision(2) << sumAfter / nAfter << endl;
            } else {
                cout << "-9.99" << endl;
            }
        }
};

int main(){
    Data data;
    data.readAngka();
    data.removeAngka();
    data.print();
    return 0;
}