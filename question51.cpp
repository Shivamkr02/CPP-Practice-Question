#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    public:
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
        void showData(){
            cout<<name<<endl<<age;
        }
};
int main(){
    Person p1("Shivam",20);
    p1.showData();
    return 0;
}