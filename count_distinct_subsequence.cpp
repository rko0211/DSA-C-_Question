#include<bits/stdc++.h>
using namespace std;
set<vector<char>>st;
void countsubsequence(int ind, string s,vector<char>&ds)
{
    // base case
    if(s[ind]=='\0')
    {
        for(auto &it:ds)
        cout<<it<<" ";
        cout<<endl;
         st.insert(ds);
         return;
    }
ds.push_back(s[ind]);
countsubsequence(ind+1,s,ds);
ds.pop_back();
// not pick the char
countsubsequence(ind+1,s,ds);
}
int main()
{
 string s="ggg";
 vector<char>ds;
countsubsequence(0,s,ds);
cout<<st.size()<<endl;

st.clear();
    return 0;
}