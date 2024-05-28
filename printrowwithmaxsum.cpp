#include<iostream>
using namespace std;
void printrowmax(int arr[][5],int row,int col)
{
    int index = -1,sum = INT8_MIN;
    for(int i=0;i<row;i++)
    {
        int total = 0;
        for(int j=0;j<col;j++)
        total+=arr[i][j];

        if(total>sum)
        {
            sum=total;
            index = i;
        }
    }
    cout<<index<<" ";
}
int main(){
    //print row index with max sum
    //create 2d arrray
    int arr[4][5]={5,6,8,7,9,45,34,64,34,23,98,67,49,45,56,8,56,37,308,2};
    printrowmax(arr,4,5);
}