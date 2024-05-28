#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int m=4;
const int n=3;

// bol raha ki function me variable value nahi dal sakte yahi prblm tha 
void reversearray(int arr[4][3])
{
    for(int i=0;i<m;i++)
    {
       int  start =0,end =n-1;
       while(start<end)
       {
        swap(arr[i][start],arr[i][end]);
        start++ ,end--;
       }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[4][3]={1,3,4,8,9,5,46,78,345,56,34,76};
    reversearray(arr);
}
