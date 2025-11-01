#include <iostream>
#include "LinkedList.h"
/*
Func adds new num to the beginning of the list
Input: the address of the head of the linked list variable, the value to add
Output: none
*/
void addToList(node** head, unsigned int value)
{
	node* newNode = new node;
	newNode->num = value;
	newNode->next = *head;
	*head = newNode;
}
/*
Removes the node at the beginning of the list and frees its memory.
Input: the address of the head of the linked list variable
Output: none.
*/
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
/*
Checks whether the linked list is empty.
Input: pointer to the head node.
Output: true if the list is empty, false otherwise.
*/
bool listIsEmpty(node* head)
{
    return head == nullptr;
}
/*
Func deleting the whole list and frees the memory
Input: the address of the head of the linked list
Output:none
*/
void freeList(node** head)
{
    while (!listIsEmpty(*head))
    {
        removeFromList(head);
    }
}