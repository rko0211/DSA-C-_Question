#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    // First matrix input
    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        cin>>m1[i][j];
    }
    // Second matrix input
    for(int i =0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        cin>>m2[i][j];
    }
    int ans[n1][n3];
      for(int i =0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        ans[i][j]=0;
    }

    // Matrix multiplication process
    // Take the all row of first matrix
    for(int i =0;i<n1;i++)
    {
        // Take all colum of the second matrix
        for(int j=0;j<n3;j++)
        {
            // Now multiply all element
            for(int k =0;k<n2;k++)
            {
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    // Now array print
    for(int i =0;i<n1;i++)
    {
        for(int j =0;j<n3;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}