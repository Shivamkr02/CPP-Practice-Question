#include<iostream>
#include<string.h>
void rotateArray(int A[],int N,int d=1,int n=1);
void rotateArray(int A[],int N,int d,int n){
    int i,t;
    if(d==1){
        while(n){
            t=A[N-1];
            for(i=N-1;i>=1;i--){
                A[i]=A[i-1];
            }
            A[0]=t;
            n=n-1;
        }
    }
    else{
        while(n){
            t=A[0];
            for(i=0;i<=N-2;i++){
                A[i]=A[i+1];
            }
            A[N-1]=t;
            n=n-1;
        }
    }
}
int main(){
    
    return 0;
}