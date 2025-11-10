#include <iostream>
using namespace std;

int sum(int, int); // function prototype

int main() {
    cout << sum(3, 4);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}


//Funksiyanýn prototipi funksiyanýn evvelceden elanidir.
//Bu, kompilyatora funksiyanin mövcud oldugunu bildirir.
