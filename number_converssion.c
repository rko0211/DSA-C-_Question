#include<stdio.h>
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
int base;
printf("Enter the base : ");
scanf("%d",&base);
int binAry_num[10];
 int i=0;
while(n){
  int rem= (n%base);
   n=n/base;
    binAry_num[i]=rem;
   

    i++;
}

for(int j = i-1;j>=0;j--){
    printf("%d\t",binAry_num[j]);
   
}
printf("\n");
    return 0;
}