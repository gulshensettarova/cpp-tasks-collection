#include <iostream>
using namespace std;

// Iki index-deki elementleri deyisen metod
void swapByIndex(int arr[], int size, int index1, int index2) {
    if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
        cout << "Index xetasi!" << endl;
        return;
    }

    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

// Artan istiqametde siralayan metod (Bubble Sort)
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapByIndex(arr, size, j, j + 1);
            }
        }
    }
}

// Massiv çap eden metod
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {12, 5, 7, 20, 3, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortAscending(arr, size);
    printArray(arr, size);

    return 0;
}
