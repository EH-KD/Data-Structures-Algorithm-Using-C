// Postfix expression Evaluation.
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int stack[50], top;

int power(int b, int a)
{
    int i;
    for (i=a;i>0;i++)
    {
        b*=b;
    }
    return b;
}
void push(int n)
{
    top++;
    stack[top]=n;
}
int pop()
{
    int x = stack[top];
    top--;
    return x;
}

void main()
{
    int x , i , n , a,b,c;
    char str[20];
    printf("\n Enter the postfix expression :");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if (isalpha(str[i]))
        {
            printf("\nEnter the value of %c :",str[i]);
            scanf("%d",&x);
            push(x);
        }
        else if (isdigit(str[i]))
        {
            x = str[i]-'0';
            push(x);
        }
        else
        {
            a=pop();
            b=pop();
            switch(str[i])
            {
                case '+':c=a+b;
                break;
                case '-':c = a-b;
                break;
                case '*':c=a*b;
                break;
                case '/':c=a/b;
                break;
                case '%':c=a%b;
                break;
                case '^':c=power(b,a);
                break;
                default :printf("\ninvalid option");
            }
            push(c);
        }

    }
    printf("\n%d is the result of the postfix expression ",stack[top]);
printf("\n");
}
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max_size 20

int stack[max_size];
int top = -1;

void push(int n) {
    if (top >= max_size - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = n;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return 0;
    }
    return stack[top--];
}

int main() {
    char str[50];
    int n, i, val1, val2, result;

    printf("Enter the postfix expression: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            printf("Enter the value of %c: ", str[i]);
            scanf("%d", &n);
            push(n);
        } else if (isdigit(str[i])) {
            push(str[i] - '0');
        } else {
            val2 = pop();
            val1 = pop();
            switch (str[i]) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/':
                    if (val2 == 0) {
                        printf("Division by zero error\n");
                        return 1;
                    }
                    result = val1 / val2;
                    break;
                case '%':
                    if (val2 == 0) {
                        printf("Modulo by zero error\n");
                        return 1;
                    }
                    result = val1 % val2;
                    break;
                default:
                    printf("Unknown operator %c\n", str[i]);
                    return 1;
            }
            push(result);
        }
    }

    printf("The result of the postfix expression is: %d\n", stack[top]);
    return 0;
}

*/