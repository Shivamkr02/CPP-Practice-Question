#include <iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,4,3,9,5,7,6,4,5};
    int count=0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]==arr[j]);
            else{
                count=arr[i];
              
            } 
        }
        
    }
    cout<<count;
    return 0;
}