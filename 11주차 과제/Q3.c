#include <stdio.h>

struct Person
{
  int age;
};

void updateAge1(struct Person *p)
{
  p->age = 35;
  printf("%d ", p->age);
}

void UpdateAge2(struct Person p)
{
  p.age = 40;
  printf("%d ", p.age);
}

int main()
{
  struct Person people = { 30 };

  updateAge1(&people);
  printf("%d ", people.age);
  UpdateAge2(people);
  printf("%d ", people.age);

  return 0;
}

/*
출력 결과로 올바른 것은?
1. 30 30 40 40
2. 30 30 30 30
3. 35 35 40 40
4. 35 35 40 35
*/