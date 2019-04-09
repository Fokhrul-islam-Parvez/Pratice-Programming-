#include<stdio.h>
#include<string.h>
struct address
{
    char name[30];
    char id[30];
    char dep[30];
    char semes[10];
    char batch[20];
    char password[20];
}student;
int signin();
int signup();
int main()
{   int ca=0;
    printf("\n    1. Sign in\n");
    printf("    2. sign up\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ca);
    switch(ca)
    {
    case 1:
        signin();
        break;
    case 2:
        signup();
        break;
    default:
        printf("Invalid Entry\n");
        break;
    }
    return 0;
}
int signin()
{
    int i;
    char psw[20];
    char passarry[20];
    printf("@@@@@ Password Protected @@@@@\n");
    printf("Enter Password: ");
    scanf("%s",psw);
    FILE *fp;
    fp=fopen("student.txt","r");
     for(i=0;i<100;i++)
    {
        fscanf(fp,"%s",passarry);
        if(passarry==psw)
        {
            fgets(passarry,20,(FILE*)fp);
            printf("Sucessfully Login");
            break;
         }
         else{
            printf("Wrong password\n");
            break;
             }
    }
    fclose(fp);
    main();
    return 0;
}

int signup()
{
    char password[10];
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
        printf("New Password: ");
        gets(student.password);
        fwrite(&student,sizeof(student),1,fp);
        fprintf(fp,"   \n");
        printf("=================================\n");
        printf("Complete Your Registration\n");
    }
    fclose(fp);
   return 0;
}
