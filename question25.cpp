#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;
        return true;
}
int nextPrime(int n){
    while(!isPrime(++n));
    return n;
}
void primeFactors(int n){
    int i;
    for(i=2;i<=n;i=nextPrime(i)){
        if(n%i==0)
            cout<<i;
    }
}
int main(){
    nextPrime(36);
    return 0;
}