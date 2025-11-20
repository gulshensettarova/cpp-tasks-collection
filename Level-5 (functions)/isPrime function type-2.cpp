
#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
          return false;
        }
    }
    return true;
}

void prime(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    prime(n);

    return 0;
}
