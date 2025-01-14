#include<iostream>
using namespace std;
class Circle
{
    private:
        int rad;
    public:
        void setRadius(int a) // Instance member function
        {
            rad=a;
        }
        int getRadius(){
            return rad;
        }
        void circumference(){  // Instance Member function
            int r=getRadius();
            cout<<2*3.14*r;
        }
};
int main(){
    Circle c;
    c.setRadius(4);
    c.circumference();
    return 0;
}