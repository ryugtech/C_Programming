#include <stdio.h>

int main()
{
    int arr[100];
    int input;
    int cnt = 0;

    for(int i = 0; i < 100; i++)
    {
        scanf("%d", &input);
        if(input == 0)
            break;
        
        arr[i] = input;
        cnt++;
    }

    printf("%d\n", cnt);

    for(int i = 0; i < cnt; i++)
    {
        printf("%d ", arr[i] % 2 == 0 ? arr[i] / 2 : arr[i] * 2);
    }
}