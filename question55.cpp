#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int hr,int min,int sec){
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void showTime(){
            cout<<hr<<" :"<<min<<" :"<<sec;
        }
        void setHour(int hr){this->hr=hr;}
        void setMinutes(int min){this->min=min;}
        void setSeconds(int sec){this->sec=sec;}
        int getHours(){return hr;}
        int getMinutes(){return min;}
        int getSeconds(){return sec;}

};
Time* createTimeArray(int size)
{
    return new Time[size];
}
int main(){
    Time d1;
    d1.setTime(05,45,23);
    d1.showTime();
    return 0;
}