#include<stdio.h>
#define mx 5
int insert();
int del();
int display();
int v[mx];
int f=-1;
int r=-1;
int main()
{
    int choice,t;
    while(t=1)
        {
    printf("1.---> Insert\n");
    printf("2.---> Delete\n");
    printf("3.---> Display\n");
    printf("4.---> Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        del();
        break;
    case 3:
        display();
        break;
    case 4:
        return;
    default:
        printf("Invalid Entry\n");
    }
        }
 return 0;
}
int insert()
{
    if(r==mx-1)
        {
        printf("Queue is Full\n");
        return 0;
        }
    if(f==-1)
    {
        f=0;
    }
    int element;
    printf("Enter Your Inserting Number : ");
    scanf("%d",&element);
    r++;
    v[r]=element;
}
int del()
{
    if(f==-1)
    {
        printf("\nQueue is Empty\n");
        return ;
    }
    int element;
    element=v[f];
    printf("%d has Deleted\n",element);
    f++;
}

int display()
{
      if(f==-1)
      {
        printf("\nQueue is Empty\n");
        return;
      }
    else
    {
        int i;
        for(i=f;i<=r;i++)
          {
            printf("%d\n",v[i]);
          }
    }
}
