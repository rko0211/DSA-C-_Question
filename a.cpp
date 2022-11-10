#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{


int n ;
cin>>n;vector<int>v(n,0);
for(int i=0;i<n;i++)
cin>>v[i];

// print the vector befor sorting 
for(auto it:v)
{
    cout<<it<<" ";
}
cout<<endl;

sort(v.begin(), v.end(), cmp);

// Print the vector after sorting 
for(auto it:v)
{
    cout<<it<<" ";
}
cout<<endl;

    return 0;
}