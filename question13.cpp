#include<iostream>
using namespace std;
int power(int x,int y){
    int pow=1;
    for(int i=0;i<y;i++){
        pow*=x;
    }
    return pow;
}
int main(){
    int x,y;
    cout<<"Enter the value of X and Y: ";
    cin>>x>>y;
    cout<<power(x,y);
}