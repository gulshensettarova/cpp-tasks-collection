#include <iostream>
using namespace std;

void setArrayElements(int arr[], int size){
      for(int i=0;i<size;i++){
          cout<<"a["<<i<<"]=";
          cin>>arr[i];
    }
}

void swap(int arr[], int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void printArray(int arr[], int size){
        for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
    }
  
}

void sortArrayDesc(int arr[],int size){
       for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
             
            }
        }
    }
}
int main() {
    int arr[5];
    int size=sizeof(arr,sizeof(int));
    setArrayElements(arr,5);
    sortArrayDesc(arr,size);
     printArray(arr,5);
        return 0;
}
