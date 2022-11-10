#include<bits/stdc++.h>
using namespace std;
#define maxchar 26
void findlongestsubsequence(string s, int k)
{
    // Inwhich all charecter appears exactly one times
    int n = s.size();
    int frq[maxchar]={0};
    for(int i=0;i<n;i++)
    {
        frq[s[i]-'a']++;
        // index is obtain using str[i]-'a'  ||| str[i] contains ASCII code

    }
 
    for(int i=0;i<n;i++)
    {
        if(frq[s[i]-'a']>=k)
        {
            cout<<s[i];
        }
    }
}
int main()
{
    string str ="geeksforgeeks";
    int k =2;
   
    findlongestsubsequence(str,k);
    return 0;
}
