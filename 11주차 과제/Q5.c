#include <stdio.h>

struct Point()
{
  int x;
  int y;
};

void movePoint((1)) {
  p->x += 10;
  p->y += 20;
}

int main()
{
  struct Point p = {1, 2};
  movePoint(&p);
  return 0;
}

/*
(1)번에 들어갈 것으로 알맞은 것은?
1. Point *p
2. Point p
3. struct Point *p
4. struct Point p
*/