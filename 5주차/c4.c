#include <stdio.h>

int main()
{
    int number = 0;
    int result = 1;
    int count[10] = {0};

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &number);
        result *= number;
    }

    while(result != 0)
    {
        count[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}