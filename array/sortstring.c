// Sort the given strings.

#include  <stdio.h>
#include <string.h>

int main()
{
    char str[20][20] , n ;
    char x[20];
    int m,i,j,l;

    printf("\n How many strings you want to add to the array : \n");
    scanf("%d",&m);
    printf("\n Enter the strings :");
    for (i=0;i<m;i++)
    {
        printf("\nEnter  the %d string :\n",i+1);
        scanf("%s",str[i]);
        printf(" %s added to the array . ",str[i]);
    }

    for (i=0 ; i<m-1;i++)
    {
        for (j=i+1;j <m ; j++)
        {
            if (strcmp(str[i],str[j]) > 0)
            {
                strcpy(x,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],x);
            }
        }
    }

    printf("\n Sorted array was :");
    for (i=0;i<m;i++)
    {
        printf("\n %s",str[i]);
    }
    printf("\n");
 return 0;

}