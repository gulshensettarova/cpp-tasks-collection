#include <iostream>
using namespace std;

void changeValue(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    changeValue(a);
    cout << a;  // netice: 100
}

