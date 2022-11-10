#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Bubble sort technique

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int tem = a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    printf("The sorted array elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}