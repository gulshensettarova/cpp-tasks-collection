#include <iostream>
using namespace std;

// Recursive function definition
int factorialRecursively(int n) {
    if (n <= 1)
        return 1; // base case
    else
        return n * factorialRecursively(n - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = factorialRecursively(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
