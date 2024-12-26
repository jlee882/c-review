#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NONE = 0,
  LOW = 5,
  MEDIUM = 9,
  HIGH = 12,
  MAXIMUM = 20
} Level;

int main() {
  printf("Spaceship thrust\n");
  Level currThrust = NONE;
  if (currThrust == NONE) {
    printf("Ready to go level\n");
  }

  currThrust = MAXIMUM;
  if (currThrust == MAXIMUM) {
    printf("Ready to take off level\n");
  }

  currThrust = MEDIUM;
  if (currThrust == MEDIUM) {
    printf("Entering ionsphere\n");
  }

  currThrust = LOW;
  if (currThrust == LOW) {
    printf("Traveling to deep space\n");
  }

  return EXIT_SUCCESS;
}
