#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == j)
                arr[i][j] = 1;
            else if (j <= i)
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            else
                arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        printf(" ");
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
            }
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}