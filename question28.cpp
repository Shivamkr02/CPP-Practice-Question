#include<iostream>
#include<string.h>
using namespace std;
void printSubString(char str[],int startIndex,int endIndex=-1);
void printSubString(char str[],int startIndex,int endIndex){
    if(endIndex==-1){
        endIndex = strlen(str);
    }
    for(int i=startIndex;i<endIndex;i++){
        cout<<str[i];
    }
}
int main(){
    printSubString("Shivam Kumar And Shristi Raj",0,21);
    return 0;
}
