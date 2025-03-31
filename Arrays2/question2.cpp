#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sec_max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]>sec_max){
            sec_max=arr[i];
        }
    }
    cout<<"Second maximum number is: "<<sec_max;
    return 0;
}