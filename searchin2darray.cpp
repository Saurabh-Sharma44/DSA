#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={1,3,4,8,9,5,46,78,345,56,34,76};
    int target;
    cout<<"Enter the value you want to search:";
    cin>>target;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"yes elemnt is present in an array";
            }
        }
    }
    cout<<"No element is not present in an array";
}