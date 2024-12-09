#include<iostream>
using namespace std;
int highest_digit(int n){
    int d,max=0;
    while(n>0){
        d=n%10;
        if(max<=d){
            max=d;
        }
        n/=10;
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<highest_digit(n);
}