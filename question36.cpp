#include<iostream>
using namespace std;
class Complex 
{
    private:
        int a,b;  // a and b is instance member variable
    public:
        void setData(int,int); // Declaration of setData fn
        void showData(); // Declarartion of showData fn
        Complex add(Complex); //Declaration of add fn --> Returning complex object
        Complex subtract(Complex); // Declaration of subtract fn --> Returning Complex object
        Complex multiply(Complex); // Declaration of multiply fn --> returning Complex Object
};
void Complex :: setData(int x,int y){     // instance member function of object Complex
    a=x;  // a is private instance member variable of Complex object in which value of x is assigned in a.
    b=y;  // b is private instance member variable of Complex object in which value of y is assigned in b.
}
void Complex :: showData(){  // instance member fn of object Complex
    cout<<"\na= "<<a<<" b= "<<b;  // prints the value of a and b
}
Complex Complex :: add(Complex C) {  // instance member function is return a object Complex
    Complex temp;  // Complex type variable
    temp.a = a+C.a;  // value of caller object and value of passing object are added
    temp.b = b+C.b; //  value of caller object and value of passing object are added
    return temp;
}
Complex Complex :: subtract(Complex c) {
    Complex temp;
    temp.a = a-c.a;
    temp.b = b-c.b;
    return temp;
}
Complex Complex :: multiply(Complex c) {
    Complex temp;
    temp.a = a*c.a;
    temp.b = b*c.b;
    return temp;
}
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);  // C1 object ke a me 3 hai or c1 object ke b me 4 hai
    c2.setData(5,6);  // C2 object ke a me 5 hai or c2 object ke b me 3 hai
    c3=c1.add(c2);    // c1 is a caller object which is calling a fn add and in fn add c2 is apassing as argument in add fn which gets recieved in Complex variable C and this add fn returning a object. The value of Object stored in c3 object.
    c3.showData(); 
    c4=c1.multiply(c2);
    c4.showData();
    c5=c2.subtract(c1);
    c5.showData();
    cout<<endl;
    return 0;
}