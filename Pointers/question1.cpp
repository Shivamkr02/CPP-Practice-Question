// Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int res = (*ptr1) * (*ptr2);
    cout<<res;

    return 0;
}