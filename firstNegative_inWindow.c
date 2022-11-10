#include<stdio.h>
int main(){
int a[]={12,-1,-7,8,-15,30,16,28};
int size =8;
int k;
printf("Enter window size : ");
scanf("%d",&k);
int i=0;int j=0;
int x= size-k+1;                                    // number of output
int b[x];
while(j<size){
    if(a[j]<0)
    b[j]=a[j];                                   // Calculation
    if((j-i+1)<k)
    j++;                                           // Window size
    else if((j-i+1)==k){
        
    }
}
    return 0;
}