#include<iostream>
using namespace std;
int add(int a,int b,int c=0){
    return a+b+c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    int c=10;
    cout<<add(a,b,c);
    return 0;
}