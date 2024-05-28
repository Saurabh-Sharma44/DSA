#include<iostream>
using namespace std;
void wave(int arr[][3],int row,int col)
{
  for(int j=0;j<col;j++)
  {
    if(j%2==0)
    {
      for(int i=0;i<row;i++)
      cout<<arr[i][j]<<" ";
    }

    else 
    {
      for(int i=row-1;i>=0;i--)
      cout<<arr[i][j]<<" ";
    }
  }
}
int main(){
    int arr[4][3]={1,3,4,8,9,5,46,78,345,56,34,76};
    wave(arr,4,3);
}