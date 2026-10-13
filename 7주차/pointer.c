#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;

    printf("%d\n", (*p)++); // 10
    printf("%d\n", a); // 11

    a = 10;

    printf("%d\n", (*p)+1); // 11
    printf("%d\n", a); // 10

    a = 10;

    printf("%d\n", *p+=1); // 11
    printf("%d\n", a); // 11

    a = 10;

    printf("%d\n", (*p)+=1); // 11
    printf("%d\n", a); // 11
}