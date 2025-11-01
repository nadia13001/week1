#include <iostream>
#include "Stack.h"

/*
Func adds a new element to the top of the stack.
Input: pointer to a Stack. element to add 
Output: none
*/
void push(Stack* s, unsigned int element)
{
	addToList(&(s->stackTop),element);
}
/*
Removes the top element from the stack and returns its value.
Input: pointer to a Stack.
Output: int value of the popped element or -1 if stack is empty.
*/
int pop(Stack* s)
{
	int value = 0;
	if (isEmpty(s))
	{
		value = -1;
	}
	else
	{
		value = s->stackTop->num;
		removeFromList(&(s->stackTop));
	}
	return value;
}
/*
Func initializes the stack
Input: pointer to a Stack
Output: none
*/
void initStack(Stack* s)
{
	s->stackTop = nullptr;
}
/*
Func frees all elements in the stack and resets its top pointer
Input: pointer to a Stack
Output: none
*/
void cleanStack(Stack* s)
{
	freeList(&(s->stackTop));
}
/*
Checks whether the stack is empty.
Input: pointer to a Stack.
Output: true if the stack is empty, false otherwise
*/
bool isEmpty(Stack* s)
{
	return s ->stackTop == nullptr;
}
// There is no maximum cartridge size.
bool isFull(Stack* s)
{
	return false;
}