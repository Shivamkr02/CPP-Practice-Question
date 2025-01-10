#include<iostream>
using namespace std;
void swap_array(int arr1[],int arr2[],int size){
    int i,t;
    for(i=0;i<size;i++){
        t=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=t;
    }
  
}
int main(){
    int arr1[] = {2,4,6,8};
    int arr2[] = {1,3,5,7};
    swap_array(arr1,arr2,3);
    for(int i=0;i<3;i++){
        cout<<arr1[i];
    }
    return 0;
}