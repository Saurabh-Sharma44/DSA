#include<iostream>
using namespace std;

// void printcol(int arr[][4],int row,int col)
// {
//     //column wise
//     for(int j=0;j<col;j++)
//     for(int i=0;i<row;i++)
//     cout<<arr[i][j]<<" ";
// }
int main(){
    //create 2d array
    int arr[3][4]={1,3,5,6,4,3,98,67,56,45,45,98};
    // //print all the value in  array row wise
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<arr[row][col]<<" ";
    // cout<<endl;

    //print all the value in array col wise,function call
    //printcol(arr,3,4);

    //find element in an array
    int x;
    cout<<"Enter the value of x that you want to search in the array :";
    cin>>x;
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        {
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";


}