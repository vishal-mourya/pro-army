#include <bits/stdc++.h> 
using namespace std; 
  
// prints next greater elements
void NextGreaterElement(int arr[], int n) { 
	// stack from STL
   stack < int > s; 
   int A[n];
   // last will be -1 always
   A[n-1]=-1;
   s.push(arr[n-1]);
   for(int i=n-2;i>=0;i--){
       while(s.empty()==false && s.top()<=arr[i]){s.pop();} // remove all smaller no. from stack
       if(s.empty() || s.top()<arr[i]){A[i]=-1;}
       else{A[i]=s.top();}
       s.push(arr[i]);
   }
   // print all elemnt
   for(int i=0;i<n;i++){cout<<A[i]<<" ";}
} 
  
int main() { 
	// suppose this is given array--
  int arr[] = {1,9,8,2,7,6,11}; 
  int n = sizeof(arr) / sizeof(arr[0]);
  // this function will print required output 
  NextGreaterElement(arr, n); 
  return 0; 
}
