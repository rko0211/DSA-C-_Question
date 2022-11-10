#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="edxedxxxCQiIVmYEUtLi";
int frq[26]={0};
int n = s.size();
// By i iterator we are finding first uppercase
int i =0;
for(;i<n;i++)
{
if(s[i]>='A' && s[i]<='Z')
{
    i++;
    break;
}
}
int maxcount=0;
for(;i<n;i++)
{   
    
    if(s[i]>='a' && s[i]<='z')
      frq[s[i]-'a']++;
    //    index = s[i]-'a'
     
   int currentcount=0;

     if(s[i]>='A'&&s[i]<='Z')
     {
       for(int j=0;j<26;j++)
       {
        if(frq[j]>0)
        currentcount++;
       }
      maxcount=max(maxcount,currentcount);

     }  
}
cout<<maxcount<<endl;

    return 0;
}