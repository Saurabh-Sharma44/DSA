#include<iostream>
using namespace std;
void printsumdig(int matrix[][4],int row,int col)
{
    int first = 0;
    int sec = 0;
    //first diagonal sum
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    //second diagonal sum
    i=0;
    int j =col-1;
    while(j>=0)
    {
        sec+=matrix[i][j];
        i++,j--;
    }
    cout<<first<<" "<<sec<<" ";
}
int main(){
    //create 2d array
    int matrix[4][4] = {1,3,4,8,9,5,46,78,345,56,34,76,34,23,56,28};
    printsumdig(matrix,4,4);
}