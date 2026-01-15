#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Paused...\n";
    this_thread::sleep_for(chrono::seconds(1));
}
