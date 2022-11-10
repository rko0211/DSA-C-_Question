#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;
int main()
{
 stack<int>s;
 s.push(3);
 s.push(2);
 
// print the stack
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

cout<<s.empty()<<endl;
    return 0;
}