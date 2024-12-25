#include <stdio.h>

int main() {
  int integerNumber = 52;
  float floatingNumber = 1.55;
  double doubleNumber = 0.004;
  char string[] = "This is a string";
 
  /* These are technically 0, 1, 2, in value by default */
  enum Suit { SPADES, HEARTS, DAIMONDS, CLUBS = 50 }; 
  enum Suit suitVar1, suitVar2;
  suitVar1 = SPADES;
  suitVar2 = CLUBS;

  printf("integerNumber: %d\n", integerNumber);
  printf("floatingNumber %f\n", floatingNumber);
  printf("doubleNumber: %lf\n", doubleNumber);
  printf("string: %s\n", string);

  printf("enums (Spades, clubs): %d, %d\n", suitVar1, suitVar2);
}


