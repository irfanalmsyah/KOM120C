#include <bits/stdc++.h>
using namespace std;

class Matrik {
    private:
        vector<vector<int> > X;
        int row, col;

    public:
        Matrik() {
            X.clear();
            row = col = 0;
        }
        void set() {
            cin >> row >> col;
            X.resize(row);
            for (int i = 0; i < row; i++) {
                X[i].resize(col);
                for (int j = 0; j < col; j++) {
                    cin >> X[i][j];
                }
            }
        }
        void print() {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    cout << X[i][j];
                    if (j < col - 1) {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        Matrik& operator+=(Matrik p) {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    X[i][j] += p.X[i][j];
                }
            }
            return *this;
        }
        Matrik& operator-=(Matrik p) {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    X[i][j] -= p.X[i][j];
                }
            }
            return *this;
        }
        void transpose() {
            vector<vector<int> > temp;
            temp.resize(col);
            for (int i = 0; i < col; i++) {
                temp[i].resize(row);
                for (int j = 0; j < row; j++) {
                    temp[i][j] = X[j][i];
                }
            }
            X = temp;
            swap(row, col);
        }
};

int main() {
    Matrik A, B;
    string cmd;
    while (cin >> cmd) {
        if (cmd == "matrik") {
            A.set();
        } else if (cmd == "tambah") {
            B.set();
            A += B;
        } else if (cmd == "kurang") {
            B.set();
            A -= B;
        } else if (cmd == "transpose") {
            A.transpose();
        } else if (cmd == "print") {
            A.print();
        } else if (cmd == "stop") {
            break;
        }
    }
}