// Queue using linked List.

#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * next;
};

struct node *f,*r,*temp,*nw;

int n,x;

void enqueue()
{
    nw = (struct node *) malloc (sizeof (struct node));
    printf("\nEnter the data to be inserted :\n");
    scanf("%d",&x);
    nw->data =x;
    if (f==NULL)
    {
        f=r=nw;
        nw->next =NULL;
    }
    else
    {
        r->next =nw;
        r=nw;
        r->next =NULL;
    }
    printf("\n %d is enqueued  to the queue.",x);
}

void dequeue()
{
    if (f == NULL)
    {
        printf("\nQueue  underflow !");
        return;        
    }
    else if (f == r )
    {
        f = r = NULL;
        return ;
    }
    printf("\n%d  is dequed from the queue.",f->data);
    f = f->next;
}

void display()
{
    printf("\nQueue elements are :- \n");
    for (temp=f;temp!=NULL;temp=temp->next)
    {
    printf("%d ->", temp->data);
    }
    printf("NULL");
}
void main()
{
    f = r= NULL;
    int m;
    while (1)  
    {
    printf("\n Queue  operations \n-------------------\n");
    printf("\n1.enqueue \n 2.dequeue\n3.display\n4.exit\n");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        enqueue();break;
    case 2: dequeue();break;
    case 3:display();break;
    case 4:return ;
    default:printf(" Invalid option !");
        break;
    }
    }
}