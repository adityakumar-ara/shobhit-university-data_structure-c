#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating linked list
    for (int i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Traversing linked list
    printf("\nLinked List elements are:\n");
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}