#include<iostream>
using namespace std;
float area(float r){
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}
float area(float b,float h){
    return (b*h)/2;
}
int main(){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    int l,b;
    cout<<"Enter Length and breadth: ";
    cin>>l>>b;
    float base,h;
    cout<<"Enter base and height: ";
    cin>>base>>h;
    cout<<"Area of Circle: "<<area(r)<<endl;
    cout<<"Area of Rectangle: "<<area(l,b)<<endl;
    cout<<"Area of triangle: "<<area(base,h);

}