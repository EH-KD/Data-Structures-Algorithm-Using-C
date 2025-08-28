// Bubble Sort

#include <stdio.h>

void bubblesort(int arr[], int n)
{
    int i , j,k ,temp,m ;
    m = 0;
    for (i =0 ;i<n;i++)
    {
        printf("\n%d",i);
        for (j=0;j<n-1;j++)
        {
         if (arr[j] > arr[j+1])
         {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
        printf("\n After %d pass :",m);
        for (k=0;k<n;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
      m++;
    }
}

void main()
{
    int n, i , arr[20];
    printf("\n Enter how many elements to add to the array ;");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\n%d Data :",i+1);
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);

    printf("\n Sorted array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

// Another more effiecient way of implementing bubble sort Algorithm.
/*
#include <stdio.h>

void bubblesort(int arr[], int n)
{
    int i, j, temp, k;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        printf("\nAfter pass %d: ", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
    }
}

int main()
{
    int n, i, arr[20];

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/