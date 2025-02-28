#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
        int second;
    public:
        void setTime(int x,int y,int z){
            hour=x;
            min=y;
            second=z;
        }
        void showTime(){
            cout<<hour<<" : "<<min<<" : "<<second;
        }
        bool operator>(Time t){
            if(hour>t.hour)
                return true;
            else if(hour<t.hour)
                return false;
            else if(min>t.min)
                return true;
            else if(min<t.min)
                return false;
            else if(second>t.second)
                return true;
            else
                return false;
        }
};

int main(){
    Time t1,t2,t3;
    t1.setTime(07,53,55);
    t2.setTime(06,35,53);
    t1.showTime();
    cout<<endl;
    t2.showTime();
    cout<<endl;
    cout<<t1.operator>(t2);

    return 0;
}