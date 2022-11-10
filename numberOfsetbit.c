#include <stdio.h>
int main()
{
    printf("Enter the value of the number : ");
    int x;
    scanf("%d", &x);
    // Here we have to find number of set bit present in a given number x;
    int count = 0;
    int tem = x;
    while (x != 0)
    {
        int rightmostsetbitMask = x & -x;
        x = x - rightmostsetbitMask;
        count++;
    }
    printf("Number of set bit present in the given number %d is %d \n", tem, count);
    return 0;
}