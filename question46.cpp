#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator;
        long denominator;
    protected:
        long lcm(int x,int y){
            int L;
            for(L=x>y?x:y;L<=x*y;L++)
                if(L%x==0&&L%y==0)
                    return L;
        }
    public:
        Fraction(long n=0,long d=0){
            numerator=n;
            denominator=d;
        }
        Fraction operator+(Fraction f){
            Fraction temp;
            long L=lcm(denominator,f.denominator);
            temp.numerator=numerator*(L/denominator)+f.numerator*(L/f.denominator);
            temp.denominator=L;
            return temp;
        }
};
int main(){

    return 0;
}