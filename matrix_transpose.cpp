#include<iostream>
using namespace std;
int main()
{
int n;
// We take square matrix so m==n
 cin>>n;
 int a[n][n];
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    cin>>a[i][j];
 }
// Transpose operation on matrix
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        // swap operation is done
        if(i>j)
        {
            int tem = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tem;
        }
    }
}

// trans[ose matrix print
cout<<"The transpose of a matrix is :"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}

    return 0;
}