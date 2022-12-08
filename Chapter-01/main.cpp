#include <cstdio>

int absolute_value(int x) {
  return x < 0 ? x * -1 : x;
}

int main() {
  printf("Hello, world!");
  int the_answer = 42;
  int lucky_number = the_answer / 6;

  int x = 0;
  if (x > 0) printf("Positive.");
  else if (x < 0) printf("Negative.");
  else printf("Zero.");


//  return the_answer * lucky_number;
  int my_num = 10;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
