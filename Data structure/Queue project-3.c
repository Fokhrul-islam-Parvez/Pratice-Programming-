#include<stdio.h>
#include<conio.h>
#define mx 5
int insert();
int del();
int disp();
int queue[mx];
int f=-1;
int r=-1;
int main()
{
    int n,t;
    while(t=1)
    {
        printf("______________________________\n");
        printf("1. ---> Insert\n");
        printf("2. ---> Delete\n");
        printf("3. ---> Display\n");
        printf("4. ---> Exit\n");
        printf("______________________________\n");
        printf("Enter Your Choice: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(1);
        default:
            printf("Invalid Entry\n");
            break;
        }
    }
}
int insert()
{
    if((f==0 && r==mx-1) || (f==r+1))
    {
        printf("\nQueue is Full\n\n");
        return;
    }
    if(f==-1)
    {
        f=0;
    }
    if(r==mx-1)
    {
        r=0;
    }
    else
    {
        r++;
    }
    int num;
    printf("Enter Inserting Number: ");
    scanf("%d",&num);
     queue[r]=num;
}
int del()
{
    if(f==-1)
    {
        printf("\nQueue is Empty\n\n");
        return;
    }
    int num;
    num=queue[f];
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else if(f==mx-1)
    {
        f=0;
    }
    else
       f++;
    printf("\n%d has deleted\n",num);
}

int disp()
{
      if(f==-1)
    {
        printf("\nQueue is Empty\n\n");
        return;
    }
    int i;
    i=f;
    if(f<=r)
    {
        while(i<=r)
            printf("%d\n",queue[i++]);
    }
    else
    {
         i=0;

         while(i<=r)
            printf("%d\n",queue[i++]);
        i=f;
        while(i<=mx-1)
            printf("%d\n",queue[i++]);
    }
   return 0;
}
