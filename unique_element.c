#include<stdio.h>
int main(){
int arr[]={2,3,2,3,4,6,4};
int unique_element=0;
for(int i=0;i<7;i++){
    unique_element = unique_element^arr[i];           // Bitwise operator followed associative property 
}
printf("The unique element is : %d\n",unique_element);
    return 0;
}