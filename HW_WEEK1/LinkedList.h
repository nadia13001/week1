#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    unsigned int num;
    struct node* next;
} node;

void addToList(node** head, unsigned int value);
void removeFromList(node** head);
bool isEmpty(node* head);
void freeList(node** head);

#endif /* LINKED_LIST_H */
