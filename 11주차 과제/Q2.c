#include <stdio.h>

struct Person
{
  char name[50];
};

int main() {
  struct Person people;
  struct Person *p;

  p = &people;

  printf("%s", (1));
}

/*
(1)번에 들어갈 것으로 알맞은 것은?
1. p->name
2. p.name
3. p=>name
4. *(p->name)
*/