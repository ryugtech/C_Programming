#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = 2147483647;
        int c = i;

        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                c = j;
            }
        }

        arr[c] = arr[i];
        arr[i] = min;
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

    SelectionSort(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
}