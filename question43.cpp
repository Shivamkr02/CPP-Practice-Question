#include<iostream>
using namespace std;  

class Time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        void setTime(int x,int y,int z){
            hour=x;
            min=y;
            sec=z;
        }
        void showTime(){
            cout<<"hour"<<" : "<<min<<": "<<sec<<endl;
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
            else if(sec>t.sec)
                return true;
            else if(sec<t.sec)
                return false;
        }
        Time operator++(){ // Pre-Increment
            Time temp =* this;
            sec++;
            min=min+sec/60;
            hour=hour+min/60;
            min=min%60;
            return temp;
        }
};
int main(){
    Time t1,t2,t3;
}