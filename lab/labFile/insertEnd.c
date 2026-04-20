#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Function to insert at end
void insertEnd(struct node **head, int value) {
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    // agar list empty hai
    if (*head == NULL) {
        *head = newnode;
    } else {
        temp = *head;

        // last node tak jao
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode; // last me add
    }
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

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Linked List:\n");
    display(head);

    return 0;
}