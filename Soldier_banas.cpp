#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,w;long long int n;
cin>>k>>n>>w;

int total_requiredmoney = k*((w*(w+1))/2);
if(total_requiredmoney<=n)
cout<<"0";
else cout<<(total_requiredmoney-n);
    return 0;
}