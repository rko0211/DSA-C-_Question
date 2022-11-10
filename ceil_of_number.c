#include<stdio.h>
int ceilOfvalue(int a[],int n,int low, int end, int ele){
    int res;
while(low<=end){
    int mid= low+(end-low)/2;
    if(a[mid]==ele)
    return a[mid];
    else if(a[mid]>ele){
        res = a[mid];
        end=mid-1;
    }
    else
    low= mid+1;
}
return res;
}
// We are told to find the ceil(Just smallest element greater than key) of a number in a sorted array
int main(){
int arr[]={1,2,3,4,8,10,10,12,29};
int n=9;
int key;
printf("Enter the key :");
scanf("%d",&key);
int low =0;
int end=n-1;
int res= ceilOfvalue(arr,n,low,end,key);
printf("Ceil of %d key is : %d\n",key,res);
    return 0;
}