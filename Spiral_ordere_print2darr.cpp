#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
//    n-->row mumber
// m-->colum number
   int a[n][m];
//    Input array element
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    cin>>a[i][j];
}
// Spiral order print

int row_st=0,row_end=n-1;
int col_st=0, col_end=m-1;
while(row_st<=row_end && col_st<=col_end)
{
    // First row print
    for(int col=col_st; col<=col_end;col++)
    cout<<a[row_st][col]<<" ";
    row_st++;

    // Last colum print
    for(int row=row_st;row<=row_end;row++)
    cout<<a[row][col_end]<<" ";
    col_end--;

    // Last row print
    for(int col=col_end;col>=col_st;col--)
    cout<<a[row_end][col]<<" ";
    row_end--;

    // first colum print
    for(int row = row_end;row>=row_st;row--)
    cout<<a[row][col_st]<<" ";
    col_st++;
}

    return 0;
}