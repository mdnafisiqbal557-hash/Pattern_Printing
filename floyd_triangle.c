#include <stdio.h>
int main()
{
    int i, j, k, n = 5, c;
    c = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}