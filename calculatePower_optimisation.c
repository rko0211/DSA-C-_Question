#include<stdio.h>
int main(){
int base;
printf("Enter the value of base : ");
scanf("%d",&base);
int power ;
printf("Enter the value of power : ");
scanf("%d",&power);
int ans=1;
while(power>0){
    if(power&1==1){
        ans*=base;
    }
    base*=base;
    power=power>>1;
}
printf("THe answer is %d\n",ans);
    return 0;
}

// Time complexity of the program is O(log(base))