#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[3][3];
    public:
        void inputMatrix()
        {
            cout<<"Enter 9 numbers (row size) for the matrix: ";
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    cin>>M[i][j];
                }
            }
        }
        void printMatrix()
        {
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    cout<<M[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix x){
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    temp.M[i][j]=M[i][j]+x.M[i][j];
                }
            }
            return temp;
        }
        Matrix operator-(Matrix x){
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    temp.M[i][j]=M[i][j]-x.M[i][j];
                }
            }
            return temp;
        }
        Matrix operator*(Matrix x){
            Matrix temp;
            int s;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    for(int k=0,s=0;k<=2;k++){
                        s+=M[i][k]*x.M[k][j];
                    }
                    temp.M[i][j]=s;
                }
                return temp;
            }
            return temp;
        }
};
int main(){
    Matrix m1,m2,m3;
    return 0;
}