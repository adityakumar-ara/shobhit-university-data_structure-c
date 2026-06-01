#include <stdio.h>

int pos, num, n, i;
int arr[10];

void insertele()
{
    printf("Enter number to insert: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = num;
    n++;

    printf("Number Added\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deleteElement()
{
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    printf("Number Deleted\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void display()
{
    printf("Array Elements: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int choose;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Add Element");
    printf("\n2. Delete Element");
    printf("\n3. Display Elements");
    printf("\nEnter choice: ");

    scanf("%d", &choose);

    switch(choose)
    {
        case 1:
            insertele();
            break;

        case 2:
            deleteElement();
            break;

        case 3:
            display();
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}