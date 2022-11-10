#include<iostream>
using namespace std;
void find_next_lexstring(string s)
{
    int i =s.size()-1;
  while(s[i]=='z' && i>=0)
  i--;
  if(i==-1)
  s=s+'a';
  else{
    s[i]=s[i]+1;
  }
  cout<<s<<endl;
}
int main()
{
string s ="absz";
find_next_lexstring(s);
}