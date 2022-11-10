#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>m;
int main()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    if(s=="Tetrahedron")
    m[s]+=4;
    if(s=="Cube")
    m[s]+=6;
    if(s=="Octahedron")
    m[s]+=8;
    if(s=="Dodecahedron")
    m[s]+=12;
    if(s=="Icosahedron")
    m[s]+=20;
}
int res=0;
for(auto &it:m)
{
    res+=it.second;
}
cout<<res;
    return 0;
}