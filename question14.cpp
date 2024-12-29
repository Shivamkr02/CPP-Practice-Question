#include<iostream>
using namespace std;
void fibonacci_series(int n){
    if(n<0)
        cout<<"Enter correct number";
    int arr[n] = {0,1};
    int next=0;
    for(int i=2;i<n;i++){
        next = arr[i-1]+arr[i-2];
        arr[i] = next;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
bool isInFib(int num){
    int a=-1,b=1,c=0;

    while(c<num){
        c=a+b;
        if(num==c)
            return true;
        a=b;
        b=c;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    // fibonacci_series(n);
    cout<<isInFib(n);
    return 0;
}
