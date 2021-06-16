#include <stdio.h>
#include <stdlib.h>
/*
    *
  * * *
* * * * *
*/
void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*
* * * * *
  * * *
    *  
*/
void invertedPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
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
*/
void nonPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
*/

void nonInvertedPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the size of the Pyramid: ");
    scanf("%d", &n);
    nonInvertedPyramid(n);
}