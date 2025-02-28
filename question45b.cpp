#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        //methods
        Numbers operator-(){
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
};
int main(){
    Numbers n1,n2;

    return 0;
}