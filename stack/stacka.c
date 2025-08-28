// Stack using array.

#include <stdio.h>

int stack[100];

int n , x , top;

void push()
{
    if (top == x-1)
    {
        printf("\n Stack Overflow!");
        return ;
    }
    printf("\n Enter the data to be added to the stack :");
    scanf("%d",&n);
    printf("\n %d added to the stack.",n);
    top ++;
    stack[top]= n;
}
void pop()
{
    if (top == -1)
    {
        printf("\n Stack Underflow!");
        return;
    }
    printf("\n%d popped from the stack.",stack[top]);
    top --;
}

void display()
{
 if (top == -1)
 {
    printf("\n Stack is empty !");
    return;
 }
int i;
printf("\n Stack Elements Are :");
for (i=top;i>=0;i--)
{
    printf("%d ",stack[i]);
}
}
void main ()
{
    top = -1;
    printf("\n Enter the size of the stack :");
    scanf("%d",&x);
    while(1)
    {
        printf("\n Stack operations \n -----------------\n");
        printf("\n1.push \n2.pop\n3.display\n4.exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
        pop();break;
        case 3: display();break;
        case 4:return;
        break;
        default:printf("\n Invalid choice ");
            break;
        }
    }
}