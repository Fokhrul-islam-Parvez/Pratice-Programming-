#include<stdio.h>
#define mx 5
struct a1
{
    int a[mx];
    int b;
};
typedef struct a1 a2;
a2 s;
int push();
int pop();
int display();
int main()
{
    printf ("\n      STACK OPERATION\n");
    int b,ch;
    s.b=-1;
    while(b=1)
    {
        printf("\n  ----------------------\n");
        printf("     1 ----->  PUSH      \n");
        printf("     2 ----->  POP       \n");
        printf("     3 ----->  DISPLAY   \n");
        printf("     4 ----->  EXIT      \n");
        printf("  ----------------------\n");
        printf("\n Please enter your choice:  ");
       scanf("%d",&ch);
       switch (ch)
       {
        case 1:
           push();
           break;
        case 2:
           pop();
           break;
        case 3:
           display();
           break;
        case 4:
        {
           printf("\n Thank you\n");
           return;
        }
       }
    printf("\n Do you want to continue ? (Type 0 or 1): ");
    scanf("%d",&b);
    }
return 0;
}
int push()
{
    int n;
    if(s.b==(mx-1))
        { printf("\n Stack is Full\n");
          return 0;
        }
    else
    {
        printf(" Enter the element to be pushed: ");
        scanf("%d",&n);
        s.b=s.b+1;
        s.a[s.b]=n;
    }
 return 0;
}
int pop()
{
    int n;
    if(s.b==-1)
    {
        printf("\n Stack is Empty\n");
        return 0;
    }
    else
    {
        n=s.a[s.b];
        printf(" poped element is = %d\n",n);
        s.b=s.b-1;
    }
 return 0;
}
int display()
{
    if(s.b==-1)
        printf("\n Stack is empty\n");
    else
    {
       int i;
       for(i=0;i<=s.b;i++)
          printf("  %d\n",s.a[i]);
    }
 printf("\n");
 return 0;
}
