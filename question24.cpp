#include<iostream>
using namespace std;
int lcm(int a, int b,int c){
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++){
        if(L%a==0 && L%b==0 && L%c==0){
            return L;
        }
    }
    return 1;
}
int main(){
    int res;
    res = lcm(2,4,6);
    cout<<"LCM is: "<<res;
    return 0;
}