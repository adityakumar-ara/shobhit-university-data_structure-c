#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Insert at beginning
void insertBegin(struct node **head, int value) {
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    newnode->next = *head; // current head ko next bana diya
    *head = newnode;       // head ko update kar diya
}

// Display function
void display(struct node *head) {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;

    insertBegin(&head, 30);
    insertBegin(&head, 20);
    insertBegin(&head, 10);

    printf("Linked List:\n");
    display(head);

    return 0;
}