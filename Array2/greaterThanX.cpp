#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cout<<"Size of an Array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    // Display
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    int x;
    cout<<"Enter number to find greater number: ";
    cin>>x;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<" numbers are greater than "<<x;
}