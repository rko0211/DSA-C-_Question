#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n%3==0)
    cout<<"0"<<endl;
    else{
        cout<<((n/3)-(n%3)-1)<<endl;
    }
}

    return 0;
}