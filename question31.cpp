#include<iostream>
using namespace std;
class Complex {
    private:
        int a,b;
    public:
        void setData (int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a= "<<a<<" b= "<<b;
        }
};
int main(){
    Complex c1;
    c1.setData(4,6);
    c1.showData();
    return 0;
}
