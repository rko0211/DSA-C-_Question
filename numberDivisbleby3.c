#include<stdio.h>
int main(){
// moduler operator is not work with float,double value it only works with integer value
// If we want to check any value is integer or not then we can use Moduler operator 
int n;
printf("Enter the value : ");
scanf("%d",&n);
while(n%3==0){
    n=n/3;
}
if(n==1)
printf("Number is power of 3");
else{
    printf("NO\n");
}
printf("\n");
    return 0;
}