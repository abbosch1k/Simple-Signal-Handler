#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("config.txt");
    ofstream dst("config.bak");
    dst << src.rdbuf();
    cout << "Backup created\n";
}
