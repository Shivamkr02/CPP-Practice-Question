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
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int sec_min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]=!min && arr[i]>min && arr[i]<sec_min){
            sec_min=arr[i];
        }
    }
    cout<<"Second Minimum number is: "<<sec_min;

    return 0;
}