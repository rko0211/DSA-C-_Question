#include<stdio.h>
int maxconsecutive(int n){
    int len=0;
    while(n){
    n = n & (n<<1);
    len++;
    }
    return len;
}
int main(){
int n;
scanf("%d",&n);
int res= maxconsecutive(n);
printf("%d\n",res);
    return 0;
}