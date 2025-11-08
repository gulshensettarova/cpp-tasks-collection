#include <iostream>
using namespace std;

// Function definition
int findLargerNumber(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int larger = findLargerNumber(x, y);
    cout << "The larger number is: " << larger << endl;

    return 0;
}
