#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push(int);
void pop(void);
void display(void);
 
int main ()
{
    s.top = -1;
    push(1);
	push(2);
	push(3);
	push(4);
	push(5);
    display();
	push(6);
    pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	return 0;
}
/*  Function to add an element to the stack */
void push (int num)
{
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
    }
    else
    {
        s.top++;
        s.stk[s.top] = num;
    }
}
/*  Function to delete an element from the stack */
void pop ()
{
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
    }
    else
    {
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top--;
    }
}
/*  Function to display the status of the stack */
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
    }
    else
    {
        printf ("The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d ", s.stk[i]);
        }
    }
    printf ("\n");
}