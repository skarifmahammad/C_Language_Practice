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
struct Node * insertAtIndex(struct Node * head, int data , int index){
	struct Node * ptr = (struct Node *) malloc(sizeof (struct Node));
	struct Node * p = head;
	int i = 0;
	while(i!=index-1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
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
    head = insertAtIndex(head, 100,3); //(head, Element, Possition after will insert);
    printf("\nLinked List after insertion\n");
    linkedListTraversal(head);
    
    return 0;
}
