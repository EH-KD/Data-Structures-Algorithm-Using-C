// Quick Sort

#include <stdio.h>
int swap (int *p , int *q)
{
    int temp = *p;
    *p=*q;
    *q = temp;
}

int partition(int arr[],int low , int high)
{
    int pivot = arr[high];
    int i , j ,  n;
    i = low-1;
    for(j=low;j<high;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[high]);
    return i;
}

void quicksort(int arr[],int start , int end)
{
    if (start < end)
     {
    int pivot = partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
     }
}
void main()
{
    int arr[50],n , x , i , j;

    printf("\n Enter how many elements you want to add to your array :");
    scanf("%d",& n);
    for (i=0;i<n;i++)
    {
        printf("\nEnter %d data :",i+1);
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);

    printf("\n Quick sort of the array :");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

/*
#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function (Lomuto partition scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // pivot element
    int i = low - 1;        // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Place pivot at the correct position
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

*/