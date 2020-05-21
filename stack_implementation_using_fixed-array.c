// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>
#define MAX 3 
int count = 0;

//Declare stack data structure
// struct stack {
//   int items[MAX];
//   int top;
// };
// typedef struct stack st;

typedef struct stack
{
    int items[MAX];
    int top;
}st;

//initialize the stack
void initStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  return s->top == MAX - 1;
}

// Check if the stack is empty
int isempty(st *s) {
  return s->top == -1;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL\n");
  } else {
    s->top++;
    s->items[s->top] = newitem;
    count++;
  }
}

// Remove element from stack
void pop(st *s) {
  if (isempty(s)) {
    printf("STACK EMPTY \n");
  } else {
    printf("Item popped= %d", s->items[s->top]);
    s->top--;
  }
  printf("\n");
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  st *s = (st *)malloc(sizeof(st));
  initStack(s);
  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);
  printStack(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
}