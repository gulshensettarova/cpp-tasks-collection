#include <iostream>
using namespace std;

// Function definition: takes two integers and returns their sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Call the function and store the result
    int result = sum(x, y);
    cout << "Sum = " << result << endl;

    return 0;
}
