#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==m || abs(n-m)%2==0)  cout<<"Tonya"<<endl;
        else if(abs(n-m)%2!=0) cout<<"Burenka"<<endl;
    }
}