// C++ program to merge k sorted arrays of size n each. 
#include<bits/stdc++.h> 
using namespace std; 
int n; 
void mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[])  
{  
    int i = 0, j = 0, k = 0;  
    while (i<n1 && j <n2)  
    {  
        if (arr1[i] < arr2[j]){arr3[k] = arr1[i]; i++;}  
        else{arr3[k] = arr2[j]; j++;}
        k++;
    }  
    
    // Store remaining elements of first array  if second array was finished 
    while(i < n1){arr3[k] = arr1[i]; i++; k++;}  
    
    // Store remaining elements of second array  if first array was finished 
    while (j < n2){arr3[k++] = arr2[j++];}  
} 
  
void mergeKArrays(int arr[][n],int i,int j, int output[]) 
{ 
    if(i==j) 
    { 
        //if only one array-- 
        for(int k=0;k < n;k++){output[k]=arr[i][k];} 
    } 
    else if(j-i==1) 
    { 
        //if only two arrays are left them simply merge using 2 pointer
        mergeArrays(arr[i],arr[j],n,n,output); 
    } 
    else{
      // define two array because we are going to split the set
    int out1[n*(((i+j)/2)-i+1)],out2[n*(j-((i+j)/2))]; 
      
    //divide the array into halves 
    mergeKArrays(arr,i,(i+j)/2,out1); 
    mergeKArrays(arr,(i+j)/2+1,j,out2); 
      
    //merge the output array recursively
    mergeArrays(out1,out2,n*(((i+j)/2)-i+1),n*(j-((i+j)/2)),output); 
    }  
} 
   
int main() 
{ 
	n=4; // let us say 4 element in each array--
    // manual input k-sorted array---
    int arr[][n] =  {{12, 16, 112, 234},{14, 59,62,100},{123, 134, 290, 2990}}; 
    int k = sizeof(arr)/sizeof(arr[0]); 
    int result[n*k]; 
    // call merge function--
    mergeKArrays(arr,0,2,result); 
    // print result--
    for(int i=0;i<n*k;i++){cout<<result[i]<<" ";}
   
    return 0; 
} 