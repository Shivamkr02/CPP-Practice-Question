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
    int duplicate=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            duplicate=arr[i];
        }
        continue;
    }
    cout<<duplicate;
    return 0;
}