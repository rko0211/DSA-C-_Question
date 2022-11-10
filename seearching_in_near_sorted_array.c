#include<stdio.h>
int searchingInnearlySortedarray(int arr[],int n,int start, int end,int ele){
while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==ele)
    return mid;
    else if((mid-1)>=start && arr[mid-1]==ele)
    return mid-1;
     else if((mid+1)<=end && arr[mid+1]==ele)
    return mid+1;
    else if(arr[mid]>ele)
    end=mid-2;
    else
    start = mid+2;
}
}
int main(){
int arr[]={5,10,30,20,40};
int n=5;
int start=0;
int end= (n-1);
int ele;
printf("Enter the element :");
scanf("%d",&ele);
int res = searchingInnearlySortedarray(arr,n,start,end,ele);
printf("Index of the given element is : %d\n",res);
    return 0;
}