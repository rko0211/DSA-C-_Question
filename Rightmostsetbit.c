#include<stdio.h>
int posOffirstsetbit(int x){
    int count =1;
while(x!=0){
    if(x&1)
    return count;
    else
    count++;
    x=x>>1;
}

}
int main(){
printf("Enter the number :");
int n;
scanf("%d",&n);
int rigTmostsetbit = (n & (-n));
printf("The value of right most set bit mask is %d\n",rigTmostsetbit);
int index=0;
int count = posOffirstsetbit(rigTmostsetbit);
printf("LSB present in the number %d is at %d possition ",n,count);
printf("\n");
    return 0;
}