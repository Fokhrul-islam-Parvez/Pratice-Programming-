#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
void aftermain();
char dpassword[20]={"123456789"};
struct mydiary
{
    char date[10];
    char time[20];
    char place[20];
    char note[200];
}diary;
void insert()
{
    char e[10];
   /* time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "Current local time and date: %s", asctime (timeinfo) );*/
    FILE *fp;
    fp = fopen("Record.txt", "a");
    gets(e);
    printf("\nEnter date (--/--/--) : ");
    gets(diary.date);
   // scanf("%s",diary.date);
    printf("           Enter time : ");
    gets(diary.time);
   // scanf("%s",diary.time);
    printf("          Enter place : ");
    gets(diary.place);
    //scanf("%s",diary.place);
    printf("      Enter Your Note : ");
    gets(diary.note);
    //scanf("%s",diary.note);
    fwrite(&diary, sizeof(diary), 1, fp);
    fclose(fp);
    printf("\n===== Insert Any more ? (1/0) ===== :  ");
    int c;
    scanf("%d",&c);
    if(c==1)
    insert();
}
void disp()
{
    FILE *fp1;
    fp1 = fopen("Record.txt", "r");
    if(fread(&diary, sizeof(diary), 1, fp1)==1)
    {
         printf("\n==========================\n");
        fseek(fp1,0,0);
    while (fread(&diary, sizeof(diary), 1, fp1)==1)
         {
                printf("     Date :");
                printf("%s\n",diary.date);
                printf("     Time :");
                printf("%s\n",diary.time);
                printf("    Place :");
                printf("%s\n",diary.place);
                printf("     Note :");
                puts(diary.note);
                printf("\n");
          }
    printf("==========================\n");
    }
    else
    {
        printf("There is no Record\n");
    }
    fclose(fp1);
}
void search()
{
    char searchdate[30];
    FILE *fp2;
        fp2 = fopen("Record.txt", "r");
        if(fread(&diary, sizeof(diary), 1, fp2)==1)
         {
              fseek(fp2,0,0);
        printf("\nEnter Your Search Note Date (--/--/--): ");
        scanf("%s",searchdate);
    while (fread(&diary, sizeof(diary), 1, fp2)==1)
        {
         if(strcmp(searchdate, diary.date)==0)
         {
            printf("==========================\n");
                printf(" Date :");
                printf("%s\n",diary.date);
                printf(" Time :");
                printf("%s\n",diary.time);
                printf("Place :");
                printf("%s\n",diary.place);
                printf(" Note :");
                puts(diary.note);
            printf("==========================\n");
                break;
         }
         else
         {
             printf("Date does not Match\n");
         }
        }
         }
         else
    {
        printf("There is no Record\n");
    }
    fclose(fp2);
    printf("\n===== Search Any more ? (1/0) ===== :  ");
    int c;
    scanf("%d",&c);
    if(c==1)
    search();
 }
void deletefile()
{
    char deletedate[20];
    FILE *fpo;
    FILE *fpt;
     fpo=fopen("Record.txt","r");
    fpt=fopen("record1.txt","w");
      if(fread(&diary, sizeof(diary), 1, fpo)==1)
         {
              fseek(fpo,0,0);
    printf("Enter the date you want to delete (--/--/--) :");
    scanf("%s",deletedate);
    while (fread(&diary, sizeof(diary), 1, fpo)==1)
    {
        fwrite(&diary, sizeof(diary), 1, fpt);
    }
    fclose(fpt);
    fclose(fpo);
    fpo=fopen("Record.txt","w");
    fpt=fopen("record1.txt","r");
    while (fread(&diary, sizeof(diary), 1, fpt)==1)
    {
        if(strcmp(deletedate,diary.date)==0)
        {
            continue;
        }
        fwrite(&diary, sizeof(diary), 1, fpo);
    }
    printf("\nDelete Successfully\n");
         }
         else
    {
        printf("There is no Record\n");
    }
     fclose(fpt);
    fclose(fpo);
     printf("\n===== Delete Any more ? (1/0) ===== :  ");
    int c;
    scanf("%d",&c);
    if(c==1)
    deletefile();
}
int main()
{
    system("color A");
    printf("\n\t\t\t\t\tPERSONAL DIARY\n");
    printf("\t\t\t\t===============================\n");
    char ch;
    int i=0;
    char  password[20];
           printf("\n\nEnter User Password: ");
            while(1)
            {
                ch=getch();
                if(i==15)
                    break;
                if(ch==ENTER)
                {
                    password[i]='\0';
                    break;
                }
                else if(ch==BKSP)
                {
                    if(i>0)
                    {
                        i--;
                        printf("\b \b");
                    }
                }
                else if(ch==TAB || ch==SPACE)
                {
                    continue;
                }
                else
                {
                    password[i]=ch;
                    i++;
                    printf("*");
                }

            }
            if(strcmp(password,dpassword)==0)
                aftermain();
            else
            {
                printf("\n\nPassword did not Match\n Try Again\n\n");
                main();

            }
}
void aftermain()
{
    system("color A");
    int i,c, emp;
    while(i=1)
        {
            printf("\n\n======= MAIN MENU =======\n");
            printf("\t1. INSERT\n\t2. DISPLAY\n\t3. SEARCH");
            printf("\n\t4. DELETE\n");
            printf("\t5. EXIT");
            printf("\n==========================\n");
            printf("Enter your choice: ");
            scanf("%d", &c);
            printf("\n");
            switch (c)
                {
                    case 1:
                        insert();
                        break;
                    case 2:
                          disp();
                        break;
                    case 3:
                        search();
                        break;
                   case 4:
                        deletefile();
                        break;
                    case 5:
                        exit(1);
                        break;
                    default:
                        printf("\nYour choice is wrong\nPlease try again...\n");
                        break;
                }
        }
}
