#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    string line;
    while (getline(f, line))
        cout << line << endl;
}
