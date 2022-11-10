#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 int t;
 cin>>t;
 while (t--)
 {
    /* code */
ll a,b,c;
cin>>a>>b>>c;
if(b<c)
{
    if((a-1)<(2*(c-b)+(b-1)))
    {
        cout<<"1"<<endl;
    }
    else if((a-1)>(2*(c-b)+(b-1))) {  cout<<"2"<<endl;}
    else if((a-1)==(2*(c-b)+(b-1))) { cout<<"3"<<endl;}
}
else if(b>c)
{
    if((a-1)<((b-c)+(c-1))) cout<<"1"<<endl;
    else if((a-1)>((b-c)+(c-1))) cout<<"2"<<endl;
    else if((a-1)==((b-c)+(c-1))) cout<<"3"<<endl;
}


 }
 

    return 0;
}