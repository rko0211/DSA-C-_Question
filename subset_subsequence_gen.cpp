#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void generatestringsubset(int ind, string s, vector<vector<char>>&ds,vector<char>&x, int n)
{
   // Base case 
if(ind==n)
{
    ds.push_back(x);  
    return ;
}
// pick the element
x.push_back(s[ind]);
generatestringsubset(ind+1,s,ds,x,n);
x.pop_back();
// not pick the element
generatestringsubset(ind+1,s,ds,x,n);
}
int main()
{
    string s="abc";
    vector<vector<char>>ds;
    vector<char>x;
    int n = s.size();
   generatestringsubset(0,s,ds,x,n);
sort(ds.begin(),ds.end());
for(int i =0;i<ds.size();i++)
{
    for(int j=0;j<ds[i].size();j++)
    {
        cout<<ds[i][j]<<" ";
    }
  cout<<endl;
}

}