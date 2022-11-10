#include<stdio.h>
int main(){
int arr[]={2,4,5,10,10,10,12,15};
int start=0;
int end= 7;
printf("Enter the value of element that you want to find first occurance :");
int ele;
scanf("%d",&ele);
int res;
while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==ele){
        res = mid;
      //  end = mid -1;                // this is for 1st occurance of the element
      start = mid +1;                  // this is for last occurance of the element

    }
    else if(arr[mid]>ele)
    end=mid-1;
    else
    start = mid+1;

}

// printf("1st occurance of the element %d is : %d\n",ele,res);
 printf("last occurance of the element %d is : %d\n",ele,res);
    return 0;
}