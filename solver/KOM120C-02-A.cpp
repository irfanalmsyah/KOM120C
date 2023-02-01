#include <iostream>
using namespace std;

class Counter {
   private:
    int value;

   public:
    Counter(int v = 0) { value = v; }
    void inc() { value++; }
    void dec() {
        if (value > 0) value--;
    }
    void set(int v) {
        if (v >= 0) value = v;
    }
    void print() { cout << value << endl; }
};

int main() {
    int kode, n;
    Counter counter;
    while (true) {
        cin >> kode;
        if (kode == 0) {
            cin >> n;
            counter.set(n);
        } else if (kode == 1) {
            counter.inc();
        } else if (kode == -1) {
            counter.dec();
        } else if (kode == 9) {
            counter.print();
        } else if (kode == -9) {
            break;
        }
    }
    return 0;
}
