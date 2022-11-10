#include<iostream>
using namespace std;
void findsubsequenceAtleastKchar(string s, int k)
{

    string ans="";
    int last=0,newlast=0;
    int start=0;
    // greedy approach
   
    for(char ch='z';ch>='a';ch--)
    {        int cnt=0;
          for( int i =0;i<s.size();i++)
          {
            if(ch==s[i])
            cnt++;
          }
          if(cnt>=k)
          {

        for(int i=last;i<s.size();i++)
        {
           if(ch==s[i])
          {
                ans+=ch;
                 newlast=i;
          }
         
        }
         last=newlast;
          }    
    }
   
    cout<<ans<<endl;

}
int main()
{
 string s= "banana";
 int k =2;
 findsubsequenceAtleastKchar(s,k);

    return 0;
}