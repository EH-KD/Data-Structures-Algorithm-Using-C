// Pattern searching 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],pat[20],q[20];
    int i, n , lens,lenp, count=0;
    printf("\n Enter a senetence :");
    gets(str);
    printf("Enter the pattern to search :");
    gets(pat);
    lens= strlen(str);
    lenp = strlen(pat);

printf("\n%d",lens);

for(i =0;i<=lens-lenp;i++)
{
strncpy(q,str+i,lenp);
printf("\n%d . %s",i,q);
if (strcmp(q,pat)==0)
{
printf("\n%s found at the position %d.",pat,i);
count ++;
break;
}
}
if (count == 0)
    printf("%s not found on the sentence .",pat);
}