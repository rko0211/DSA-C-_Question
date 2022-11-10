#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

    int n;
    cin>>n;
    int a[n];
    int res;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {    int xorval =0;    // 0^n ==n  n^n=0
        for(int j=0;j<n;j++)
        {
            if(j!=i)
           xorval=xorval^a[j];
        }
        if(a[i]==xorval)
       {
        res=a[i];
        break;
       }
    }
    cout<<res<<endl;
}

    return 0;
}