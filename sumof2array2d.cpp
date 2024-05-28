#include<iostream>
using namespace std;
int main(){
    int arr1[3][2] = {3,5,6,4,3,45};
    int arr2[3][2] = {4, 6,3,8,5,5};
    int ans[3][2];
    //Add two matrix
    for(int row=0;row<3;row++)
    for(int col=0;col<2;col++){
    ans[row][col]=arr1[row][col]+arr2[row][col];
    }
    for(int row=0;row<3;row++)
    for(int col=0;col<2;col++)
    cout<<ans[row][col]<<" ";
    
}
