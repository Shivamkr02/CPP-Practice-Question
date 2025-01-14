#include<iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void setData(int a,int b,int c)
    {
        hr=a;
        min=b;
        sec=c;
    }
    void showData(){
        cout<<"Time: "<<hr<<" hr "<<min<<" min "<<sec<<" sec ";
    }
    
};

int main(){
    Time t;
    t.setData(3,45,20);
    t.showData();
    return 0;
}
