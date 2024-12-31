#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "program.h"

// better to pass pointer to struct than copy struct into functions
static void updateWeight(Duck *d, float newWeight) {
  //(*d).weight = newWeight;
  d->weight = newWeight;
}

static Duck duplicateDuck(Duck d1) {
  return d1; // should be a new Duck since pass by value
}

int main() {
  Duck d1 = {2, 5.5, "white"};
  Date date = {1, DEC, 2000};
  d1.birthday = date;

  printf("Duck info: %d, %lf, %s\n", d1.age, d1.weight, d1.color);
  printf("Date info: %d, %d, %d\n", d1.birthday.month, d1.birthday.day, d1.birthday.year);

  updateWeight(&d1, 6.6);
  printf("Duck info: %d, %lf, %s\n", d1.age, d1.weight, d1.color);

  Duck d2 = duplicateDuck(d1);
  updateWeight(&d2, 100);
  d2.birthday.day = 2;
  printf("Duck 1 info: %d, %lf, %s\n", d1.age, d1.weight, d1.color);
  printf("Date info: %d, %d, %d\n", d1.birthday.month, d1.birthday.day, d1.birthday.year);

  printf("Duck 2 info: %d, %lf, %s\n", d2.age, d2.weight, d2.color);
  printf("Date info: %d, %d, %d\n", d2.birthday.month, d2.birthday.day, d2.birthday.year);

  Grade grade = {3.9};
  printf("grade gpa %lf\n", grade.gpa);

  grade.letter = 'A';
  printf("grade letter %c\n", grade.letter);

  grade.score = 95;
  printf("grade score %d\n", grade.letter);

  return EXIT_SUCCESS;
}