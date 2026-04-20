#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3,2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements are:\n");

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // print only once
        if (count > 0) {
            int alreadyPrinted = 0;

            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    alreadyPrinted = 1;
                    break;
                }
            }

            if (!alreadyPrinted) {
                printf("%d\n", arr[i]);
            }
        }
    }

    return 0;
}