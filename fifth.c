// -o main.exe main.c sum.c

// this file use for learning C

#include <stdio.h>
#include "fifth.h"

int main (void){
  int value;
  value = sum (50, 100);
  printf("%d\n", value);
  return 0;
}
