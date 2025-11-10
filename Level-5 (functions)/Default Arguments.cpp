#include <iostream>
using namespace std;

void greet(string name = "Hormetli istifadeci") {
    cout << "Salam, " << name << "!" << endl;
}

int main() {
    greet();           // Salam, Hormetli istifadeci!
    greet("Gulshen");  // Salam, Gulshen!
}
