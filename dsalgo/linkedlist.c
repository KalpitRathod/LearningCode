#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *nextx;
};

void linkedListTraversal(struct Node * xptr){
    while(xptr != NULL){
        printf("Element: %d\n", xptr->data);
        xptr = xptr->nextx;
    }
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * xptr = (struct Node *)malloc(sizeof(struct Node));
    xptr->nextx=head;
    xptr->data=data;
    return xptr;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 1;
    head->nextx = second;

    // Link second and third nodes
    second->data = 2;
    second->nextx = third;

    // Link third and fourth nodes
    third->data = 3;
    third->nextx = fourth;

    // Terminate the list at the fourth node
    fourth->data = 4;
    fourth->nextx = NULL;

    linkedListTraversal(head);
    head = insertAtFirst(head, 56);
    linkedListTraversal(head);


    return 0;
}
