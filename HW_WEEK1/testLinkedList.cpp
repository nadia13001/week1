#include <iostream>
#include "LinkedList.h"

void printList(node* head);

int main() 
{
    node* head = nullptr;
    std::cout << "Adding values " << std::endl;
    addToList(&head, 1);
    addToList(&head, 2);
    addToList(&head, 3);
    printList(head);

    std::cout << "Check func isEmpty:" << std::endl;
    if (isEmpty(head))
    {
        std::cout << "List is empty." << std::endl;
    }
    else 
    {
        std::cout << "List is not empty." << std::endl;
    }
    std::cout << "\nRemoving number" << std::endl;
    removeFromList(&head);
    printList(head); 

    std::cout << "\nFreeing the list " << std::endl;
    freeList(&head);
    printList(head); 

    std::cout << "\nCheck" << std::endl;
    if (isEmpty(head)) 
    {
        std::cout << "List is empty." << std::endl;
    }
    else 
    {
        std::cout << "List is not empty." << std::endl;
    }

    return 0;
}

void printList(node* head)
{
    std::cout << "List: ";
    while (head != nullptr) 
    {
        std::cout << head->num << " ";
        head = head->next;
    }
    std::cout << "NULL" << std::endl;
}