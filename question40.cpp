#include<iostream>
using namespace std;
class Matrix{
    private:
        int A[3][3];
    public:
        void setMatrix(int a[][3]){
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    A[i][j]=a[i][j];
                }
            }
        }
        void printMatrix(){
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    cout<<A[i][j]<<" ";
                }
            cout<<endl;
            }
        }
        Matrix add(Matrix M){
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    temp.A[i][j]=A[i][j]+M.A[i][j];
                }
            }
            return temp;
        }
        Matrix sub(Matrix M){
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    temp.A[i][j]=A[i][j]-M.A[i][j];
                }
            }
            return temp;
        }
        Matrix multiply(Matrix M){
            Matrix temp;
            int s,k;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    for(s=0,k=0;k<=2;k++){
                        s=s+A[i][k]*M.A[k][j];
                    }
                    temp.A[i][j]=s;
                }
            }
            return temp;
        }
        Matrix transpose(){
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++){
                    temp.A[i][j]=A[j][i];
                }
            return temp;
        }
};