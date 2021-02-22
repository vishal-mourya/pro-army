/*.   Copyright- Adarsh Agrawal. */
#include <bits/stdc++.h> 
using namespace std;
int N,M;
// our search array-----
int A[4][4] = {   { 10, 12, 14, 16 }, 
                  { 15, 25, 35, 45 }, 
                  { 17, 29, 37, 48 }, 
                  { 20, 42, 56, 100 } 
              }; 
              
// x,y stores current index 
pair<int,int> search(int target,int x,int y) 
{ 
    while(true){
        if(x==N || y==-1){break;}  // Element not found
        
    	else if(target>A[x][y]){ 
    	    // Case -1 
    	     x++;
        }
    	else if(target<A[x][y]){
    	// Case-2
    	 y--;
        }
    	else{
    	//Case-3
    		return {x,y};
    	}
    }
    return {-1,-1};
} 
// main function  
int main() 
{ 
    N=4; M=4; // N-> No. of rows M->No. of Columns
    int target; 
    cin>>target;
    pair<int,int> temp;
    temp=search(target,0,M-1); // 3,3 are coordinates of 
    if(temp.first==-1){cout<<"Element Not Found\n";}
    else{cout<<"Coordinates are ("<<temp.first<<","<<temp.second<<")"<<"\n";}
    return 0; 
} 