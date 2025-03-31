// Find the element x in the array. Take array and x as input

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array: ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter a number to search in array: ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true)
        cout<<"Element found";
    else
        cout<<"404 Element not found";
    return 0;
}