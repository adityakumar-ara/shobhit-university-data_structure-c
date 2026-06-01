#include <stdio.h>

int arr[20], search, found = 0, size;

void searchElement(int n)
{
    int low = 0, high = n - 1, mid;

    printf("Enter Number To Find: ");
    scanf("%d", &search);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            printf("Element found at index %d\n", mid);
            break;
        }
        else if (search < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (!found)
    {
        printf("Element not found\n");
    }
}

int main()
{
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    searchElement(size);

    return 0;
}