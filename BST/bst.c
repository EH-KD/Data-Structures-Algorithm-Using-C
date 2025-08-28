//  Binary search Tree  in Inorder.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

struct node* createnode() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->left = newnode->right = NULL;
    return newnode;
}

void insert() {
    struct node *newnode = createnode();
    if (root == NULL) {
        root = newnode;
        return;
    }

    struct node *current = root;
    struct node *parent = NULL;

    while (current != NULL) {
        parent = current;
        if (newnode->data < current->data)
            current = current->left;
        else
            current = current->right;
    }

    if (newnode->data < parent->data)
        parent->left = newnode;
    else
        parent->right = newnode;
}
void inorder(struct node *node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}
int main() {
    int choice;
    root = NULL;

    do {
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
        insert();break;
        case 2:
        inorder(root);
        break;
        case 3:
        return 0;break;
        default :printf("Invalid  option !.");
        }
    } while (1);

    return 0;
}

