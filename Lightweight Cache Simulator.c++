#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> cache;
    cache["item"] = 42;
    cout << cache["item"] << endl;
}

