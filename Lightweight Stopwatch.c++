#include <iostream>
#include <chrono>
using namespace std;

int main() {
    auto start = chrono::steady_clock::now();
    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " us\n";
}
