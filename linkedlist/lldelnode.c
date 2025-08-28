// Deleting a Node in the linked list
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
void delete_node()
{
    struct node * prev;
    printf("\n Enter the node to delete :");
    scanf("%d",&x);
    if (start->data == x)
    {
        start = start->next;
        printf("%d is deleted . ",x);
        return;
    }
    for (temp= start ;temp!=NULL;temp=temp->next)
    {
        if (temp->next->data == x)
        {
            prev = temp;
        }
        if (temp->next->next == NULL && temp->next->data == x)
        {
            temp->next = NULL;
            printf("%d is deleted .",x);
            return ;
        }
        if (temp->data == x )
        {
                prev->next = temp->next;
                printf("%d is deleted .",x);
                return;
            }

        }
        
    
    printf("%d not found ... ",x);
}

void display()
{
    if (start == NULL)
    {
        printf("List is empty ..!");
        return;
    }
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
    printf("\n 1.create \n 2.insert \n 3. display \n4.delete \n5.exit");
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
    delete_node();
    break;
    case 5:
    return 0 ;
    break;
    default :
    printf("\n Invalid option !...");
    }
}
}

// Another Verions 

/*
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *last = NULL;

void create() {
    int n;
    struct node *nw;
    nw = (struct node *)malloc(sizeof(struct node));
    if (nw == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("\nEnter the data to be inserted: ");
    scanf("%d", &n);
    nw->data = n;
    nw->next = NULL;

    if (start == NULL) {
        start = last = nw;
    } else {
        last->next = nw;
        last = nw;
    }
}

void deleteNode() {
    int m;
    struct node *temp = start, *prev = NULL;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter the data of the node to delete: ");
    scanf("%d", &m);

    // If the node to delete is the first node
    if (start->data == m) {
        temp = start;
        start = start->next;
        if (start == NULL) {
            last = NULL; // list became empty
        }
        free(temp);
        printf("%d deleted from the list.\n", m);
        return;
    }

    // Search for the node to delete
    while (temp != NULL && temp->data != m) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d not found in the list.\n", m);
        return;
    }

    // Node found and it is not the first
    prev->next = temp->next;

    if (temp == last) {
        last = prev;
    }

    free(temp);
    printf("%d deleted from the list.\n", m);
}

void display() {
    struct node *temp = start;

    if (start == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nNodes in the linked list are:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n;

    while (1) {
        printf("\nLinked list operations\n----------------------\n");
        printf("1. Create\n2. Insert\n3. Display\n4. Delete\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
            case 2:
                create();
                break;
            case 3:
                display();
                break;
            case 4:
                deleteNode();
                break;
            case 5:
                return 0;
            default:
                printf("\nInvalid option!\n");
        }
    }
}
*/

//  Deleting node 

/*
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * next;

};

struct node * start, *last, *temp,*nw;

void create()
{
    int n;
    nw = (struct node*)malloc (sizeof(struct node));
    printf("\n Enter the data to be inserted :");
    scanf("%d",&n);
    nw->data = n;
    if (start == NULL)
    {
        start = last = nw;
        last->next= NULL;
    }
    else
    {
        last->next = nw;
        last =nw;
        last->next= NULL;
    }
    printf("\n %d added to the list .",n);
}
void delete()
{
    int n;
    struct node *prev;
    printf("\nEnter the data to be deleted :");
    scanf("%d",&n);
    temp = start;
    if (start->data == n)
    {
        start  = start->next;
        printf("\n %d deleted  from the list .",n);
        return;
    }
    while(temp!=NULL && temp->data !=n)
    {
         prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("\n %d node don't be found on the list.",n);
        return;
    }
    if(temp == last)
    {
        last = prev;
        last->next = NULL;
    }
    else
    {
        prev->next= temp->next;
    }
    free(temp);
    printf("\n %d deleted  from the list .",n);
}
void display()
{
    for (temp = start ; temp !=NULL;temp=temp->next)
    {
        printf("%d->",temp->data);
    }
    printf("NULL\n");
}
void main()
{
    int n;
    start = last = NULL;
    while (1)
    {
    printf ("\nenter a choice :");
    scanf("%d",&n);
    switch(n)
    {
        case 1:create();break;
        case 2:delete();break;
        case 3:display(); break;
        case 4:return;break;
        default : printf("\nnvalid option !");break;
    }
    }

}
*/