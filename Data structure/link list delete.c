#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * next;
};
int insert(struct node * link);
int deletenode(struct node * link3);
int display(struct node * link1);
 struct node * head;

int main()
{
    head=(struct node *)malloc(sizeof(struct node));
    int t;
   while(t=1)
    {
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    printf("Enter Your Choice: ");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insert(head);
        break;
    case 2:
        deletenode(head);
       break;
    case 3:
        display(head);
        free(head);
        break;
    case 4:
        free(head);
        exit(1);
    default :
        printf("Invalid Entry\n");
    }
    }
     free(head);
}
int insert(struct node *link)
{
    int n,b;
    printf("Enter Your Insert Number: ");
    scanf("%d",&n);
    link->info=n;
    printf("Insert Any More (1/0): ");
    scanf("%d",&b);
    if(b==0)
    {
        link->next=NULL;
    }
    else
    {
         link->next=(struct node *)malloc(sizeof(struct node));
         insert(link->next);
    }
return 0;
}
int display(struct node *link1)
{
    struct node * local;
     struct node * local2=link1;
    local=link1;
    while(local->next!=NULL)
    {
        printf("%d\n",local->info);
        local=local->next;
    }
    return 0;
}
int deletenode(struct node * link3)
{
    printf("Enter Delete Position: ");
    int p;
    scanf("%d",&p);
    if(p==1)
    {
        head=link3->next;
        free(link3->next);
    }
    else
    {
        int i;
        for(i=1;i<p-2;i++)
            link3=link3->next;
        struct node * link4=link3->next;
        link3=link4->next;
        free(link4);
    }
}
