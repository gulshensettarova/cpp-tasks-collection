#include <iostream>
using namespace std; 

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int arr[3] = {1, 2, 3};
    print(arr, 3);
}
