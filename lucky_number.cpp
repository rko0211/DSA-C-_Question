#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int count_luckydigit=0;

for(int i=0;i<s.size();i++)
{
if((s[i]-'0')==4 || (s[i]-'0')==7)
count_luckydigit++;
}
if(count_luckydigit==4 || count_luckydigit==7)
cout<<"YES";
else cout<<"NO";
    return 0;
}