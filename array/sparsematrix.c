// Sparse matrix implementation.

#include <stdio.h>

void main()
{
    char str[3][10]={"Row","Column","Value"};
    int smatrix[4][5];
    int data , i , j , n , x;
    data =0;

    printf("\nEnter the data to the 4 * 5 matrix :");
    for(i =0 ; i<4 ;i++)
    {
        printf("\n%d row :", i);
        for (j=0;j<5;j++)
        {
            scanf("%d",&smatrix[i][j]);
        }
    }


    for (i=0 ; i<4 ; i++)
    {
        for (j =0 ;j<5;j++)
        {
            if(smatrix[i][j]!= 0)
            {
                data ++;
            }
        }
    }

    int compact_matrix[3][data],k=0;
    for (i=0 ; i<4 ; i++)
    {
        for (j =0 ;j<5;j++)
        {
            if (smatrix[i][j]!=0)
            {
                compact_matrix[0][k]=i;
                compact_matrix[1][k]=j;
                compact_matrix[2][k]=smatrix[i][j];
                k++;
            }
        }
    }

    printf("\n MATRIX WAS :\n");
    printf("{\n");
    for (i=0 ; i<4 ; i++)
    {
        printf("{");
        for (j =0 ;j<5;j++)
        {
            printf("%d,",smatrix[i][j]);
        }
        printf("},");
        printf("\n");
    }
    printf("}");
    printf("\n Triplet representation of the sparse matrix is :\n");

    for (i=0 ; i<3 ; i++)
    {
        printf("%s :",str[i]);
        for (j =0 ;j<data;j++)
        {
            printf("%d ",compact_matrix[i][j]);
        }
        printf("\n");
    }
}