#include<iostream>
using namespace std;
int  firstOccurance(int ind, int a[], int n, int k)
{
    // Base case
    if(ind==n)
    return -1;
    if(a[ind]==k)
    {
        
        return ind;
    }
    firstOccurance(ind+1,a,n,k);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    cin>>a[i];
    int k ;
    cin>>k;
   cout<<firstOccurance(0,a,n,k)<<endl;
}