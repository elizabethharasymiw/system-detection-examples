#include <stdio.h>
#include <stdbool.h>

/*
 * @brief Function to determine if the stack grows up or down
 * @apiNote This has issue with the optimizer potentailly not declaring
 *          variables in the order we thought they were.
 * @return boolean true if the stack grew down and false if it grew up
 */
bool stackGrewDown(){
  volatile int x = 0;
  volatile int y = 0;

  printf("x: %p\n", &x);
  printf("y: %p\n", &y);

  if (&x < &y){
    return true;
  }
  return false;
}

/*
 * @brief Function to determine if the stack grows up or down
 * @apiNote Avoids the issue with the optimizer in the first version of
            this function.
 * @param other Takes an int pointer which will be used to see the
 *        address of a variable between two stack frames
 * @return boolean true if the stack grew down and false if it grew up
 */
bool stackGrewDownTwo(int* other){
  int x;

  if(!other){
    return stackGrewDownTwo(&x);
  }else{
   printf("x1: %p\n", other);
   printf("x2: %p\n", &x);
   return other < &x;
  }
}

int main(){
  printf("\n");
  printf("Version 1:\n");
  printf("The stack grew %s\n", stackGrewDown() ? "up" : "down");
  printf("\n");
  printf("Version 2:\n");
  printf("The stack grew %s\n", stackGrewDownTwo(NULL) ? "up" : "down");
  return 0;
}
