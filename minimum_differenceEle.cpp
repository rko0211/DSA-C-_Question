#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a[]={4,6,10};
int n=3;
int key;
// printf("Enter key value : ");
cout<<"Enter key value :";
// scanf("%d",&key);
cin>>key;
for(int i=0;i<n;i++){
    a[i]=abs(a[i]-key);
}
int res= (a[n-1]+key);
// printf("Minimum difference we can achieve by substructing the key with element is : %d\n",res);
cout<<res<<endl;
// if we use binary search and key value is not present in the given sorted array then start and end pointer always point it's neighbour
// in which place key should be present there
    return 0;
}