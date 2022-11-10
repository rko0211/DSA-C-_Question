#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the arrray :");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("THe sum of all the array element is : %d\n", sum);

    return 0;
}
