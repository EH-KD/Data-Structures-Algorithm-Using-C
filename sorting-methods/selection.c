// Selection Sort

#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++) {
        min_index = i;

        // Find the index of the minimum element
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap only once
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        // Print array after each pass
        printf("\nAfter %d pass: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[20], n;

    printf("Enter how many elements you want to add to the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d Data: ", i + 1);
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("\nSorted array: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
