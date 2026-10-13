#include <stdio.h>

#define MAX_STUDENTS 50

void BubbleSort(int* p, int n){
    int temp;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++)
        {
            if (*(p+i) > *(p+i+1))
            {
                temp = *(p+1);
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n > MAX_STUDENTS)
    {
        printf("학생 수의 입력 가능 범위 초과");
        return 0;
    }

    int student[n];
    int* p = student;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &student[i]);
    }

    BubbleSort(p, n);

    printf("최고성적: %d\n", student[0]);
    printf("최하 성적: %d", student[n-1]);

}