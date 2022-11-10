#include <stdio.h>
int calculatepower(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return n * calculatepower(n, p - 1);
}
int main()
{
    // recursion method

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    int p;
    scanf("%d", &p);
    int res = calculatepower(n, p);
    printf("%d to the power %d is : %d\n", n, p, res);
    return 0;
}