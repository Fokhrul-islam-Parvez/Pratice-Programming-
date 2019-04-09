#include<stdio.h>
#include<conio.h>
#define mx 5;
int insert();
int del();
int disp();
int queue[mx];
int front=-1;
int reare=-1;
int main()
{
    int n,t;
    while(t=1)
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\n Enter Your Choice: ");
        scanf("%d",&t);
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
    int num;
    printf("Enter Insert Element: ");
    scanf("%d",&num);
    if(reare==mx-1)
    {
        printf("Queue is Full"\n);
        return 0;
    }
    if(front==-1)
    {
        front=0;
    }
    reare=reare+1;
    queue[reare]=num;
}
int del()
{
    int num;
    if(front==-1 || front==reare+1)
    {
        printf("Queue Is Empty\n");
        return;
    }
    num=queue[front];
    front++;
    printf("%d has Deleted",num);
}
