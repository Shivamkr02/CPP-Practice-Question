#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(v[i]==1 && v[i]==0){
            int temp;
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    for(i=0;i<v.size();i++){
        cout<<v[i];
    }
}