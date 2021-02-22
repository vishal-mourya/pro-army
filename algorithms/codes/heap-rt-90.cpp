#include<bits/stdc++.h> 
using namespace std; 
const int n=4; // size of each array--

// Augmented data structure--
struct Node 
{ 
    int element; // The element to be stored 
    int i; // index of the array from which the element is taken 
    int j; // index of the next element to be picked from the array  
    Node(int x,int y,int z){
        element=x;
        i=y;
        j=z;
    }
}; 
class Compare
{
public:
    bool operator()(Node& p1,Node& p2) 
    { 
        return p1.element > p2.element; 
    } 
};

void mergeKArrays(int arr[][n], int k,int result[])
{ 
    int i=0; // result curr index--
    priority_queue<Node,vector<Node>, Compare> Q;
    for(int i=0;i<k;i++){
        Q.push(Node(arr[i][0],i,1));
    }
    
    while(Q.empty()==false){
        result[i]=Q.top().element;
        i++;
        if((Q.top().j)!=n){
            Q.push(Node(arr[Q.top().i][Q.top().j],Q.top().i,Q.top().j+1));
        }
        Q.pop();
    }
} 

int main() 
{ 
    int arr[][n] =  {{1,15,27,34},{2,19,20,100},{3,234,390,2000}}; 
    int k = sizeof(arr)/sizeof(arr[0]); 
    int result[n*k];
    mergeKArrays(arr,k,result); 
    for (int i=0;i<n*k;i++){cout<<result[i] << " ";} 
  
    return 0; 
} 