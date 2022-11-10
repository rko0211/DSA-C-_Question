#include<iostream>
using namespace std;
int main()
{

string s="    Hello Geeks . Welcome   to  GeeksforGeeks   .    ";
int i=0,j=0;
int n = s.size();
for(int i =0;i<n;i++)
{
    if(!(s[i]==' ' && s[i+1]==' '))
    {
        s[j]=s[i];
        j++;
    }
}
cout<<s;
    return 0;
}