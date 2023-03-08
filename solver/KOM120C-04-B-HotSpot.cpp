#include <bits/stdc++.h>
using namespace std;

struct titik {
    int x, y;
    bool operator<(titik other) const {
        if (x > other.x || (x == other.x && y > other.y)) {
            return true;
        } else {
            return false;
        }
    }
};

class Points {
    private:
        set <titik> points;
    public:
        void insertPoint() {
            titik p;
            cin >> p.x >> p.y;
            points.insert(p);
        }
        void printPoints() {
            cout << points.size() << endl;
            for (auto it = points.begin(); it != points.end(); it++) {
                if (it->y > 0) {
                    cout << "(" << it->x << "," << it->y << ")";
                }
            }
            cout << endl;
        }
};

int main() {
    Points p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        p.insertPoint();
    }
    p.printPoints();
    return 0;
}