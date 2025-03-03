#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        // Methods
    void setDistance(int x,int y,int z){
       km=x;
       m=y;
       cm=z; 
    }
    void showDistance(){
        cout<<"\n"<<km<<"km "<<m<<"m "<<cm<<"cm ";
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.cm=cm+d.cm;
        temp.m=m+d.m+temp.cm/100;
        temp.cm%=100;
        temp.km=km+d.km+temp.m/1000;
        temp.m%=1000;
        return temp;
    }
    Distance operator--() // Pre-decrement
    {
        if(cm>0)
            cm--;
        else{
            cm=99;
            if(m>0)
                m--;
            else{
                m=999;
                km--;
            }
        }
        return *this;
    }
    Distance operator--(int) // Post-decrement
    {
        Distance temp = *this;
        if(cm>0)
            cm--;
        else{
            cm=99;
            if(m>0)
                m--;
            else{
                m=999;
                km--;
            }
        }
        return temp;
    }
};
int main(){

    return 0;
}