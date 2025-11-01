#include <iostream>
#include "Utils.h"
#include "Stack.h"
/*
Reverses the order of elements in an integer array using a stack.
Input: pointer to array, the number of elements in the array.
Output: none.
*/
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack s;
	initStack(&s);
	for (i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(&s);
	}
	cleanStack(&s);
}
/*

*/
int* reverse10()
{

}