#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int currentcount, currentx, currenty;
    int* x = (int*) malloc(m * sizeof(int));
    int* y = (int*) malloc(n * sizeof(int));
    currentcount = currentx = currenty = 0;
    for (int i = 0; i < m; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    int totalcount = m + n;
    while (currentcount < totalcount) {
        if (currentx == m) {
            cout << y[currenty];
            if (currentcount != totalcount - 1) {
                cout << " ";
            }
            currenty++;
        } else if (currenty == n) {
            cout << x[currentx];
            if (currentcount != totalcount - 1) {
                cout << " ";
            }
            currentx++;
        } else {
            if (x[currentx] < y[currenty]) {
                cout << x[currentx];
                if (currentcount != totalcount - 1) {
                    cout << " ";
                }
                currentx++;
            } else {
                cout << y[currenty];
                if (currentcount != totalcount - 1) {
                    cout << " ";
                }
                currenty++;
            }
        }
        currentcount++;
    }
    cout << endl;
}