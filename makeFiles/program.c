#include <stdio.h>
#include <stdlib.h>

int main() {
  char username[10];
  char password[10];
  int pin;

  /* scanf uses address */
  /* watch out we can do stack smashing by entering inputs longer than intended */

  printf("Enter username: ");
  scanf("%s", username);
  printf("Enter password: ");
  scanf("%s", password);
  printf("Enter pin: ");
  scanf("%d", &pin);

  printf("--------------------------------\n");
  printf("Recieved %s, %s, %d\n", username, password, pin);
  printf("Logged in\n");

}