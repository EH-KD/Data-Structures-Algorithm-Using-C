// Binary search tree in Inorder , Preorder , Postorder.

#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * left;
    struct node* right;

};
struct node *nw, *temp,*root;

void create()
{
    int n;
    nw = (struct node*)malloc (sizeof(struct node));
    printf("\n Enter the data to be inserted :");
    scanf("%d",&n);
    nw->data= n;
    nw->left=NULL;
    nw->right = NULL;
    if (root ==NULL)
    {
        root = nw;
        printf("\n%d inserted in to the tree  .");
        return;
    }
    struct node*currentnode, *parentnode;
    currentnode = root;
    while (currentnode!=NULL)
    {
        parentnode = currentnode;
        if (currentnode->data > nw->data)
            currentnode =currentnode->left;
        
        else if (currentnode->data < nw->data)
            currentnode=currentnode->right;
    }
    if (parentnode->data > nw->data)
        parentnode->left = nw;
    else if (parentnode->data < nw->data)
        parentnode->right = nw;

    printf("\n %d inserted in to the tree. ");
}

void inorder(struct node *root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d,",root->data);
        inorder(root->right);
    }
    
}
void preorder(struct node *root)
{
    if (root!=NULL)
    {
        printf("%d,",root->data);
        preorder(root->left);
        preorder(root->right);
    }

   
}
void postorder(struct node *root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ,",root->data);
    }
    
}
void main()
{
    root = NULL;
    int n;
    while (1)
    {
    printf ("\n BST operations :");
    printf("\n1.create\n2.insert\n3.inordertravsal \n 4.preorder travasal\n5.postorder travasal\nexit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:create();break;
        case 2:create();break;
        case 3:printf("\n inorder traversal :");inorder(root); break;
        case 4:printf("\npreorder traversal ;");preorder(root);break;
        case 5:printf("\npostorder traversal :");postorder(root);break;
        case 6:return;break;
        default : printf("\nnvalid option !");break;
    }
    }

}