#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Generate a random capitalized letter
 * A-Z equal 65-90 in ASCII code
 */
char randomChar(){
  int  myRandomInt = (rand() % 25) + 65;
  char myRandomChar = (char)myRandomInt;
  return myRandomChar;
}

// TODO
//int getCacheLineSize(){
//  return 0;
//}

int main(){

  srand(time(0)); // Seed random number generator with current time

  printf("Hello, World!\n");

  for(int i = 0; i < 100; i++){
    printf("%c", randomChar());
  }

  //printf("The size of the current cache line is: %d", getCacheLineSize());

  return 0;
}
