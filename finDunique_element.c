#include<stdio.h>
int findUniqueelement(int arr[],int size){
int unique=0;
for(int i=0;i<size;i++){
    unique^=arr[i];                   // a^0 == a  but a^1== ~a
}
return unique;
}
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("The array elements are : ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

int res =findUniqueelement(a,n);
printf("The unique element is %d",res);
printf("\n");
    return 0;
}