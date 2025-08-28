// Searching an element in the linked list.
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
      printf("%d added .",x);
    }
}

void search()
{
    int n ,m,flag=0;
    m=0;
    printf("Enter the data to be searched : ");
    scanf("%d",&n);
    for(temp = start ; temp!=NULL;temp=temp->next)
    {
        m++;
        if (temp->data == n)
        {
            printf("%d is found at position %d.",n,m);
            flag=1;
        }
    }
    if (flag ==0)
    {
        printf("%d data is not found in the linked list .",n);
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
    printf("\nsingly linked list :");
    printf("\n 1.create \n 2.insert \n 3. display \n4.search \n5.exit");
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
    search();
    break;
    case 5:
    return 0;
    default :
    printf("\n Invalid option !...");
    }
}
}