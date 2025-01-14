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
        void getData1(){
            cout<<d<<"-"<<m<<"-"<<y;
        }
        void getData2(){
            char *months[]={"Jan",
                            "Feb",
                            "Mar",
                            "Apr",
                            "May",
                            "Jun",
                            "Jul",
                            "Aug",
                            "Sep",
                            "Oct",
                            "Nov",
                            "Dec"};
            cout<<d<<"-"<<months[m-1]<<"-"<<y;
        }
};

int main(){
    Date d1;
    d1.setData(31,12,2025);
    d1.getData1();
    d1.getData2();
    return 0;
}
