#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    double sum = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (i % k != 0) {
            continue;
        }
        sum += x;
        count++;
    }
    if (count == 0) {
        cout << "0.00" << endl;
        return 0;
    }
    printf("%.2f\n", sum/count);
}