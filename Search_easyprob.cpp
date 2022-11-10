#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>m;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{
    m[a[i]]++;
}
if(m[0]==n)
cout<<"EASY";
else cout<<"HARD";
    return 0;
}