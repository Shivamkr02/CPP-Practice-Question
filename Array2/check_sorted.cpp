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
    bool flag;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                flag=false;
            }
            else flag=true;
        }
    }
    if(flag) cout<<"Sorted Array";
    else cout<<"Not sorted";
    
}
