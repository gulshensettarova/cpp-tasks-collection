#include <iostream>
#include <string>
using namespace std;

int main() {
    string ad;
    cout << "Zehmet olmasa adinizi daxil edin: ";
    getline(cin, ad);            
    cout << "Salam, " << ad << "!" << endl;
    return 0;
}
