#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    vector<ll>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]+v[n-2]-v[0]-v[1]<<endl; 

   }

    return 0;
}