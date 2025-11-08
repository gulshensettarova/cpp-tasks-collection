#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Birinci ?d?di daxil edin: ";
    cin >> a;

    cout << "Ikinci ?d?di daxil edin: ";
    cin >> b;

    // temp olmadan swap (aritmetik üsul)
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "?d?dl?rin d?yisdirilmis formasi: a = " << a << ", b = " << b << endl;

    return 0;
}
