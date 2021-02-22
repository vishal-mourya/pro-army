#include<iostream> 
using namespace std; 
 
// prints Next Greater Element Array 
void NextGreaterElement(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int j; 
        for (j = i + 1; j < n; j++) 
        { 
            if (arr[i] < arr[j]){break;}
        }
        if(j==n){cout<<"-1"<<" ";}
        else{cout<<arr[j]<<" ";}
        
    } 
} 


int main() 
{ 
    int arr[] = {1,2,9,3,7,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    NextGreaterElement(arr, n); 
    return 0; 
} 