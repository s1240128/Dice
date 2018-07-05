#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s, t, total = 0;
  char name[256];

  srand(time(NULL));

printf("What is your name?\n> ");
scanf("%s", name);
printf("Hello, %s!\n\n", name);

  s = rand() % 6 + 1;
  t = rand() % 6 + 1;
 total = s + t;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d \n", s, t, total);

  return 0;
}
