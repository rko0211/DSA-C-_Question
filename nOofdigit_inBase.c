#include<stdio.h>
#include<math.h>

int nOofdigit(int x, int y){
    int ans = (log(x))/(log(y));
    return ans;
}
int main(){

// Find no. of digits in a number a with base b;   log(a)/log(b)
int a,b;

printf("Enter the number : ");
scanf("%d",&a);
printf("Enter the base : ");
scanf("%d",&b);
int res = nOofdigit(a,b);
printf("The number of digit is : %d",res);
    return 0;
}