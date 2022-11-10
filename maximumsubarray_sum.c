#include<stdio.h>
int main(){
int a[]={2,5,1,8,2,9,1};
int n=7;
int k;
printf("Enter subarray size: ");
scanf("%d",&k);
// int maxsum=0;
// for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<=i+k;j++){
// sum+=a[i];
//     }
//     maxsum = (maxsum>sum)?maxsum:sum;
// }
// printf("The maximum subarray sum is : %d\n",maxsum);
int sum =0;
int maxsum= -99999;
int i=0,j=0;
while(j<n){
sum+=a[j];               //calculation
if((j-i+1)<k){
    j++;
}
else if((j-i+1)==k){
    maxsum= (sum>maxsum)?sum:maxsum;
   sum -= a[i];
   i++;
   j++;
}
}
printf("Maximum sum of subarray of size %d is : %d\n",k,maxsum);
    return 0;
}