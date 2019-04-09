#include<stdio.h>
#include<stdlib.h>
struct address
{
    char name[30];
    char id[30];
    char dep[30];
    char semes[10];
    char batch[20];
}student;
struct addbooks
{
    char bname[30];
    char authorname[30];
    char price[30];
    char shelfnumber[30];
};
struct addbooks book1;
int n1;
int addbook();
int deletebook();
int search();
int issu();
int view();
int edit();
int mainmenu();
int math();
int engineering();
int electronic();
int management();
int main()
{
    printf("\n                                       WELCOME TO LIBRARY MANAGEMENT SYSTEM\n");
    printf("                                     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    FILE *fp;
    fp=fopen("student.txt","a");
    {
        printf("\nEnter Your Information For Registration\n");
        printf("=======================================\n");
        printf("Name: ");
        gets(student.name);
        printf("Id: ");
        gets(student.id);
        printf("Department: ");
        gets(student.dep);
        printf("Semester: ");
        gets(student.semes);
        printf("Batch: ");
        gets(student.batch);
        fwrite(&student,sizeof(student),1,fp);
        fprintf(fp,"\n");
        printf("=================================\n");
        printf("Complete Your Registration\n");
    }
    fclose(fp);
    mainmenu();
   return 0;
}
int mainmenu()
{
     int t;
    while(t=1)
    {
    int n;
    printf("\n%%%%%%%%%%%%%%%%%%%%%%  MAIN MENU  %%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("        ::: 1. Add Books\n");
    printf("        ::: 2. Delete Books\n");
    printf("        ::: 3. Search Books\n");
    printf("        ::: 4. Issue Books\n");
    printf("        ::: 5. View Books\n");
    printf("        ::: 6. Edit Books\n");
    printf("        ::: 7. Close Application\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choice:  ");
    scanf("%d",&n);
    /*switch(n)
    {
    case 1:
        addbook();
        break;
    case 2:
        deletebook();
        break;
    case 3:
        search();
        break;
    case 4:
        issu();
        break;
    case 5:
        view();
        break;
    case 6:
        edit();
        break;
    case 7:
        return 0;
        break;
    default:
       {
           printf("Invalid Entry\n");
           break;
       }

     }*/
    }
   return 0;
}
