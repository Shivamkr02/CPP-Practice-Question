#include<iostream>
#define ARRAY_INDEX_OUT_OF_BOUND 1
using namespace std;
class Array
{
    private:
        int *p;
        int size;
    public:
        Array(int s){
            size=s;
            p=new int[s];
        }
        ~Array()
        {
            delete []p;
        }
        int& operator[](int index){
            if(index>=size)
            {
                cout<<"Array index out of bound";
                throw ARRAY_INDEX_OUT_OF_BOUND;
            }
            return p[index];
        }
};
int main(){

    return 0;
}