#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(3);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    int x;
    cout<<"Enter number to check triplet: ";
    cin>>x;
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size()-1;k++){
                if(v[i]+v[j]+v[k]==x){
                    count++;
                }
            }
        }
    }
    
    cout<<count;
}