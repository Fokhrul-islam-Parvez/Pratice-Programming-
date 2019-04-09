#include<stdio.h>
#define mx 5
struct a1
{
    int a[mx];
    int b;
};
typedef struct a1 a2;
a2 s;
int j=0,k;
int push();
int pop();
int display();
int push();
int pop();
int display();
int main()
{
    int j=0;
    printf ("\n     QUEUE OPERATION\n");
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
    printf("\n Do you want to continue ? (Type 0 or 1): ");
    int b;
    scanf("%d",&b);
    if(b==1)
        push();
 return 0;
}
int pop()
{
    if(s.b==-1)
        printf("Queue is Empty\n");
  else
  {
      int i,a1=s.b;
     printf("Poped element is = %d\n",s.a[0]);
  for(i=0;i<a1-j;i++)
    s.a[i]=s.a[i+1];
  j++;
  }
}
int display()
{
    if(s.b==-1)
        printf("Queue is Empty\n");
    else
    {
        int i;
    for(i=0;i<mx-j;i++)
        printf("%d\n",s.a[i]);
    }
 return 0;
}
