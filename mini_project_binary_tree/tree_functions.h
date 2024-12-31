typedef struct node {
  int value;
  struct node* left;
  struct node* right;
} Node;


Node* initialize(int value);

void insertValue(Node* root, int value);

int findValue(Node* root, int value);

Node* deleteValue(Node* root, int value);

void freeAll(Node* root);

void printTree(Node* root);