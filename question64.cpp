#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        void setCoordinate(int x,int y){
            this->x=x;
            this->y=y;
        }
        int getx(){return x;}
        int gety(){return y;}
        float getDistance(){
            return sqrt(x*x+y*y);
        }
        float getDistance(Coordinate C){
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
        void showCoordinate(){
            cout<<"("<<x<<","<<y<<")";
        }
};
class Shape
{
    private:
        string shapeName;
        void setShapeName(string n){
            shapeName = n;
        }
        string getShapeName(){
            return shapeName;
        }

};
class StraightLine : public Shape
{
    private:
        Coordinate A,B;
    public:
        void setLine(Coordinate A, Coordinate B){
            this->A=A;
            this->B=B;
        }
        float getDistance()
        {
            return A.getDistance(B);
        }
        void showLine(){
            A.showCoordinate();
            B.showCoordinate();
        }
};
int main(){

    return 0;
}