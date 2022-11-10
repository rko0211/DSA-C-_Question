#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n;
cin>>n;
int k;
cin>>k;
while(k--)
{
    if(n%10!=0)
    n= n-1;
    else 
    n= n/10;
}
cout<<n;
    return 0;
}