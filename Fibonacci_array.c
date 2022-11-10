# include<stdio.h>
int fibonAci(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}
return fibonAci(n-1)+fibonAci(n-2);

}

int main(){
int givennumber;
scanf("%d",&givennumber);
int res =fibonAci(givennumber);
printf("%d\n",res);
}

// 0,1,1,2,3,5,8,13,....
// 0,1,2,3,4,5,6,7,8,...