#include <stdio.h>

/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

void diamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *
*/

void nonDiamond(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= 2 * i - 2; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n-1 ; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= 2 * i - 2; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    diamond(n);
    printf("\n");
    nonDiamond(n);
}