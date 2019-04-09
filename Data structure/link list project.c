#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
     c.X=x;
     c.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
struct node
{
    char name[30];
    char id[20];
    char dep[30];
    char phn[30];
    int x;
    struct node *next;
};
int create(struct node * link);
int display(struct node* head);
int del_ete(struct node * del);
int b;
int main()
{
     system("color 47");
    struct node* start;
    start=(struct node *)malloc(sizeof(struct node));
    int t;
    gotoxy(40,2);
    printf("   REGISTRATION OPERATION\n");
    while(t=1)
    {
        int n=0;
        gotoxy(40,10);
        printf("=============================\n");
        gotoxy(40,11);
        printf("   1----> Student Registration \n");
        gotoxy(40,12);
        printf("   2----> Display Student List\n");
         gotoxy(40,13);
        printf("   3----> Exit\n");
        gotoxy(40,14);
        printf("=============================\n");;
        gotoxy(40,16);
        printf("Enter Your Choice:  ");
        scanf("%d",&n);
       switch(n)
        {
        case 1:
            system("cls");
            create(start);
            break;
        case 2:
            system("cls");
            display(start);
            break;
        case 3:
            {
            gotoxy(40,20);
            printf("Exit Operation\n");
            free(start);
            exit(2);
            }
        default:
            system("cls");
             gotoxy(40,20);
            printf("Invalid Entry\n");
            n=0;
            break;
        }
    }
    free(start);
    return 0;
}
int create(struct node * link)
{
    gotoxy(40,9);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(40,10);
    printf("        Enter Student Name: ");
    //gets(link->name);
    scanf("%s",link->name);
    gotoxy(40,11);
    printf("          Enter Student Id: ");
    //gets(link->id);
    scanf("%s",link->id);
    gotoxy(40,12);
    printf("  Enter Student Department: ");
    //gets(link->dep);
    scanf("%s",link->dep);
    gotoxy(40,13);
    printf("Enter Student Phone Number: ");
    //gets(link->phn);
    scanf("%s",link->phn);
    gotoxy(40,14);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(40,15);
    printf("Registration Complete\n");
    gotoxy(40,16);
    printf("Registration Any More( 1 / 0): ");
    scanf("%d",&link->x);
    system("cls");
    if(link->x==0)
        {
            link->next=NULL;
        }

    else
    {
        link->next=(struct node *)malloc(sizeof(struct node));
        create(link->next);
    }
    return 0;
}
int display(struct node * head)
{
    int i=9;
    struct node* localhead;
    localhead=head;
    gotoxy(40,7);
    printf("     Registration Student List\n");
    gotoxy(40,8);
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    while(localhead->name!=NULL)
    {
         i++;
        gotoxy(40,i);
     printf("             Name: ");
     printf("%s\n",localhead->name);
     i++;
     gotoxy(40,i);
     printf("       Student Id: ");
     printf("%s\n",localhead->id);
      i++;
     gotoxy(40,i);
     printf("       Department: ");
     printf("%s\n",localhead->dep);
      i++;
     gotoxy(40,i);
     printf("     Phone Number: ");
     printf("%s\n",localhead->phn);
      i++;
     gotoxy(40,i);
     printf("\n");
    localhead=localhead->next;
    }
     i++;
      gotoxy(40,i);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     i++;
      gotoxy(40,i);
    printf("Back to Main Menu Enter any key: ");
    getch();
      system("cls");
    main();

    return 0;
}
