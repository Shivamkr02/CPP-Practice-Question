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
    Complex *cptr = new Complex;
    cptr->setData(10,20);
    cptr->showData();
    return 0;
}