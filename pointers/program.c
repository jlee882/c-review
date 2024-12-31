#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void pointerExample1() {
  int x = 5;
  int y = 3;
  int *p = &x;
  int *q = &y;

  printf("====== Pointer 1 example ======\n");
  printf("integer x: %d, interger y: %d\n", x, y);
  printf("pointer p: %d, pointer q: %d, contain this in memory\n", *p, *q);
  printf("pointer p addr: %lu, pointer q addr: %lu\n", (uint64_t)p, (uint64_t)q);
}

void pointerExample2() {
  int x = 5;
  int y = 3;
  int *p = &x;
  int *q = &y;

  *q = 7; // assign 7 in memory location q, impacts y

  printf("====== Pointer 2 example ======\n");
  printf("integer x: %d, interger y: %d\n", x, y);
  printf("pointer p: %d, pointer q: %d, contain this in memory\n", *p, *q);
  printf("pointer p addr: %lu, pointer q addr: %lu\n", (uint64_t)p, (uint64_t)q);

}

void pointerExample3() {
  int x = 5;
  int y = 3;
  int *p = &x;
  int *q = &y;

  *q = *p; // takes dereferenced p (5) and update value in q memory to be 5

  printf("====== Pointer 3 example ======\n");
  printf("integer x: %d, interger y: %d\n", x, y);
  printf("pointer p: %d, pointer q: %d, contain this in memory\n", *p, *q);
  printf("pointer p addr: %lu, pointer q addr: %lu\n", (uint64_t)p, (uint64_t)q);

}

void pointerExample4() {
  int x = 5;
  int y = 3;
  int *p = &x;
  int *q = &y;

  p = q; // pointer p takes on q memory address (p and q point to same memory addr)

  printf("====== Pointer 4 example ======\n");
  printf("integer x: %d, interger y: %d\n", x, y);
  printf("pointer p: %d, pointer q: %d, contain this in memory\n", *p, *q);
  printf("pointer p addr: %lu, pointer q addr: %lu\n", (uint64_t)p, (uint64_t)q);

}

void pointerExample5() {
  int x = 5;
  const int y = 3;
  int *p = &x;
  const int *q = &y; // y is pointer to const int

  // *q = 2; // cannot alter value at memaddr
  q = p;

  printf("====== Pointer 5 example ======\n");
  printf("integer x: %d, interger y: %d\n", x, y);
  printf("pointer p: %d, pointer q: %d, contain this in memory\n", *p, *q);
  printf("pointer p addr: %lu, pointer q addr: %lu\n", (uint64_t)p, (uint64_t)q);
}

void pointerExample6() {
  // pointer arithmetic
  int ary[] = {0, 1, 2, 3, 4, 5};
  int *p;

  p = &ary[2]; // get address of value at index 2
  *p = 20;

  p = ary;
  *p = 111;

  printf("====== Pointer 6 example ======\n");
  for (int i = 0; i < 6; i++) {
    printf("%d ", ary[i]);
  }
  printf("\n");

  ary[4] = *(ary + 3); // assign value at index 3 to index 4
  *(ary + 3) = 80;
  ary[1] = &ary[4] - ary; // distance between mem addr

  for (int i = 0; i < 6; i++) {
    printf("%d ", ary[i]);
  }
  printf("\n");
  // 111 4 20 80 3 5
}

int main() {
  pointerExample1();
  pointerExample2();
  pointerExample3();
  pointerExample4();
  pointerExample5();
  pointerExample6();

  // const is like final in java, or like const in javascript

  const int number = 1;
  // number = 2; // raise issue
  printf("const value cannot change: %d\n", number);

  return EXIT_SUCCESS;
}