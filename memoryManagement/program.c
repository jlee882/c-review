#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "program.h"

static char* createColor(int size) {
  char *color;

  color = (char *) malloc(size * sizeof(char));

  if (color == NULL) {
    printf("Memory allocation failed");
  }
  
  return color;
} 

int main() {
  Duck * duck_ary = calloc(2, sizeof(Duck));
  if (duck_ary == NULL) {
    printf("could not allocate duck ary");
    return EXIT_FAILURE;
  }

  Duck * d1 = &duck_ary[0];
  d1->age = 1;
  d1->weight = 5.5;
  char * color = (char *) createColor(6);
  d1->color = color;
  strncpy(color, "white", 6*sizeof(char));
  printf("Duck info %d, %lf, %s\n", d1->age, d1->weight, d1->color);

  Duck * d2 = &duck_ary[1];
  d2->age = 1;
  d2->weight = 5.6;
  color = (char *) createColor(4);
  d2->color = color;
  strncpy(color, "tan", 4*sizeof(char));
  printf("Duck 1 info %d, %lf, %s\n", d1->age, d1->weight, d1->color);
  printf("Duck 2 info %d, %lf, %s\n", d2->age, d2->weight, d2->color);


  free(d1->color);
  free(d2->color);
  free(duck_ary);
  
  return EXIT_SUCCESS;
}