#include <stdio.h>
#include <stdlib.h>

int cumulativeSum(int limit) {
  int result = 0;
  for (int i = 0; i <= limit; i++) {
    result += i;
  }

  return result;
}

int main() {
  int number = 12;
  int factor = 2;

  printf("number before multiply: %d\n", number);
  number *= factor;
  printf("number after multiply: %d\n", number);

  int sum = cumulativeSum(number);
  printf("cumulative sum of %d: %d", number, sum);

  return EXIT_SUCCESS;
}