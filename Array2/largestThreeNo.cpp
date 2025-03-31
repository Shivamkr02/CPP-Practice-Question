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
    int max=INT8_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    int sec_largest=INT16_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>sec_largest && v[i]<max){
            sec_largest=v[i];
        }
    }
    //cout<<sec_largest;
    int third_largest=INT8_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>third_largest && v[i]<sec_largest && v[i]<max){
            third_largest=v[i];
        }
    }
    cout<<endl<<max<<","<<sec_largest<<","<<third_largest<<" are largest three in the array";
}