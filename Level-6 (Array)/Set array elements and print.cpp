#include <iostream>
using namespace std;

void setArrayElements(int arr[], int size){
      for(int i=0;i<size;i++){
          cout<<"a["<<i+1<<"]=";
          cin>>arr[i];
    }
}

void printArray(int arr[], int size){
        for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
    }
  
}

int main() {
    int arr[3];
    int size=sizeof(arr)/sizeof(arr[0]);
    setArrayElements(arr,size);
    printArray(arr,size);
    return 0;
}
