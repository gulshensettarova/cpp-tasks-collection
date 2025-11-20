
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

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    isPrime(n) ? cout<<"Sade" : cout<<"Murekkeb";
    return 0;
}
