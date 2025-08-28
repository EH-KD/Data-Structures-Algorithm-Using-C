// Queue using linked list.

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *top , *temp, *nw;
int n , x,m , i ;

void push()
{
    nw =(struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data to be added :");
    scanf("%d",&x);
    nw->data=x;
    nw->next = top;
    top = nw;
    printf("\n %d added to the stack .",x);
}

void pop()
{
    if (top == NULL)
    {
        printf("\n Stack is empty ...!");
        return ;
    }
    printf("\n%d poped from the stack . ",top->data);
    top  = top->next;
}
void display()
{
    if (top ==  NULL)
    {
        printf("\n Stack is empty ..!");
        return ;
    }
    printf("\n stack elements are : \n");
    for(temp=top;temp!=NULL;temp=temp->next)
    {
        printf("%d ",temp->data);
    }
}
void main()
{
    top = NULL;
    while (1) 
    {
    printf("\n Stack operations : \n----------------------------\n");
    printf("\n1.push\n2.pop\n3.display\n4.exit");
    printf("\nEnter your choice :");
    
    scanf("%d",&n);
    switch(n)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        case 4:return ;
        default:printf("Invalid option !..");
    }
    }
}