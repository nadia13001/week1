#include <iostream>
#include "Queue.h"
/*
Function puts initial values into queue struct and allocates memory for the array
Input: queue struct, size of the queue
Output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->size = size;
	q->first = 0;
	q->last = 0;
	q->sizeUsed = 0;
}
/*
Function releases dynamically allocated memory and resets queue fields
Input: queue struct
Output: none
*/
void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->arr = nullptr;
	q->size = 0;
	q->first = 0;
	q->last = 0;
	q->sizeUsed = 0;
}
/*
Function inserts a new value into the queue if it's not full
Input: queue struct, value to insert
Output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->arr[q->last] = newValue;
		q->last++;
		if (q->last == q->size)
		{
			q->last = 0;
		}
		q->sizeUsed++;
	}
}
/*
Function removes and returns the first value from the queue if it's not empty
Input: queue struct
Output: int value removed from queue, or -1 if queue is empty
*/
int dequeue(Queue* q)
{
	int value = 0;
	if (isEmpty(q))
	{
		value = -1;
	}
	else
	{
		value = q->arr[q->first];
		q->first++;
		if (q->first == q->size)
		{
			q->first = 0;
		}
		q->sizeUsed--;
	}
	return value;
}
/*
Function checks if the queue is empty
Input: queue struct
Output: true if empty, false otherwise
*/
bool isEmpty(Queue* s)
{
	return s->sizeUsed == 0;
}
/*
Function checks if the queue is full
Input: queue struct
Output: true if full, false otherwise
*/
bool isFull(Queue* s)
{
	return s->sizeUsed == s->size;
}