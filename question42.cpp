#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
        int second;
    public:
        void setData(int x,int y,int z){
            hour=x;
            min=y;
            second=z;
        }
        void showData(){
            cout<<hour<<" : "<<min<<" : "<<second<<" : ";
        }
        Time operator> (Time t){
            int time;
        }
};

int main(){
    Time t1,t2;
    t1.setData(04,53,55);
    t2.setData(06,35,53);
    return 0;
}