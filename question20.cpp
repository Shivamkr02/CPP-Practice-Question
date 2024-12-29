#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum is: "<<sum(a,b);
    float x,y;
    cin>>x>>y;
    cout<<"Sum is: "<<sum(x,y);
    return 0;
}