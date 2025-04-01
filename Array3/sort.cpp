
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 8, -3, 4, -6, 2}; // Example input
    
    int i = 0, j = v.size() - 1;
    
    while (i < j) {
        // Move 'i' forward if it's already negative
        while (i < j && v[i] < 0) i++;
        
        // Move 'j' backward if it's already positive
        while (i < j && v[j] > 0) j--;
        
        // Swap if a misplaced positive and negative number are found
        if (i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    // int noz=0;
    // int noo=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0) noz++;
    //     else noo++;
    // }
    // for(int i=0;i<v.size();i++){
    //     if(i<noz) v[i] =0;
    //     else v[i]=1;
    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
