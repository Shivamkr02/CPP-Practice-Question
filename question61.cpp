#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    protected:
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        string getName(){return name;}
        int getAge(){return age;}
};
class Employee : public Person
{
    private:
        float salary;
    public:
        void setEmployee(string n,int a,float s){
            setName("Shivam");
            setAge(a);
            salary=s;
        }
        void showEmployee(){
            cout<<"Name: "<<getName()<<endl;
            cout<<"Age: "<<getAge()<<endl;
            cout<<"Salary: "<<salary;
        }
};
int main(){
    Person p1;
    Employee e1;
    e1.setEmployee("Shiva",20,80000.0);
    e1.showEmployee();
    return 0;
}