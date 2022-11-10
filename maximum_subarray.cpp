#include<bits/stdc++.h>
using namespace std;
int main()
{
int k;
cout<<"Enter Subarray length :";
cin>>k;
vector<int>ans;
int a[]={1,3,-1,-3,5,3,6,7};
int n = 8;
list<int>l;
int i=0,j=0;
while(j<n)
{
// Calculation part
while(l.back()<a[j] && l.size()>0)
{
    l.pop_back();
}
l.push_back(a[j]);
if(j-i+1<k)
{
    j++;
}
else if(j-i+1==k)
{
    // ANS from Calculation
ans.push_back(l.front());
if(l.front()==a[i])
{
    l.pop_front();
}
i++;j++;
}
}
for(auto &it:ans)
cout<<it<<" ";

    return 0;
}