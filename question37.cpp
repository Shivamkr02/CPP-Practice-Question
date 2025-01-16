#include<iostream>
using namespace std;
class Time 
{
    private:
        int h,m,s;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time add(Time);
        bool is_greater(Time);
};
void Time :: setTime(int x,int y,int z){
    h=x;
    m=y;
    s=z;
}
void Time :: showTime(){
    cout<<"H= "<<h<<"M= "<<m<<"S= "<<s;
}
void Time :: normalize(){
    cout<<"Hour= "<<h;
}
Time Time :: add(Time t){
    Time temp;
    temp.h = h+t.h;
    temp.m = m+t.m;
    temp.s = s+t.s;
    return temp;
}

int main(){
    Time t1,t2,t3;
    t1.setTime(6,55,56);
    t2.setTime(12,25,33);
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}