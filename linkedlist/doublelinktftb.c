// Double linked list 
// To Display Traverse Forward and Traverse Backwards

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node * prev;
    struct node * next;
    int data;
};

struct node * start , *temp,*nw,*last;
int x, i , l;

void create()
{
    nw = (struct node * )malloc (sizeof (struct node));
    printf("\nEnter the data  to  be added :");
    scanf("%d",&x);
    nw->data = x;
    if  (start  == NULL)
    {
        start = last =  nw;
        start->prev = NULL;
        start->next = NULL;
    }
    else
    {
        last->next=nw;
        nw->prev=last;
        last = nw;
    }
}

void traverseforward()
{
    printf("\n Display Data Forward : \n");
    for (temp=start;temp!=NULL;temp=temp->next)
    {
        printf("%d ->",temp->data);
    }
    printf("NULL");
}


void traversebackward()
{
    printf("\n Display Data Backward : \n");
    printf("NULL");
    for (temp=last;temp!=NULL;temp=temp->prev)
    {
        printf("<-%d",temp->data);
    }
}

void main()
{
    int n , m ;
    
    while (1)
    {
        printf(" \n Doubly Linked list : \n");
        printf("\n1.create \n2. Traverse Forward \n 3. Traverse  Backward \n 4. exit\n");
        scanf("%d", &n);

        switch(n)
        {
            case 1:create();break;
            case 2:traverseforward();break;
            case 3:traversebackward();break;
            case 4:return;
            case 5:printf("Invalid  choice !...");
        }
    }
}