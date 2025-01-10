#include<iostream>
using namespace std;
int hcf(int a,int b){
    int H;
    for(H=a<b?a:b;H>=1;H--){
        if(a%H==0 && b%H==0)
            return H;
    }
    return 1;
}
int main(){
    int res = hcf(2,4);
    cout<<res;
    return 0;
}