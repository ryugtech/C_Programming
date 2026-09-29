#include <stdio.h>

int main()
{
    int score = 0;
    int scores[11] = {0};

    while(true)
    {
        scanf("%d", &score);

        if(score == 0)
            break;

        scores[score / 10]++;
    }

    for (int i = 10; i >= 0; i--)
    {
        if (scores[i] != 0)
            printf("%d : %d person\n", i * 10, scores[i]);
    }

    return 0;
}