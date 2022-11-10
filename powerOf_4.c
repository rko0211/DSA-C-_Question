#include<stdio.h>
int isPowerOf4(int x)
{
    int count=0;
    while(x>1){
if(x&1){
    count++;
}
x>>=1;
    }
    return (count%2==0)?1:0;
}
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
// int rem;
// while(n!=1){
//     rem = n%4;
//     n=n/4;
//     if(rem>0){
//         printf("NO\n");
//         break;
//     }                                                 //T.C --> O(logn)
// }
// if(rem==0){
//     printf("YES\n");
// }

// if number of set bit in any value is 1 then those value is a power of 2. if set bit --> 2 --> power of 4;
if(isPowerOf4(n)){
    printf("Yes\n");
}
else{
    printf("No\n");
}
    return 0;
}