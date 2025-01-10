#include<iostream>
using namespace std;
void volume(float l,float b,float h){
    float v=l*b*h;
    cout<<"Volume of Cubiod is: "<<v;
}
void volume(float r){
    float v = 1.33 * 3.14 * r*r*r;
    cout<<"Volume of Sphere is: "<<v;
}
void volume(float r,float h){
    float v = 0.33 * 3.14 * r*r*h;
}
int main(){
    volume(2);
    return 0;
}