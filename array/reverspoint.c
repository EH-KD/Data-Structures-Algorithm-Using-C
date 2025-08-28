// Reverse the String using pointers.

#include <stdio.h>
#include  <string.h>

int main()
{
char str[20],t;
char  *p, *q ;
int i;
printf("enter the string :");
gets(str);

int len= strlen(str);
p  = str;
q = str + len-1;

for(i=0;i<len/2;i++)
{
 t= *p;
 *p=*q;
 *q=t;
 p++;
 q--;
}
printf("Reversed string :");
printf("%s",str);
printf("\n");
 return 0;
}