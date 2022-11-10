/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fibonacci=0;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
     if(i==0 || i==1)
     a[i]=i;
     else 
     a[i] = a[i-1]+a[i-2];
    
    }
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
*/

// WHILE LOOP

/*#include<stdio.h>
int main()
{

  int n;
    scanf("%d",&n);
    int fibonacci=0;
    int a[n+1];
    int i=0;
   while(i<n)
   {
  if(i==0 || i==1)
     a[i]=i;
     else 
     a[i] = a[i-1]+a[i-2];
i++;

   }
   for(int i=0;i<n;i++)
   printf("%d\t",a[i]);
    return 0;
}
*/

// DO WHILE LOOP
#include<stdio.h>
int main()
{
 int n;
    scanf("%d",&n);
    int fibonacci=0;
    int a[n+1];
    int i=0;
 do{
  if(i==0 || i==1)
     a[i]=i;
     else 
     a[i] = a[i-1]+a[i-2];
i++;
 }while(i<n);
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
    return 0;
}