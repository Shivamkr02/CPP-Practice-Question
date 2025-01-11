#include<iostream>
#include<string.h>
using namespace std;
void sort(char *str[],int n,bool asc){
    int i,r;
    char temp[6];
    if(asc){
        for(r=0;r<=n-1;r++){
            for(i=0;i<=n-1;i++){
                if(strcmp(str[i],str[i+1])>0){
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy(str[i+1],temp);
                }
            }
        }
    }
    else{
        for(r=0;r<=n-1;r++){
            for(i=0;i<=n-1;i++){
                if(strcmp(str[i],str[i+1])>0){ 
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy(str[i+1],temp);
                }
            }
        }
    }
}
int main(){

    
    return 0;
}
