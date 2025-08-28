// Binary search using array 

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[30], n , i , j , x , start ,end ;
    printf("\n Enter the size of the array :");
    scanf("%d",&n);
    printf("\n Enter the data in ascending order ;");
    for (i=0;i<n;i++)
    {
        printf("\nEnter %d data :", i +1);
        scanf("%d",&arr[i]);
    }
    printf(" \n Enter the element to be searched :");
    scanf("%d",&x);
    start = 0;
    end = n-1;

    
    while (start <= end )
    {
        int mid = (start+end) / 2;
        if (arr[mid]== x )
        {
            printf("\n %d found on the %d.",x,mid+1);
            return 0;
        }
        else if (arr[mid] > x)
        {
            start = mid+1;
        }
        else 
        {
            end = mid-1;
        }
    }

    printf("\n %d not found on the array .",x);
}