#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 8

int main(void) {
  int i;
  char password[PASSWORD_LEN + 1];

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LEN; i++) {
    password[i] = 'A' + (rand() % 26);
  }
  password[PASSWORD_LEN] = '\0';

  printf("%s\n", password);

  return 0;
}
