#include <iostream>
using namespace std;

// 1. Massiv elementl?rinin c?mini tapan metod
int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
     int arr[6] = {12, 5, 7, 20, 3, 15};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout<<"Massiv elementlerinin cemi: "<<sum(arr,size);
     return 0;
}
