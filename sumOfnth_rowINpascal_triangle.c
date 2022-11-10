#include<stdio.h>
int main(){
// sum of element in pascale triangle int nth row;
int n;
printf("Enter the row number : ");
scanf("%d",&n);
printf("the sum of the element in %d th row is : %d\n",n,(1<<(n-1)));
    return 0;
}