#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s)
{
    // Base case

}
int main()
{
stack<int>s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

// insert element at bottom 
solve(s);
cout<<"After reversing the elements stack lookes like : "<<endl;
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
    return 0;
}