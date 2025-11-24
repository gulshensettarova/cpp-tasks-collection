#include <iostream>
using namespace std;

void swap(int arr[],int i, int j){
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
int main(){
     int arr[6] = {12, 5, 7, 20, 3, 15};
     int size = sizeof(arr)/sizeof(arr[0]);
     int index1,index2;
     cout<<"index1=";
     cin>>index1;
     cout<<"index2=";
     cin>>index2;
     swap(arr,index1,index2);
     print(arr,size);
     return 0;
}
