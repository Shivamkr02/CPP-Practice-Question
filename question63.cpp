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
        float getDistance(){
            return sqrt(x*x+y*y);
        }
        float getDistance(Coordinate C){
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
};
int main(){

    return 0;
}