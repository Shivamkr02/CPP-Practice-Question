#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<"x: "<<x<<endl<<"y: "<<y;
    return 0;
}