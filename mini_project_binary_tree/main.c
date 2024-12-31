#include <stdio.h>
#include <stdlib.h>
#include "tree_functions.h"

int main(void) {
  printf("-----------------Start of tree demo-------------\n");
  Node *root = initialize(5);
  insertValue(root, 6);
  insertValue(root, 4);
  insertValue(root, 4); // does nothing
  insertValue(root, 10);
  insertValue(root, 3);
  insertValue(root, 5);
  insertValue(root, 7);
  printTree(root);

  printf("Find value 4: %d\n", findValue(root, 4));
  printf("Find value 20: %d\n", findValue(root, 20));
  printf("Find value 5: %d\n", findValue(root, 5));
  root = deleteValue(root, 10);
  printTree(root);
  root = deleteValue(root, 5);
  printTree(root);


  freeAll(root);

  return EXIT_SUCCESS;
}