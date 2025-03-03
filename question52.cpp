#include<iostream>
using namespace std;
class Complex
{
    private:
        int a;
        int b;
    public:
        void setData(int a,int b){
            this->a=a;
            this->b=b;
        }
        void showData(){
            cout<<"a= "<<a<<endl<<"b= "<<b;
        }
};
int main(){
    Complex c1;
    c1.setData(4,5);
    c1.showData();
    return 0;
}