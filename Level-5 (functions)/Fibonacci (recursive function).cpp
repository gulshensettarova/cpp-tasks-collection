#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}

int main() {
    for(int i=0;i<10;i++){
        cout<<fib(i)<<" ";
    }
    //output : 1 1 2 3 5 8  13 21 34 55
    return 0;
}
