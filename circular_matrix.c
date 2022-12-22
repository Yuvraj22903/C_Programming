#include <stdio.h>
int main()
{
    int m, i, j, i1 = 0, i2, j1 = 0, j2, n, c = 0;
    printf("Enter the number : ");
    scanf("%d", &m);
    n = m;
    int a[m][n];
    i2 = (m - 1);
    j2 = (n - 1);
    while (i1 <= i2)
    {
        if (i1 != i2 && j1 != j2)
        {
            goto ab;
        }
        else
        {
            goto bc;
        }
    ab:
        for (j = j1; j <= j2; j++) //1
        {
            c++;
            a[i1][j] = c;
        }
    bc:
        for (i = (i1 + 1); i <= (i2 - 1); i++) // 2
        {
            c++;
            a[i][j2] = c;
        }
        for (j = j2; j >= j1; j--) // 3
        {
            c++;
            a[i2][j] = c;
        }
        for (i = (i2 - 1); i >= (i1 + 1); i--) // 4
        {
            c++;
            a[i][j1] = c;
        }
        i1++;
        i2--;
        j1++;
        j2--;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}