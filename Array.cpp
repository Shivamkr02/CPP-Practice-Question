#include<iostream>
using namespace std;

class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        void createArray(int);
        void insert(int,int);
        void append(int);
        int getItem(int);
        bool isEmpty();
        bool isFull();
        void del(int);
        void edit(int,int);
        int count();
        int getCapacity();
};
void Array :: createArray(int size){
    int arr[size];
}
void Array :: insert(int size,int a){
    for(int i=0;i<=size;i++){
        a[i]=a;
    }
}

int main(){
    Array a1;
    a1.createArray(5);
    return 0;
}