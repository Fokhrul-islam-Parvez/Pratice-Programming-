
#include<stdio.h>
#include<conio.h>
#define mx 5
int insert();
int del();
int disp();
int queue[mx];
int f=-1;
int r=-1;
int a=0,b=0;
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
    if(r==mx-1)
    {
        if(f!=0)
        { int i,nu;
           for(i=0;i<f;i++)
           {
               int nu;
               printf("Enter Inserting Number: ");
               scanf("%d",&nu);
               queue[i]=nu;
           }
           f=0;
           b=1;
          return;
        }
        else
        {
           printf("\nQueue is Full\n\n");
           return;
        }
    }
    int num;
    printf("Enter Inserting Number: ");
    scanf("%d",&num);
   if(f==-1)
        f=0;
   r++;
   queue[r]=num;
}
int del()
{
    if(r==-1 || f==r+1)
    {
        printf("\nQueue is Empty\n\n");
        return;
    }
    if(b==1)
    {
        f=a;
    }
    int num;
    num=queue[f];
    f++;
    printf("\n%d has deleted\n",num);
    a=f-1;
}

int disp()
{
      if(r==-1 || f==r+1)
    {
        printf("\nQueue is Empty\n\n");
        return;
    }
    int i;
     printf("\n_.-._.-._.-._.-._.-_.-._.-._.-._\n\n");
     if(b==1)
     {
     for(i=0;i<a;i++)
    {

        printf("%d\n",queue[i]);
    }
     }
    for(i=f;i<=r;i++)
    {

        printf("%d\n",queue[i]);
    }

    printf("_.-._.-._.-._.-._.-_.-._.-._.-._\n");
}
