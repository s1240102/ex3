#include <stdio.h>
#include <stdlib.h>

int main() {

  int rollADie1, rollADie2, totalDice, key = 0, key2 = 0, end = 0;
  char s[10];
  printf("What is your name?\n");
  scanf("%s",s);
  printf("Hello, %s!\n",s);
<<<<<<< HEAD
=======

  printf("Rolling the dice...\n");

  
  rollADie1 = rand() % 6 + 1;  // in the range of 1 - 6
  rollADie2 = rand() % 6 + 1;  // in the range of 1 - 6

  printf("Die 1: %d\n", rollADie1);
  printf("Die 2: %d\n", rollADie2);

  totalDice = rollADie1 + rollADie2;
  printf("Total value: %d\n", totalDice);

  if(totalDice>7)
    printf("%s won\n",s);
  else
    printf("%s lost\n",s);
>>>>>>> refs/heads/experimental
    
  return 0;
}
