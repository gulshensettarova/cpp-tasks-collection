#include <iostream>
using namespace std;

int main() {
    //  Statik massiv nümun?si
    int staticArr[5] = {10, 20, 30, 40, 50};

    cout << "Statik massiv elementleri: ";
    for(int i = 0; i < 5; i++) {
        cout << staticArr[i] << " ";
    }
    cout << endl;

    cout << "Statik massiv olcusu (byte): " << sizeof(staticArr) << endl;
    cout << "Statik massiv bir elementin olcusu (byte): " << sizeof(staticArr[0]) << endl;
    cout << "Statik massivdeki elementlerin sayi: " 
         << sizeof(staticArr) / sizeof(staticArr[0]) << endl;

    cout << "\nStatik massiv adresleri:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Address of staticArr[" << i << "] = " << &staticArr[i] << endl;
    }

    //  Dinamik massiv nümun?si
    int n = 5;
    int* dynamicArr = new int[n] {10, 20, 30, 40, 50};

    cout << "\nDinamik massiv elementleri: ";
    for(int i = 0; i < n; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;

    cout << "Dinamik massiv pointer olcusu (byte): " << sizeof(dynamicArr) << endl;
    cout << "Dinamik massiv bir elementin olcusu (byte): " << sizeof(dynamicArr[0]) << endl;
    cout << "Dinamik massivdeki elementlerin sayi bilinmir, saxlamaq lazimdir (n = " << n << ")" << endl;

    cout << "\nDinamik massiv adresleri:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Address of dynamicArr[" << i << "] = " << &dynamicArr[i] << endl;
    }

    // Dinamik massiv ucun ayrilan yaddasi temizleyirik
    delete[] dynamicArr;

    return 0;
}
