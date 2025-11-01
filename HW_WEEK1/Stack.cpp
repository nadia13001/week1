#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	addToList(&(s->stackTop),element);
}

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

void initStack(Stack* s)
{
	s->stackTop = nullptr;
}

void cleanStack(Stack* s)
{
	freeList(&(s->stackTop));
}

bool isEmpty(Stack* s)
{
	return s ->stackTop == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}