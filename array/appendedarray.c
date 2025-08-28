// Appended array

#include <stdio.h>
int main()
{
    int a[20],b[20],c[40], n , m , i , j , x ;
    printf("\nEnter how many numbers you want to add to array one : ");
    scanf("%d",&n);
    printf("\nEnter the elements for the first array : ");
    for (i =0 ;i<n;i++)
    {
    printf("\nEnter %d data :",i+1);
    scanf("%d",&a[i]);
    c[i]=a[i];
    };

    printf("\nEnter how many numbers you want to add  to array two : ");
    scanf("%d",&m);
    printf("\nEnter the elements for the second array : ");
    for(i=0;i<m;i++)
    {
        printf("\nEnter %d data :",i+1);
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    };

    printf("\n First Array :");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    };
    printf("\n");
    printf("\n Second Array :");
    for(i=0;i<m;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    printf("\n Appended Array :");
    for (i=0;i<m+n;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");
}   


