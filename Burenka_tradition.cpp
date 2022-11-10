#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int count=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int l=0;
        int r=1;
        while (r<n)
        {
           int x= a[l];
           a[l] = a[l]^x;
           a[r] = a[r]^x;
           count++;
           l++;
           r++;
        }
        
     
      cout<<count<<endl;
    }
}