#include<stdio.h>
int peakElement(int a[],int n, int low, int end){
    while(low<=end){
        int mid=low+(end-low)/2;
        if(mid>0 && mid<(n-1)){
            if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
                return mid;
            }
            else if(a[mid]<a[mid+1]){
                low=mid+1;
            }
            else if(a[mid]<a[mid-1])
            end= mid-1;
        }
        else if(mid==0 ){
              if( a[0]>a[1]){
            return 0;
        }
        else{
            return 1;
        }
        }
      
        else if(mid==n-1){
            if(a[n-1]>a[n-2]){
                return n-1;
            }
            else
            return n-2;
        }
       
    }
}
int main(){
// peak element are those element which is larger than it's two neighbour
// THere can be many peak element in the array

int a[]={5,10,20,15};
int n=4;
int low=0;int end=n-1;
int res= peakElement(a,n,low,end);
printf("Index of the peak element is :%d\n",res);
    return 0;
}