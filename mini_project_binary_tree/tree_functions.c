#include "tree_functions.h"
#include <stdlib.h>
#include <stdio.h>

Node* initialize(int value) {
  Node * root = (Node *) malloc(sizeof(Node));
  if (root == NULL) {
    printf("Node initialization failed\n");
  }

  root -> value = value;
  root -> left = NULL;
  root -> right = NULL;

  return root;
}

void freeAll(Node* root) {
  // recursive case
  if (root != NULL) {
    freeAll(root->left);
    freeAll(root->right);

    free(root);
  }
}

static void printTreeAux(Node * root) {
  if (root != NULL) {
    printTreeAux(root -> left);
    printf("%d ", root->value);
    printTreeAux(root->right);
  }
}

void printTree(Node * root) {
  printf("Tree contents: ");
  printTreeAux(root);
  printf("\n");
}

static void insertValueAux(Node* root, int value, Node* parent, int isLeft) {
  if (root == NULL) {
    Node* new_child = initialize(value);
    if (isLeft) {
      parent -> left = new_child;
    } else {
      parent -> right = new_child;
    }
  } else if (root->value == value) {
    return;
  } else if (root->value > value) {
    insertValueAux(root->left, value, root, 1);
  } else {
    insertValueAux(root->right, value, root, 0);
  }
}

void insertValue(Node* root, int value) {
  insertValueAux(root, value, NULL, 1);
}

int findValue(Node* root, int value) {
  if (root == NULL) {
    return -1; //not found
  } else if (root->value == value) {
    return root->value;
  } else if (root->value > value) {
    return findValue(root->left, value);
  }

  return findValue(root->right, value);
};

static int findRightMostLeaf(Node *root) {
  if (root -> right == NULL) {
    return root->value;
  } else {
    return findRightMostLeaf(root->right);
  }
}

Node* deleteValue(Node* root, int value) {
  if (root == NULL) {
    return NULL; //not found
  } else if (root->value == value) {
    if (root->left == NULL && root->right == NULL) {
      free(root);
      return NULL;
    } else if (root->left != NULL && root->right != NULL) {
      int new_value = findRightMostLeaf(root->left);
      root->value = new_value;
      root->left = deleteValue(root->left, new_value);
    } else if (root->left == NULL) {
      Node* replacer = root -> right;
      free(root);
      return replacer;
    } else {
      Node* replacer = root -> left;
      free(root);
      return replacer;
    }
  } else if (root->value > value) {
    root->left = deleteValue(root->left, value);
  } else {
    root->right = deleteValue(root->right, value); 
  } 

  return root;
}
