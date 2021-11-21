#include <stdio.h>
#include <string.h>
#define max 100
int top,stack[max];

void push(char x)
{
    if(top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        stack[++top]=x;
    }
}
void pop()
{
    printf("%c",stack[top--]);
}
void main()
{   char str[30];
    printf("Enter the word which u want to reverse:");
    scanf("%[^\n]",str);
    int i;
    int len=strlen(str);
 
    for(i=0;i<len;i++)
    {
        push(str[i]);
    }
      for(i=0;i<len;i++)
    {
        pop();
    }

}

// Enter the word which u want to reverse:ashwinth
// htniwhsa