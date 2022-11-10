#include<iostream>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
ll a,b,c,d;
cin>>a>>b>>c>>d;
ll tem1=a*d;
ll tem2 = b*c;
if(tem1==tem2)
cout<<0<<endl;

else if(tem1 ==0||tem2 ==0)
cout<<1<<endl;
else if(tem1%tem2==0 || tem2%tem1==0)
cout<<1<<endl;
else 
cout<<2<<endl;

}


    return 0;
}