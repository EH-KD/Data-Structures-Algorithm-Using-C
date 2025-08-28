// Implementing singly linked list .
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node*next;
};
struct node *temp,*start,*nw ,*last ;
int x , i, l;
void create()
{
    nw = (struct node *) malloc (sizeof (struct node));
    printf("enter the data to be added :");
    scanf("%d",&x);
    nw->data = x;
    if (start == NULL)
    {
    start = last =nw;
    start->next = NULL;
    printf("%d  added .",x);
    }
    else
    {
        last->next = nw;
        last = nw;
        last->next = NULL;
    }
}
void display()
{
    printf("\nElements on the list are :\n");
    for(temp=start;temp!=NULL;temp=temp->next)
    {
        printf("%d->",temp->data);
    }
    printf("NULL");
}

int main()
{
    start = NULL;
    int n;
    while (1)
    {
    printf("singly linked list :");
    printf("\n 1.create \n 2.insert \n 3. display \n4.exit");
    printf("\nChoose an operation to done :\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    create();
    break;
    case 2:
    create();
    break;
    case 3:
    display();
    break;
    case 4:
    return 0 ;
    break;
    default :
    printf("\n Invalid option !...");
    }
}
}

// Another  method 

/*
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node*next;
};
struct node *temp,*start,*nw ,*last ;
int x , i, l;
void create()
{
    nw = (struct node *) malloc (sizeof (struct node));
    printf("enter the data to be added :");
    scanf("%d",&x);
    nw->data = x;
    if (start == NULL)
    {
    start = last =nw;
    start->next = NULL;
    printf("%d  added .",x);
    }
    else
    {
      temp= start;
      while(temp->next!=NULL)
      {
        temp = temp->next;
      }
      temp ->next = nw;
      temp = nw;
      temp->next =  NULL;

    }
}
void display()
{
    printf("\nElements on the list are :\n");
    for(temp=start;temp!=NULL;temp=temp->next)
    {
        printf("%d->",temp->data);
    }
    printf("NULL");
}

int main()
{
    start = NULL;
    int n;
    while (1)
    {
    printf("singly linked list :");
    printf("\n 1.create \n 2.insert \n 3. display \n4.exit");
    printf("\nChoose an operation to done :\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    create();
    break;
    case 2:
    create();
    break;
    case 3:
    display();
    break;
    case 4:
    return 0 ;
    break;
    default :
    printf("\n Invalid option !...");
    }
}
}
*/