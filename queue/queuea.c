// Queue using Array.

# include <stdio.h>

int queue[100];
int f  , r , i , n , m ;

void enqueue(int n)
{
    if (r == n-1)
    {
        printf("\n Queue Overflow ! \n");
        return;
    }
    printf("\nEnter  the data to be added  to the queue :\n");
    scanf("%d",&m);
    if (f ==  -1)
    {
        f=r=0;
        
    }
    else 
    {
        r++;
        
    }
    queue[r]=m;
}

void dequeue()
{
    n = queue[f];
    if (f == -1)
    {
        printf("\n Queue underflow ! \n ");
    }
    if (f  == r )
    {
        f = r =-1;

    return ;
    }
    
    else{
    f++;
    }
    printf("%d is deleted .",n);
    
}
void display()
{
    for (i = f ; i <= r ;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

void main()
{
    f =r =-1;
    printf("\nEnter the size of the array :\n");
    scanf("%d",&n);
    while (1)  
    {
    printf("\n Queue  operations \n-------------------\n");
    printf("\n1.enqueue \n 2.dequeue\n3.display\n4.exit\n");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        enqueue(n);break;
    case 2: dequeue();break;
    case 3:display();break;
    case 4:return ;
    default:printf(" Invalid option !");
        break;
    }
    }
}