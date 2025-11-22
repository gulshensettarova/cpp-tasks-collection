#include <iostream>
using namespace std;

// 2. Massivin maksimum elementini tapan metod
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
     int arr[6] = {12, 5, 7, 20, 3, 15};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout<<"Max: "<<findMax(arr,size);
     return 0;
}
