#include <iostream>
#include "LinkedList.h"

void initList(node** head) 
{
	*head = nullptr;
}
void addToList(node** head, unsigned int value)
{
	node* newNode = new node;
	newNode->num = value;
	newNode->next = *head;
	*head = newNode;
}
void removeFromList(node** head)
{
    node* tmp = *head;
    if (*head == nullptr) 
    {
        return;
    }
    *head = (*head)->next; 
    delete tmp;
}
bool isEmpty(node* head)
{
    return head == nullptr;
}
void freeList(node** head)
{
    while (!isEmpty(*head))
    {
        removeFromList(head);
    }
}