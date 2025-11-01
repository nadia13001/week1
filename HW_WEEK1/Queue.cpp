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

}
/*

*/
int dequeue(Queue* q)
{

}
/*

*/
bool isEmpty(Queue* s)
{

}
/*

*/
bool isFull(Queue* s)
{

}