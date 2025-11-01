#include <iostream>
#include "Utils.h"
#include "Stack.h"
#define ARR_SIZE 10
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
Reads 10 integers from the user stores them in array,and reverse the order using a stack.
Input: none.
Output: pointer to a dynamically allocated array of 10 integers in reverse order.
*/
int* reverse10()
{
	int i = 0;
	int value = 0;
	int* arr = new int[ARR_SIZE];
	Stack s;
	initStack(&s);
	std::cout << "Please enter 10 nums:" << std::endl;
	for (i = 0; i < ARR_SIZE; i++)
	{
		std::cin >> value;
		arr[i] = value;
	}
	reverse(arr, ARR_SIZE);
	return arr;
}