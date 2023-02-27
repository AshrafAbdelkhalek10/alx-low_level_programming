#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 8

int main(void) {
  int i;
  char password[PASSWORD_LEN + 1];

  // Seed the random number generator with the current system time
  srand(time(NULL));

  // Generate the random 8-character password
  for (i = 0; i < PASSWORD_LEN; i++) {
    password[i] = 'A' + (rand() % 26);
  }
  password[PASSWORD_LEN] = '\0';

  printf("Generated Password: %s\n", password);

  return 0;
}
