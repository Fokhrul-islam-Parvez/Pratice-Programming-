#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int inf;
    struct stack *next;
};
int addstack(struct stack* link);
int print(struct stack* head);
int main()
{
    struct stack *head;
    head=(struct stack *)malloc(sizeof(struct stack));
    print(head);
     addstack(head);
    free(head);
    return 0;
}
int addstack(struct stack* link)
{
    printf("Enter Your Element [if -1 for Exit]\n");
    scanf("%d",&link->inf);
    if(link->inf==-1){
        link->next=NULL;
        free(link->next);
    }
    else
    {
        link->next=(struct stack *)malloc(sizeof(struct stack));
        addstack(link->next);
    }
    return 0;
}
int print(struct stack* head)
{

    struct stack* localhead;
    localhead=head;
    while(localhead->next!=NULL)
    {
        printf("%d\n",localhead->inf);
        localhead=localhead->next;
    }
    return 0;
}
