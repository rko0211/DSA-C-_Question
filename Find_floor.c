#include<stdio.h>
int findFloor(int a[],int n, int start,int end,int ele)
{
    int res;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(a[mid]==ele)
        return a[mid];
        else if(a[mid]<ele){
            res = a[mid];
            start=mid+1;
        }
        else
          end=mid-1;
    }
    return res;
}
int main(){
int arr[]={1,2,3,4,8,10,10,12,29};
int n=9;
int start=0;
int end=n-1;
int ele;
printf("Enter the element : ");
scanf("%d",&ele);
int res= findFloor(arr,n,start,end,ele);
printf("The floor value of the element %d is : %d\n",ele,res);
    return 0;
}