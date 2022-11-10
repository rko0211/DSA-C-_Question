#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s , int x)
{
    // Base case
    if(s.empty())
    {
        s.push(x);
        return;
    }
    // Recurssion call
    int temp =s.top();
    s.pop();
    solve(s,x);
    s.push(temp);
}
int main()
{
stack<int>s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
int x;
cout<<"Enter element that you want to insert at bottom :"<<endl;
cin>>x;
// insert element at bottom 
solve(s,x);
cout<<"After inserting the element stack lookes like : "<<endl;
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
    return 0;
}