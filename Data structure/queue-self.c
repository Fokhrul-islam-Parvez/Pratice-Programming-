#include<stdio.h>
#define mx 5
int insert();
int del();
int disp();
int f=-1;
int r=-1;
int q[mx];
int main()
{
    int t;
    while(t=1)
    {
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter Your Choice : ");
    int choice;
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
        disp();
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

    if( (f==0 && r==mx-1) || f==r+1 )
    {
        printf("Queue is full\n");
        return ;
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
        r++;
         int e;
    printf("Enter Your Insert Element : ");
    scanf("%d",&e);
    q[r]=e;
    return 0;
}
int del()
{
  if(f==-1)
  {
      printf("Queue Is Empty\n");
      return;
  }
  int num;
  num=q[f];
  if( f==r)
  {
      f=-1;
      r=-1;
  }
  else if(f==mx-1)
  {
      f=0;
  }
  else
  {
      f++;
  }
  printf("%d has Deleted",num);
}
int disp()
{
    int i;
    if( f==-1)
    {
      printf("Queue is Empty\n");
      return;
    }
    i=f;
    if(f>=r)
    {
        i=0;
        while(i<=r)
            printf("%d\n",q[i++]);
         i=f;
         while(i<=mx-1)
            printf("%d\n",q[i++]);
    }
    else
    {
        while(i<=r)
            printf("%d\n",q[i++]);
    }
}
