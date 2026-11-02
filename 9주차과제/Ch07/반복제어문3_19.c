#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < (2 * n - 1); i++)
    {
        int sharp = i < n ? i + 1 : (2 * n - 1) - i;
        int space = i < n ? 0 : i - n + 1;

        for(int j = 0; j < space; j++)
        {
            printf("  ");
        }
        for(int j = 0; j < sharp; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}