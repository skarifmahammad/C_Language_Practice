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
struct Node * insertAfterNode(struct Node * head, struct Node * prevNode, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof (struct Node));
	ptr->data = data;
	
	ptr->next = prevNode->next;
	prevNode->next = ptr;
	return head;
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
    head->data = 1;
    head->next = second;

    // Link second and third Nodes
    second->data = 2;
    second->next = third;

    // Link third and forth Nodes
    third->data = 3;
    third->next = forth;
    
    // Link forth and fifth Nodes
    forth->data = 4;
    forth->next = fifth;

    // Terminate the list at the fifth  Node
    fifth->data = 5;
    fifth->next = NULL;

	printf("Linked List Before insertion\n");
    linkedListTraversal(head);
    head = insertAfterNode(head, second, 100);
    printf("\nLinked List after insertion\n");
    linkedListTraversal(head);
    
    return 0;
}
