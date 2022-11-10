#include<bits/stdc++.h>
using namespace std;
void permute(string s, vector<vector<char>>&ans, vector<char>&ds,int n,int frq[])
{
    if(ds.size()==n)
    {
        ans.push_back(ds);
        return;
    }
   
    for(int i =0;s[i]!='\0';i++)
    {
           if(!frq[i])
           {
            frq[i]=1;
            ds.push_back(s[i]);
            permute(s,ans,ds,n,frq);
            ds.pop_back();
            frq[i]=0;
           }
    }
}
int main()
{

string s="BAC";
vector<vector<char>>ans;
vector<char>ds;
int n = s.size();
int frq[n]={0};
permute(s,ans,ds,n,frq);
sort(ans.begin(),ans.end());
for(int i =0;i<ans.size();i++)
{
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j];
    }
    cout<<endl;
}
cout<<ans.size()<<endl;

    return 0;
}