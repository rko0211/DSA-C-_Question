#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int count=0;
int res=0;
int a,b;
while(n--)
{
   cin>>a>>b;
   count-=a;
   count+=b;
res = max(count,res);

}
cout<<res;

    return 0;
}