#include<iostream>
using namespace std;
void merge(int a[],int b[],int n,int c[]){
    int i,j,k;
    for(i=0,j=0,k=0;i<n && j<n;k++){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=a[i];
            i++;
            k++;
        }
        while(i<n){
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<n){
            c[k]=b[j];
            j++;
            k++;
        }
    }
}
int main(){
    int a[] = {2,5,9}, b[] = {3,4,7};
    int c[6];
    merge(a,b,3,c);
    for(int i=0;i<=5;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}