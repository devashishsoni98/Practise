#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}

int fibsum(int n){
    if(n==0)
    return 0;
    else
    return fib(n)+fibsum(n-1);
}
int main(){
    int n = fibsum(4);
    cout<<n;
    return 0;
}