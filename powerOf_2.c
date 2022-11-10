#include<stdio.h>
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
// if(n & (n-1)){
//     printf("no\n");
// }
// else{
//     printf("yes\n");
// }                                 // tc-->O(1)

// ANother method
int count=0;
while(n){
if(n&1){
    count++;
}
n=n>>1;
}
if(count==1){
    printf("YES\n");

}
else
printf("NO\n");

    return 0;
}