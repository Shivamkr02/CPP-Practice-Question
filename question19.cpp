#include<iostream>
using namespace std;
int maximum(int a,int b){
    return (a>b)?a:b;
}
float maximum(float a,float b){
    return (a>b)?a:b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Greater no is: "<<maximum(a,b);
    float x,y;
    cin>>x>>y;
    cout<<"Greater no is: "<<maximum(x,y);
    return 0;
}