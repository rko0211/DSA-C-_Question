#include<stdio.h>
int bsForfirstoccurance(int arr[],int start,int end,int ele, int n){
int res1;
while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==ele){
        res1 = mid;
       end = mid -1;                // this is for 1st occurance of the element

    }
    else if(arr[mid]>ele)
    end=mid-1;
    else
    start = mid+1;

}
return res1;

}

int bsForlastoccurance(int arr[],int start,int end,int ele, int n){
int res2;
while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==ele){
        res2 = mid;
       start =mid+1;                // this is for last occurance of the element

    }
    else if(arr[mid]>ele)
    end=mid-1;
    else
    start = mid+1;

}
return res2;

}

int main(){
int arr[]={2,4,5,10,10,10,12,15};
int n=8;  
  int start=0;
int end= 7;
printf("Enter the value of element that you want to find first occurance :");
int ele;
scanf("%d",&ele);
int res1= bsForfirstoccurance(arr,start,end,ele,n);
int res2= bsForlastoccurance(arr,start,end,ele,n);
 printf("1st occurance of the element %d is : %d\n",ele,res1);
 printf("last occurance of the element %d is : %d\n",ele,res2);
 printf("Number of similer %d element present in the given sorted array is :%d\n",ele,(res2-res1+1));
    return 0;
}