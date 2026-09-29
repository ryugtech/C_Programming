#include <stdio.h>

int main()
{
    int dice;
    int count[] = {0, 0, 0, 0, 0, 0};
    // int count[6] = {0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &dice);
        count[dice-1] += 1;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d : %d\n", i+1, count[i]);
    }

    return 0;
}