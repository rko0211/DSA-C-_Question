#include<bits/stdc++.h>
using namespace std;
int countOfocurrance(string str1, string str2,int m , int n)
{
if((m==0 && n==0)||n==0)
{
    return 1;
}
if(m==0)
{
    return 0;
}
if(str1[m-1]==str2[n-1])
{
    // Left recurssion call first and then right recurssion 
    return countOfocurrance(str1,str2,m-1,n-1)+countOfocurrance(str1,str2,m-1,n);
}
return countOfocurrance(str1,str2,m-1,n);
}
int main()
{
string str1="geeksforgeeks";
string str2="gks";
// Find number times a string occurs as a subsequence in a string
int m = str1.size();
int n = str2.size();

int res = countOfocurrance(str1,str2,m,n);
cout<<res<<endl;
    return 0;
}