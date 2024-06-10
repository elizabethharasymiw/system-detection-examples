#include <stdio.h>
#include <stdbool.h>

/*
 * Function to determine if the stack grows up or down
 * Returns true if the stack grew down and false if it grew up.
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

int main(){
  printf("The stack grew %s\n", stackGrewDown() ? "down" : "up");
  return 0;
}
