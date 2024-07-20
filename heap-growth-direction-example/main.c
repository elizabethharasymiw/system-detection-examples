#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printHeapExample(){
  int* z;
  int* x;
  int* y;

  printf("Before allocation on heap:\n");
  printf(" z: %p\n", z);
  printf(" x: %p\n", x);
  printf(" y: %p\n", y);
  printf("\n");

  x = (int*)malloc(sizeof(int) * 10);
  y = (int*)malloc(sizeof(int) * 10);

  printf("After allocation on heap:\n");
  printf(" z: %p\n", z);
  printf("x0: %p\n", &x[0]);
  printf("x2: %p\n", &x[1]);
  printf("y0: %p\n", &y[0]);
  printf("y0: %p\n", &y[1]);
}

bool heapGrewDown(){

  int* x = (int*)malloc(sizeof(int) * 2);
  printf("x0: %p\n", &x[0]);
  printf("x1: %p\n", &x[1]);

  if(&x[0] < &x[1]){
    return true;
  }

  return false;
}

int main(){
  printf("The heap grew %s\n", heapGrewDown() ? "up" : "down");
  return 0;
}
