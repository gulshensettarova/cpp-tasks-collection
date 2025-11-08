#include <iostream>
using namespace std;

// Recursive function definition
void printNumbersRecursively(int n) {
    if (n == 0)
        return; // base case
    printNumbersRecursively(n - 1); // recursive call
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printNumbersRecursively(n);
    cout << endl;

    return 0;
}
