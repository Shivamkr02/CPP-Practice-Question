#include<iostream>
using namespace std;
bool check_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        } 
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(check_prime(n)){
        cout<<n<<"is prime number"<<endl;
    }else{
        cout<<n<<"is not prime number"<<endl;
    }
return 0;
}
