#include<iostream>
using namespace std;
class Complex {
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void showData(){
            cout<<"\na= "<<a<<"b= "<<b;
        }
        Complex operator+(Complex C){
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-(Complex C){
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex operator*(Complex C){
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=b*C.b+b*C.a;
            return temp;
        }
        bool operator==(Complex C){
            if(a==C.a && b==C.b)
                return true;
            else
                return false;
        }
};
int main(){

    return 0;
}