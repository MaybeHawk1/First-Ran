#include <stdio.h>
#include "libs/firstran.h"

int main(void) {
  int ran = WasRan();

  if (ran == 1) {
    printf("Hello for the first time\n"); 
  } else if (ran == 0) {
    printf("Hello for the second time\n");
  } else {
    printf("I think something went wrong\n");
  }
}
