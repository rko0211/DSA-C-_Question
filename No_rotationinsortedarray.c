#include<stdio.h>
int indexOfminimumelement(int arr[],int n, int start, int end)
{
    while(start<=end){
    int mid= start+(end -start)/2;
    int next = (mid+1)%n;
    int prev = (mid+n-1)%n;
    if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
    return mid;
else if(arr[start]<=arr[mid]){
    start=mid+1;
}
else if(arr[mid]<=arr[end]){
    end=mid-1;
}
}
}
int main(){
int n;
printf("Enter the number of element :");
scanf("%d",&n);
int arr[n];
printf("Enter array element in sorted order :");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int start =0;int end=(n-1);
int res = indexOfminimumelement(arr,n,start,end);

    printf("NUmber of rotation of the sorted array = index of the minimum element is :  %d\n",res);

    return 0;
}