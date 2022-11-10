#include<stdio.h>
int kthLsb(int n,int k ){
int x= 1<<(k-1);
return n&x;
}
int main(){
    int n,k;
printf("Enter the number : " );
scanf("%d",&n);
printf("Enter the possition : ");
scanf("%d",&k);
int res = kthLsb(n,k);
if(res!=0)
printf("1\n");
else{
    printf("0\n");
}
    return 0;
}