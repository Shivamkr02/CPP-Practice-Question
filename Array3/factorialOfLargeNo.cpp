#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to find factorial: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=5;i++){
        fact*=i;
    }
    cout<<fact;

    return 0;
}