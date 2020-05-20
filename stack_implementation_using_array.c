#include <stdio.h>
#include <stdbool.h>     //for bool datatype
#include <stdlib.h>		// for malloc
#define max_element 5
int top=-1;
bool isempty(){
	return top==-1;
}
bool isfull(){
	return top==max_element-1;
}
int size(){
	return top+1;
}
void push(int stack[],int value){
	//if(isfull()){
	if(size()==max_element){
		printf("Stack is full i.e. Overflow Condition !!!\n");
	}else{
		top++;
		stack[top]=value;
	}
}
void peek(int stack[]){
	printf("%d\n",stack[top]);
}
void pop(){
	//if(isempty()){
	if(size()==0){
		printf("Stack is empty i.e. Underflow condition !!!\n");
	}else{
		top=top-1;
	}
}
void print(int stack[]){
	int i;
	if(top>=0){
		for(i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
	}
	printf("\n");
}
int main(void)
{
	//Initializing stack of 5 elements
	//int stack[max_element];
	int *stack = (int*)malloc(max_element*sizeof(int)) ;
	push(stack,1);
	push(stack,2);
	push(stack,3);
	push(stack,4);
	push(stack,5);
	print(stack);
	printf("Current size of the stack = %d\n",size());
	push(stack,6);
	peek(stack);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	return 0;
}
