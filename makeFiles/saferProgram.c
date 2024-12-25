#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readInputToBuffer(char buffer[], int size) {
  if (fgets(buffer, size, stdin) != NULL) {
    int length = strlen(buffer);
    if (buffer[length - 1] == '\n') {
      buffer[length - 1] = '\0';
    }
  } else {
    printf("Invalid input recieved");
  }

  /*clear buffer so that extra characters do not carry over to next input reading*/
  // buggy have to hit enter twice
  while (getchar() != '\n');
}


int main() {
  char username[10];
  char password[10];
  int pin;

  printf("Enter username: ");
  readInputToBuffer(username, 10);

  printf("Enter password: ");
  readInputToBuffer(password, 10);
  printf("Enter pin: ");
  scanf("%d", &pin);

  printf("--------------------------------\n");
  printf("Recieved %s, %s, %d\n", username, password, pin);
  printf("Logged in\n");

  return EXIT_SUCCESS;
}