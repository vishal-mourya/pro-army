#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    // let this is my set of arrays
    vector<int> A[4]={{1,2,3},{3,4,6},{5,13,16,20},{12,14,15}};
    // Super Naive approach starts here---
    
    vector<int> temp;
    for(int i=0;i<4;i++){
        for(int j=0;j<A[i].size();j++){
          temp.push_back(A[i][j]); // all elements pushed into a vector
        }
    }
    
    // used sort function from STL--
    sort(temp.begin(),temp.end());
    
    // print all elements in ascending order--
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0; 
} 