// Searching an element in the Binary Search Tree.

#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node*left;
    struct node*right;
};
struct node *root = NULL,*nw;

void create()
{

int n;
nw = (struct node *)malloc (sizeof(struct node ));
printf("Enter the data to be added to the tree :");
scanf("%d",&n);
nw->data= n;
nw->left = NULL;
nw->right = NULL;

if (root == NULL)
{
root = nw;
return;
}
struct node * currentnode = root;
struct node * parentnode = NULL;

while (currentnode!=NULL)
{
    parentnode = currentnode;
    if (currentnode->data > n)
    {
        currentnode = currentnode->left;
    }
    else if (currentnode->data < n)
    {
        currentnode = currentnode->right;
    }
}   
if (parentnode->data > n)
{
    parentnode->left = nw;
}
else if (parentnode->data < n)
{
    parentnode->right = nw;
}
}

void inorder(struct node *node)
{
if (node !=NULL)
{
    inorder(node->left);
    printf("%d ",node->data);
    inorder (node->right);
}
}

void search()
{
    int n;
    printf("\n enter the data to be searched :");
    scanf("%d",&n);

    struct node *currentnode = root;
    while (currentnode !=NULL && currentnode->data !=n)
    {
        if(currentnode->data > n)
        {
            currentnode = currentnode->left;
        }
        else if (currentnode->data < n)
        {
            currentnode = currentnode->right;
        }
    }
    if (currentnode == NULL)
    {
        printf("%d not found on the binary search tree .",n);
        return;
    }
    else
    {
        printf("\n%d is found on BST.",n);
    }
    
}

void main()
{
    int n , m;
    while (1)
    {
    printf("\n Tree operations \n -------------------\n 1.create\n 2.display \n3.search \n4.exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("\nEnter how many elements do you want to add to the tree :");
        scanf("%d",&m);
        while (m!=0)
        {
        create();
        m--;
        }
        case 2:inorder(root);break;
        case 3: search();break;
        case 4:return;break;
        default:printf("\nInvalid option !");
    }
    }
}