#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {

            if (arr[j-1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    BubbleSort(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
}