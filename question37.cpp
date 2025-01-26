#include<iostream>
using namespace std;
class Time {
    private: 
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z){
            hr=x;
            min=y;
            sec=z;
        }
        void showTime(){
            cout<<"\n"<<hr<<":"<<min<<":"<<sec;
        }
        void normalize(){
            min=min+sec/60;
            sec=sec%60;
            hr=hr+min/60;
            min=min%60;
        }
        Time add(Time t){
            Time temp;
            temp.sec=sec+t.sec;
            temp.min=min+t.min;
            temp.hr=hr+t.hr;
            return temp;
        }
        bool is_greater(Time t){
            if(hr>t.hr)
                return true;
            else if(hr<t.hr){
                return false;
            }
            else if(min>t.min){
                return true;
            }
            else if(min<t.min){
                return false;
            }
            else if(sec>t.sec){
                return true;
            }
            else{
                return false;
            }
        }
};
int main(){
    Time t1;
    t1.setTime(03,41,26);
    t1.showTime();
    t1.normalize();
    cout<<"After Normalization"<<endl;
    t1.showTime();
}