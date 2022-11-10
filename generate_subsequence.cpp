#include<bits/stdc++.h>
using namespace std;
void generatesubsequence(int ind, int a[], vector<int>&ds, int n)
{
    if(ind ==n)
    {
        for(auto &it:ds)
        cout<<it<<" ";
        cout<<endl;
        return ;
    }
    ds.push_back(a[ind]);
    generatesubsequence(ind+1,a,ds,n);
    ds.pop_back();
    generatesubsequence(ind+1,a,ds,n);
}
int main()
{
    int a[]={1,2,3};
    int n =3;
    vector<int>ds;
    generatesubsequence(0,a,ds,n);
}