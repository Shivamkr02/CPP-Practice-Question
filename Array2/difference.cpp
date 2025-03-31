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
    int sum_of_odd=0;
    int sum_of_even=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            sum_of_even+=v[i];
        }
        else sum_of_odd += v[i];
    }
    int diff=sum_of_even-sum_of_odd;
    cout<<"Difference: "<<diff;
    // Display
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

}