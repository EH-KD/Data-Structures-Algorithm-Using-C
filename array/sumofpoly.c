// Find the Sum of Polynomials.

#include <stdio.h>

int reader(int arr[],int n)
{
for (int i =n; i>=0 ;i--)
{
    printf("\tEnter the coefficient of x^%d : ",i);
    scanf("%d",&arr[i]);
}
}
void display(int arr[], int n)
{
    for (int i=n ; i>0;i--)
    {
        if (arr[i]!=0)
            printf("%d^%d + ",arr[i],i);
        
    }
    if (arr[0]!=0)
        printf("%d = 0",arr[0]);
    else 
        printf("\b = 0");
    printf("\n");
}
int main()
{
int n , m , a[20],b[20],c[20], i , k;
printf("\n Enter the degree of the first polynomial : ");
scanf("%d",&n);
reader(a,n);
printf("\n Enter the degree of the second polynomial : ");
scanf("%d",&m);
reader(b, m);
if (n > m )
    k =n;
else 
    k = m;
for (i = k ;i>=0;i--)
{
    c[i]=a[i]+b[i];
}
printf("\n First polynomial :");
display(a,n);
printf("\n Second polynomial :");
display(b,n);
printf("\n Sum of the polynomial : ");
display(c,n);
}