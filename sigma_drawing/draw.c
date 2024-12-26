#include <stdio.h>
#include "draw.h"

void border(int size) {
  for (int i = 0; i < size; i++) {
    printf("x");
  }
  printf("\n");
}

void middle(int size) {
  int padding = 1;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < padding; j++) {
      printf(" ");
    }
    printf("x\n");
    padding += 1;
  }

  padding = size - 1;
  for (int i = 1; i < size; i++) {
    for (int j = 0; j < padding; j++) {
      printf(" ");
    }
    printf("x\n");
    padding -= 1;
  }
}