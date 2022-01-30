#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node* ptr){
    while (ptr != NULL)
    { 
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    struct Node * fifth;
    
    //Allocate memory for nodes in rhe linked list in Heap
    head = (struct  Node *) malloc( sizeof(struct Node));
    second = (struct  Node *) malloc( sizeof(struct Node));
    third = (struct  Node *) malloc( sizeof(struct Node));
    forth = (struct  Node *) malloc( sizeof(struct Node));
    fifth = (struct  Node *) malloc( sizeof(struct Node));

    // Link first and second Nodes
    head->data = 7;
    head->next = second;

    // Link second and third Nodes
    second->data = 11;
    second->next = third;

    // Link third and forth Nodes
    third->data = 24;
    third->next = forth;
    
    // Link forth and fifth Nodes
    forth->data = 43;
    forth->next = fifth;

    // Terminate the list at the fifth  Node
    fifth->data = 66;
    fifth->next = NULL;

    linkedListTraversal(head);
    return 0;
}
