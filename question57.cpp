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
        bool operator<(Time t)
        {
            if(hr < t.hr)
                return true;
            else if(hr>t.hr)
                return false; 
            else if(min<t.min)
                return true;
            else if(min>t.min)
                return false;
            else if(sec<t.sec)
                return true;
            else
                return false;
        }
};
Time* createTimeArray(int size)
{
    return new Time[size];
}
void sort(Time T[],int size){
    int r,i;
    Time temp;
    for(r=1;r<=size-1;r++){
        for(i=0;i<=size-1;i++){
            if(T[i+1]<T[i]){
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
            }
        }
    }
}
void printArray(Time T[],int size){
    for(int i=0;i<size;i++)
        T[i].showTime();
}
int main(){
    Time d1;
    d1.setTime(05,45,23);
    d1.showTime();
    return 0;
}