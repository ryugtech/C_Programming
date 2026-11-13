#include <stdio.h>

enum Color
{
  Red,
  Yellow,
  Green
};

int main()
{
  enum Color color;

  color = 2;

  switch (color)
  {
    case Red:
      printf("Red ");
      color++;
      break;
    case Yellow:
      printf("Yellow ");
      color = 0;
      break;
    case Green:
      printf("Green ");
      color--;
      break;
    default:
      printf("Default ");
      break;
  }

  printf("%d", color);
}

/*
다음의 출력 결과로 올바른 것은?
1. Red 3
2. Yellow 0
3. Green 1
4. Default 2
*/