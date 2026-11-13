#include <stdio.h>

int main()
{
  char c1[] = "Hello";
  char c2[] = "World";
  
  char *p = c1;

  c1[1] = 'A';

  printf("%s ", c1);
  printf("%s ", c2);
  printf("%s", p);
}

/*
출력 결과로 올바른 것은?
1. Hello World Hello
2. Hello World HAllo
3. HAllo World Hello
4. HAllo World HAllo 
*/