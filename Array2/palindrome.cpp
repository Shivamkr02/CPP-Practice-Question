#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr)/4;
    int i = 0;
    int j = n-1;
    bool flag = true; // true -> palindrome
    while(i<j){
        if(arr[i]!=arr[j]){
            flag=false; // false -> not palindrome
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"Array is palindrome";
    else cout<<"Array is not palindrome";
}