#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}