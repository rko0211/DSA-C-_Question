#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,z;
    cin>>n>>z;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int max_val=INT_MIN;
for(int i=1;i<=n;i++)
{
  if(max_val<a[i])
  {
    max_val=a[i];
  }
}
int temp =max_val;
max_val=(max_val|z);
z=(z&temp);
 cout<<max_val<<endl;
}
    return 0;
}