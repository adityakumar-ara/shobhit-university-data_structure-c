#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Insert at specific position
void insertSP(struct node **head, int value, int pos) {
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    // Position 1 (beginning)
    if (pos == 1) {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    temp = *head;

    // Traverse till (pos-1)
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp == NULL) {
        printf("Invalid Position\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
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

    // initial list
    insertSP(&head, 10, 1);
    insertSP(&head, 20, 2);
    insertSP(&head, 30, 3);

    printf("Before Insertion:\n");
    display(head);

    // insert at position 2
    insertSP(&head, 15, 2);

    printf("\nAfter Insertion at position 2:\n");
    display(head);

    return 0;
}