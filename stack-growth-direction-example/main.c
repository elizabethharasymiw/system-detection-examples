#include <stdio.h>
#include <stdbool.h>

/*
 * @brief Function to determine if the stack grows up or down
 * @return boolean true if the stack grew down and false if it grew up
 */
bool stackGrewDown(){
  volatile int x = 0;
  volatile int y = 0;
  long long xAddress = (long long)&x;
  long long yAddress = (long long)&y;

  printf("x: %lld\n", xAddress);
  printf("y: %lld\n", yAddress);

  if (xAddress > yAddress){
    return false;
  }
  return true;
}

/*
 * @brief Function to determine if the stack grows up or down
 * @param other Takes an int pointer which will be used to see the
 *        address of a variable between two stack frames
 * @return boolean true if the stack grew down and false if it grew up
 */
bool stackGrewDownTwo(int* other){
  int x;

  if(!other){
    return stackGrewDownTwo(&x);
  }else{
   return &x > other;
  }
}

int main(){
  printf("\n");
  printf("Version 1:\n");
  printf("The stack grew %s\n", stackGrewDown() ? "down" : "up");
  printf("\n");
  printf("Version 2:\n");
  printf("The stack grew %s\n", stackGrewDownTwo(NULL) ? "down" : "up");
  return 0;
}
