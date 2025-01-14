#include<iostream>
using namespace std;

class Date
{
    private:
        int d;
        int m;
        int y;
    public:
        void setData(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void getData()
        {
            cout<<"D= "<<d<<", m= "<<m<<", y= "<<y;
        }
};

int main(){
    Date d;
    d.setData(31,12,2025);
    d.getData();
    return 0;
}