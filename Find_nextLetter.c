#include<stdio.h>
char findNextletter(char ch[],int n, int st,int end, char ele){
    char res;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(ch[mid]==ele){
            st=mid+1;
        }
        else if(ch[mid]>ele){
              res=ch[mid];
            end=mid-1;
        }
        else
        st=mid+1;
    }
    return res;
}
int main(){
char ch[]={'a','c','f','h'};
int n=4;
int st=0;
int end=n-1;
char key;
printf("Enter key letter :");
scanf("%c",&key);
printf("%d\n",key);
char res =findNextletter(ch,n,st,end,key);
printf("The next letter of %c  key in the array is : %c\n",key,res);
    return 0;
}