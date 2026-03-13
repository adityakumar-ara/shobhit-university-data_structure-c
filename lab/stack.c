#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int data) {
    if(top >= MAX-1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = data;
    printf("%d pushed to stack\n", data);
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

int peek() {
    if(top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];
}

void display() {
    if(top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, data;
    
    printf("=== STACK OPERATIONS USING ARRAY ===\n");
    
    while(1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                push(data);
                break;
                
            case 2:
                data = pop();
                if(data != -1)
                    printf("%d popped from stack\n", data);
                break;
                
            case 3:
                data = peek();
                if(data != -1)
                    printf("Top element: %d\n", data);
                break;
                
            case 4:
                display();
                break;
                
            case 5:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
