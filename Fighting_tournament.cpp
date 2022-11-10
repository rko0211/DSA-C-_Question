#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
  int n,q;
  cin>>n>>q;
  vector<int>v;
  for(int i=0;i<n;i++)
  cin>>v[i];
  while(q--)
  {
    int no_wins=0;
    int i,k;
    cin>>i>>k;
  for(int j=i;j<k;j++)
  {
    if(v[j]>v[j+1])
    {
         no_wins++;
         v.push_back(v[j+1]);
    }
    else v.push_back(v[j]);
   
  }
  }
}

    return 0;
}