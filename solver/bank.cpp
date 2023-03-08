#include <bits/stdc++.h>
using namespace std;

class TestCase {
    private:
        string id;
        map<string, int> accountCounts;
    public:
        bool operator<(TestCase other) {
            return id < other.id;
        }
        void setAccounts() {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                string id;
                string firstPart, secondPart;
                cin >> firstPart >> secondPart;
                id = firstPart + secondPart;
                accountCounts[id]++;
            }
        }
        void print() {
            for (auto it = accountCounts.begin(); it != accountCounts.end(); it++) {
                string id = it->first;
                string firstPart = id.substr(0, 3);
                string secondPart = id.substr(3, 4);
                cout << firstPart << " " << secondPart << " " << it->second << endl;
            }
        }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        TestCase test;
        test.setAccounts();
        test.print();
        if (i != t - 1) {
            cout << endl;
        }
    }
    return 0;
}
