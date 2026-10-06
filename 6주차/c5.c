#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < 6 - i; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 6; i++)
    {
        int star;

        if (i <= 3)
            star = i;
        else
            star = 7 - i;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}