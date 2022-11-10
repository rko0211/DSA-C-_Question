#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int countSetbit = 0;
    while (n)
    {
        if (n & 1)
            countSetbit++;
        n = n >> 1;
    }
    printf("The number of set bit is : %d", countSetbit);
    printf("\n");
    return 0;
}