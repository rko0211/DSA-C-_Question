#include<bits/stdc++.h>
using namespace std;
void combinationSum(int ind,int arr[],vector<int>&ds,int target,vector<vector<int>>&ans ,int n)
{
   
    if(ind==n || target==0)
    {
      ans.push_back(ds);
      return ;
    }
    // Pick or take the element
    ds.push_back(arr[ind]);
    combinationSum(ind,arr,ds,target-arr[ind],ans,n);
    ds.pop_back();
    target+=arr[ind];
    // not pick or take the element
    combinationSum(ind+1,arr,ds,target,ans,n);
   for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
 int arr[]={2,3,6,7};
 int n = 4;
 vector<int>ds;
 int target =7;
 vector<vector<int>>ans;
combinationSum(0,arr,ds,target,ans,n);

    return 0;
}