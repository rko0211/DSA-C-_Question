#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s ,int size ,int count)
{
    // Base case
  
    if(count==size/2)
    {
        s.pop();
       return;
    }
    int tem =s.top();
    s.pop();
    solve(s,5,count+1);
    s.push(tem);
}
int main()
{
stack<int>s;
// int n;
// cout<<"Enter number of stack element :";
// cin>>n;
// cout<<"Enter the stack element :";
// for(int i=0;i<n;i++)
// {
//    cin>>s[i];
// }
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
cout<<"Stack element's are : ";

int count=0;
// Delete middle element 
solve(s,5,count);
cout<<"After deleating the middle element stack lookes like : "<<endl;
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
    return 0;
}