#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s, t, total = 0;

  srand(time(NULL));

  s = rand() % 6 + 1;
  t = rand() % 6 + 1;
 total = s + t;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d \n", s, t, total);

if(total > 7) printf("You won\n");
else printf("You lost\n");

  return 0;
}
