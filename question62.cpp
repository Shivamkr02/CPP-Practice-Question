#include<iostream>
#include<string>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        void setRadius(int radius){
            this->radius=radius;
        }
        void getRadius(){
            cout<<"Radius: "<<radius;
        }
        int getArea(int radius){
            return 3.14 * this->radius * this->radius;
        }
};
class ThickRadius : public Circle
{
    private:
        int thickness;
    public:
        void setThickness(int t){
            thickness=t;
        }
        float getThickness(){
            return thickness;
        }
        float getArea(){
            //return 3.14*((getRadius()+thickness)*(getRadius()+thickness)-(getRadius()*getRadius()));
        }
};
int main(){

    return 0;
}