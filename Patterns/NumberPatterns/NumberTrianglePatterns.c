#include <stdio.h>
#include <stdlib.h>
//1.Half Pyramid of *
/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/

void halfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

//0's and 1's pattern

void zeroesAndOnesPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}

//2.Reverse or Mirror Half Pyramid of *
/*
            1
          2 2
        3 3 3
      4 4 4 4
    5 5 5 5 5
*/
void reverseHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    //or

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//3.Inverted half pyramid of *
/*
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4
    5
*/
void invertedHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    //or

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//4.Reverse or Mirror Inverted Half Pyramid of *
/*
    * * * * *
      * * * *
        * * *
          * *
            *
*/
void reverseInvertedHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    //or

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    //or

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    //   int n, c;
    zeroesAndOnesPattern(5);
}