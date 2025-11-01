#include <iostream>
#include "Queue.h"
/*

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

*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->arr[q->last] = newValue;
	q->last++;
	if (q->last == q->size)
	{
		q->last = 0;
	}
	q->sizeUsed++;
}
/*

*/
int dequeue(Queue* q)
{
	int value = 0;
	if (isEmpty(q))
	{
		return -1;
	}
	value = q->arr[q->first];
	q->first++;
	if (q->first == q->size)
	{
		q->first = 0;
	}
	q->sizeUsed--;
	return value;
}
/*

*/
bool isEmpty(Queue* s)
{
	return s->sizeUsed == 0;
}
/*

*/
bool isFull(Queue* s)
{
	return s->sizeUsed == s->size;
}