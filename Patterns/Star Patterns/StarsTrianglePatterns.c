#include <stdio.h>
#include <stdlib.h>
//1.Half Pyramid of *
/*
    *
    * *
    * * *
    * * * *
    * * * * *
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

//2.Reverse or Mirror Half Pyramid of *
/*
            *
          * *
        * * *
      * * * *
    * * * * *
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
    * * * * *
    * * * *
    * * *
    * *
    *
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
  int n, c;
  while (1)
  {
    printf("Enter your choice : \n1.Half Pyramid of *'s\n*\n* *\n* * *\n* * * *\n* * * * *\n2.Reverse or Mirror Half Pyramid of *'s\n        *\n      * *\n    * * *\n  * * * *\n* * * * *\n3.Inverted half pyramid of *'s\n* * * * *\n* * * *\n* * *\n* *\n*\n4.Reverse or Mirror Inverted Half Pyramid of *'s\n* * * * *\n  * * * *\n    * * *\n      * *\n        *\n5.Exit.\nEnter an value : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
      printf("Enter the size of Half Pyramid : ");
      scanf("%d", &n);
      halfPyramid(n);
      break;
    case 2:
      printf("Enter the size of Half Pyramid : ");
      scanf("%d", &n);
      reverseHalfPyramid(n);
      break;
    case 3:
      printf("Enter the size of Half Pyramid : ");
      scanf("%d", &n);
      invertedHalfPyramid(n);
      break;
    case 4:
      printf("Enter the size of Half Pyramid : ");
      scanf("%d", &n);
      reverseInvertedHalfPyramid(n);
      break;
    case 5:
      exit(0);
    default:
      printf("Enter a correct value.");
      break;
    }
  }
}