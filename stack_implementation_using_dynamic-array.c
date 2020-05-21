/* Global variable "num" is only brought into picture because we are implementing stack through pointers; so after printing elements, its top pointer needs to be restored to the top of stack for pop operation */

#include <stdio.h>
#include <stdlib.h>
int num;			//declaring global variable 

// Data structure for stack			
struct stack	
{
	int maxsize;	// max capacity of stack
	int top;
	int *items;
};

// Utility function to initialize stack
struct stack* newStack(int capacity)
{
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));
	pt->maxsize = capacity;
	pt->top = -1;
	pt->items = (int*)malloc(sizeof(int) * capacity);
	return pt;
}

// Utility function to return the size of the stack
int size(struct stack *pt)
{
	return pt->top + 1;
}

// Utility function to check if the stack is empty or not
int isEmpty(struct stack *pt)
{
	return pt->top == -1;	// or return size(pt) == 0;
}

// Utility function to check if the stack is full or not
int isFull(struct stack *pt)
{
	return pt->top == pt->maxsize - 1;	// or return size(pt) == pt->maxsize;
}

// Utility function to add an element x in the stack
void push(struct stack *pt, int x)
{
	if (isFull(pt))
	{
		printf("OverFlow !!! further element can't be added. \n");
	}else{
		printf("Inserting %d\n", x);
		pt->items[++pt->top] = x;
		num++;
	}
}

// Utility function to return top element in a stack
int peek(struct stack *pt)
{
	if (!isEmpty(pt))
		return pt->items[pt->top];
	//else
	// 	exit(EXIT_FAILURE);
}

void print(struct stack *pt)
{
	while(pt->top >= 0){
		printf("%d ", pt->items[pt->top]);
		pt->top--;
	}
	printf("\n");
	pt->top = num-1;  //restoring top pointer to the top of stack
	
} 

// Utility function to pop top element from the stack
void pop(struct stack *pt)
{
	if (isEmpty(pt))
	{
		printf("UnderFlow !!! further element can't be deleted.\n");
	}else{
		printf("Removing %d\n", pt->items[pt->top]);
		//return pt->items[pt->top--];
		pt->top--;
	}
}

int main()
{
	num=0; // initialization of global variable 
	struct stack *pt = newStack(3); // create a stack of capacity 3

	push(pt, 1);
	push(pt, 2);
	push(pt, 3);
	push(pt, 4);
	
	print(pt);
	printf("Top element is %d\n", peek(pt));
	printf("Stack size is %d\n", size(pt));
	
	pop(pt);
	pop(pt);
	pop(pt);
	pop(pt);
	return 0;
}

