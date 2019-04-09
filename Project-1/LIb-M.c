#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
char r[10];
int issuebook();
int viewissuebook();
int searchissuedbook();
int removeissuedbook();

struct taddress
{
    char tname[30];
    char tid[30];
    char tdep[30];
    char lid[30];
    char tpassword[30];
}teacher;
struct address
{
    char name[30];
    char id[30];
    char dep[30];
    char semes[30];
    char batch[30];
    char password[30];
}student;
struct issuebooklist
{
    char studentname[30];
    char studentid[30];
    char bookname[30];
    char bookid[30];
    char bookcategory[30];
    char issueddate[30];
    char returndate[30];
}is;
int n1;
int addbook();
int deletebook();
int search();
int issue();
int view();
int edit();
int mainmenu();
int usercatagory();
int tea_cher();
int tsignin();
int tregistation();
int idv();
int tremove();
struct book
{
    char name[30];
    char id[30];
    char authorname[30];
    char price[30];
    char selfnumber[30];
}b1;
void gotoxy(int x,int y)
{
    COORD c;
     c.X=x;
     c.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int math();
int engineering();
int electronic();
int management();
int registation();
int signin();
int aftermain();
int main()
{
    system("color 47");
    printf("\n                                       WELCOME TO LIBRARY MANAGEMENT SYSTEM\n");
    printf("                                         DAFFODIL INTERNATIONAL UNIVERSITY\n");
    printf("                                     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
   usercatagory();
    return 0;
}
int usercatagory()
{
    gotoxy(41,10);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,11);
    printf("        ::: 1. Student\n");
     gotoxy(41,12);
    printf("        ::: 2. Teacher\n");
    int ts;
     gotoxy(41,13);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,14);
     printf("Enter Your Choice:  ");
    scanf("%d",&ts);
    system("cls");
    switch(ts)
    {
    case 1:
        aftermain();
        break;
    case 2:
        tea_cher();
        break;
    }
}
int tea_cher()
{

     char ch;
     int n;
    gotoxy(41,10);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,11);
    printf("       ::: 1. Sign in \n");
     gotoxy(41,12);
     printf("       ::: 2. Sign up \n");
     gotoxy(41,13);
     printf("       ::: 3. Exit \n");
     gotoxy(41,14);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,15);
     printf("Enter Your Choice:  ");
     gotoxy(60,15);
     scanf("%d",&n);
     switch(n)
    {
         case 1:
             {
             tsignin();
             return;
             }
             break;
         case 2:
            tregistation();
            return 0;
         case 3:
            return;
         default:
         gotoxy(40,16);
            printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
            return ;
            break;
    }
     gotoxy(40,18);
     printf("Try Again ? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
   tea_cher();
    else
       return;
   return 0;
}
int tsignin()
{
    char r[10];
    gets(r);

            int k=1,l=0,i=0,j;
            char password[30];
            char regname[30];
            char ch;
              gotoxy(41,16);
            //printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              gotoxy(41,17);
            printf("Enter User Name: ");
              gotoxy(62,17);
              gets(regname);
            //scanf("%s",&regname);
             FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                    if(strcmp(teacher.tname,regname)==0)
                    {
                        k=0;
                        l=1;
                        break;
                    }
            }
        fclose(fp);
        if(l==1)
        {
              gotoxy(41,18);
            printf("Enter User Password: ");

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
       // printf("\n%s",password);
            FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                {
                    if(strcmp(teacher.tpassword,password)==0)
                    {
                          gotoxy(41,19);
                         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                           gotoxy(41,20);
                        printf("Log in Successfully\n\n");
                        k=1;
                          gotoxy(41,21);
                        printf("Continue Enter any key:.........");
                          //gotoxy(74,21);
                          getche();
                         system("cls");
                        mainmenu();
                        return 0;
                        break;
                    }
                }
                 }
                fclose(fp);
              }
     if(k==0)
     {
         gotoxy(41,20);
            printf("====================================\n");
            gotoxy(41,21);
               printf("%%%%%%%% The Password Did not Match %%%%%%%%\n");
               gotoxy(41,22);
               printf("====================================\n");
     }
     if(l==0)
     {
        gotoxy(41,20);
         printf("====================================\n");
        gotoxy(41,21);
               printf("%%%%%% The User Name Did not Match %%%%%%\n");
        gotoxy(41,22);
               printf("====================================\n");
     }
      gotoxy(41,24);
             printf(" Try Again ? (1 / 0): ");
               int na;
              scanf("%d",&na);
             system("cls");
               if(na==1)
                tsignin();
               //else
                //aftermain();
            return 0;
}
int tregistation()
{
    char r[10];
 int i=15;
     system("cls");
         gotoxy(41,10);
        printf("Enter a Teacher Information For Registration\n");
         gotoxy(41,11);
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        gets(r);
         gotoxy(41,12);
        printf("Teacher Name: ");
        //scanf("%s",teacher.tname);
        gets(teacher.tname);
         gotoxy(41,13);
        printf("  Teacher Id: ");
        gets(teacher.tid);
        //scanf("%s",teacher.tid);
         gotoxy(41,14);
        printf("  Department: ");
        //scanf("%s",teacher.tdep);
        gets(teacher.tdep);
         gotoxy(41,i);
        printf("  Password: ");
        //scanf("%s",teacher.tpassword);
        gets(teacher.tpassword);
        int cid,a;
        paru:
        i++;
        gotoxy(41,i);
        printf("  Library Id: ");
        //scanf("%s",teacher.lid);
        gets(teacher.lid);
        //teacher.lid=id;
        /*FILE *ft;
        ft=fopen("libraryid.txt","r");
        while(fscanf(ft,"%d",cid)!=0);
        {
            //if(cid==id)
              // break;
            if(cid!=a)
            {
                i++;
                gotoxy(41,i);
                printf( "Wrong Id ...Try again\n");
                goto paru;

            }
            //else
             //   break;


        }
        fclose(ft);*/
    FILE *fp;
    fp=fopen("teacher.txt","a");
        fwrite(&teacher,sizeof(teacher),1,fp);
        i++;
         gotoxy(41,i);
       printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
       i++;
        gotoxy(41,i);
        printf("Complete Your Registration\n");
    fclose(fp);
     i++;
     gotoxy(41,i);
     printf("Continue Enter any key:..............");
     getche();
     mainmenu();
   return 0;
}
int aftermain()
{
     char ch;
     int n;
    gotoxy(40,10);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,11);
    printf("       ::: 1. Sign in\n");
     gotoxy(41,12);
     printf("       ::: 2. Sign up\n");
     gotoxy(41,13);
     printf("       ::: 3. Exit\n");
     gotoxy(40,14);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,15);
     printf("Enter Your Choice:  ");
     gotoxy(60,15);
     scanf("%d",&n);
     switch(n)
    {
         case 1:
             {
             signin();
             return;
             }
             break;
         case 2:
            registation();
            return 0;
         case 3:
            return;
         default:
         gotoxy(40,16);
            printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
            return ;
            break;
    }
     gotoxy(40,18);
     printf("Try Again ? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
    aftermain();
    else
       return;
   return 0;
}
    int signin()
        {
            char r[10];
            gets(r);
            int k=1,l=0,i=0,j;
            char password[30];
            char regname[30];
            char ch;
              gotoxy(41,16);
            //printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              gotoxy(41,17);
            printf("Enter User Name: ");
              gets(regname);
           // scanf("%s",&regname);
             FILE *fp;
            fp=fopen("student.txt","r");
            {
                while(fread(&student,sizeof(student),1,fp)==1)
                    if(strcmp(student.name,regname)==0)
                    {
                        k=0;
                        l=1;
                        break;
                    }
            }
        fclose(fp);
        if(l==1)
        {
              gotoxy(41,18);
            printf("Enter User Password: ");

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
       // printf("\n%s",password);
            FILE *fp;
            fp=fopen("student.txt","r");
            {
                while(fread(&student,sizeof(student),1,fp)==1)
                {
                    if(strcmp(student.password,password)==0)
                    {
                          gotoxy(41,19);
                         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                           gotoxy(41,20);
                        printf("Log in Successfully\n\n");
                        k=1;
                          gotoxy(41,21);
                        printf("Continue Enter any key:.........");
                          //gotoxy(74,21);
                          getche();
                         system("cls");
                        mainmenu();
                        return 0;
                        break;
                    }
                }
                 }
                fclose(fp);
              }
     if(k==0)
     {
         gotoxy(41,20);
            printf("====================================\n");
            gotoxy(41,21);
               printf("%%%%%%%% The Password Did not Match %%%%%%%%\n");
               gotoxy(41,22);
               printf("====================================\n");
     }
     if(l==0)
     {
        gotoxy(41,20);
         printf("====================================\n");
        gotoxy(41,21);
               printf("%%%%%% The User Name Did not Match %%%%%%\n");
        gotoxy(41,22);
               printf("====================================\n");
     }
      gotoxy(41,24);
             printf(" Try Again ? (1 / 0): ");
               int na;
              scanf("%d",&na);
             system("cls");
               if(na==1)
                signin();
               //else
                //aftermain();
            return 0;
}

int registation()
{
    gets(r);
     system("cls");
    FILE *fp;
    fp=fopen("student.txt","a");
    {
         gotoxy(41,10);
        printf("Enter Your Information For Registration\n");
         gotoxy(41,11);
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
         gotoxy(41,12);
        printf("Name: ");
        //scanf("%s",student.name);
        gets(student.name);
         gotoxy(41,13);
        printf("Id: ");
        gets(student.id);
        //scanf("%s",student.id);
         gotoxy(41,14);
        printf("Department: ");
        //scanf("%s",student.dep);
        gets(student.dep);
         gotoxy(41,15);
        printf("Semester: ");
        //scanf("%s",student.semes);
        gets(student.semes);
         gotoxy(41,16);
        printf("Batch: ");
       // scanf("%s",student.batch);
        gets(student.batch);
         gotoxy(41,17);
        printf("Password: ");
       // scanf("%s",student.password);
        gets(student.password);
        fwrite(&student,sizeof(student),1,fp);
         gotoxy(41,18);
       printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,19);
        printf("Complete Your Registration\n");
    }
    fclose(fp);
     gotoxy(41,20);
     printf("Continue Enter any key:..............");
     getche();
     mainmenu();
   return 0;
}

int mainmenu()
{
     system("cls");
     int t;
    while(t=1)
    {
    int n;
     gotoxy(41,10);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%  MAIN MENU  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,11);
    printf("          ::: 1. Add Books\n");
    gotoxy(41,12);
    printf("          ::: 2. Delete Books\n");
    gotoxy(41,13);
    printf("          ::: 3. Search Books\n");
    gotoxy(41,14);
    printf("          ::: 4. Issue Books\n");
    gotoxy(41,15);
    printf("          ::: 5. View Book List\n");
    gotoxy(41,16);
    printf("          ::: 6. Edit Books Record\n");
    gotoxy(41,17);
    printf("          ::: 7. Close Application\n");
    gotoxy(41,18);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,19);
    printf("Enter Your Choice:  ");
    scanf("%d",&n);
     system("cls");
    switch(n)
    {
    case 1:
        addbook();
        break;
    case 2:
        idv();
        break;
    case 3:
        search();
        break;
    case 4:
        issue();
        return;
        break;
    case 5:
        view();
        break;
    case 6:
        edit();
        break;
    case 7:
        return;
        break;
    default:
       {
           gotoxy(41,20);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,21);
         printf("Try again enter any key: ");
         getch();
         system("cls");
          mainmenu();
           break;
       }
     }
   }
   return 0;
}





int addbook()
{
     system("cls");
      gotoxy(41,10);
    printf("%%%%%%%%%%%%%% SELECT ADD BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
     gotoxy(41,11);
    printf("          ::: 1. Mathematics\n");
     gotoxy(41,12);
    printf("          ::: 2. Engineering\n");
     gotoxy(41,13);
    printf("          ::: 3. Electronic\n");
     gotoxy(41,14);
    printf("          ::: 4. Management\n");
     gotoxy(41,15);
    printf("          ::: 5. Back to Main Menu\n");
     gotoxy(41,16);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,17);
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        math();
        break;
    case 2:
        engineering();
        break;
    case 3:
        electronic();
        break;
    case 4:
        management();
        break;
    case 5:
        mainmenu();
        break;
   default:
       {
           gotoxy(41,20);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,21);
         printf("Try again enter any key: ");
         getch();
         system("cls");
          addbook();
       }
          break;
    }

 return 0;
}

int math()
{
    gets(r);
     system("cls");
      gotoxy(41,10);
    printf("ENTER ADD BOOK INFORMATION\n");
     gotoxy(41,11);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,12);
    printf("      Book Name: ");
    //scanf("%s",b1.name);
    gets(b1.name);
    gotoxy(41,13);
    printf("        Book Id: ");
  // scanf("%s",b1.id);
   gets(b1.id);
    gotoxy(41,14);
    printf("    Author Name: ");
   // scanf("%s",b1.authorname);
   gets(b1.authorname);
   gotoxy(41,15);
     printf("     Book Price: ");
   // scanf("%s",b1.price);
     gets(b1.price);
      gotoxy(41,16);
     printf("   Shelf Number: ");
    //scanf("%s",b1.selfnumber);
     gets(b1.selfnumber);
     gotoxy(41,17);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    FILE *fp1;
    fp1=fopen("math.txt","a");
    {
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
     gotoxy(41,18);
    printf("The record is sucessfully saved\n\n");
    n1=0;
     gotoxy(41,19);
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    system("cls");
    if(id==1)
    addbook();
   // else
    //    mainmenu();
    return 0;
}



int engineering()
{
    gets(r);
     system("cls");
    FILE *fp1;
    fp1=fopen("engineering.txt","a");
    {
         gotoxy(41,10);
    printf("ENTER ADD BOOK INFORMATION\n");
     gotoxy(41,11);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,12);
    printf("      Book Name: ");
    //scanf("%s",b1.name);
    gets(b1.name);
    gotoxy(41,13);
    printf("        Book Id: ");
   //scanf("%s",b1.id);
   gets(b1.id);
    gotoxy(41,14);
    printf("    Author Name: ");
    //scanf("%s",b1.authorname);
   gets(b1.authorname);
    gotoxy(41,15);
     printf("     Book Price: ");
   // scanf("%s",b1.price);
     gets(b1.price);
      gotoxy(41,16);
     printf("   Shelf Number: ");
   // scanf("%s",b1.selfnumber);
    gets(b1.selfnumber);
     gotoxy(41,17);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
     gotoxy(41,18);
   printf("The record is successfully saved\n\n");
    n1=0;
     gotoxy(41,19);
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
     system("cls");
    if(id==1)
    addbook();
   // else
     //   mainmenu();
    return 0;
}



int electronic()
{
    gets(r);
    system("cls");
    FILE *fp1;
    fp1=fopen("electronic.txt","a");
    {
         gotoxy(41,10);
     printf("ENTER ADD BOOK INFORMATION\n");
      gotoxy(41,11);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,12);
    printf("      Book Name: ");
   // scanf("%s",b1.name);
    gets(b1.name);
    gotoxy(41,13);
    printf("        Book Id: ");
  // scanf("%s",b1.id);
   gets(b1.id);
    gotoxy(41,14);
    printf("    Author Name: ");
    //scanf("%s",b1.authorname);
   gets(b1.authorname);
    gotoxy(41,15);
     printf("     Book Price: ");
   // scanf("%s",b1.price);
     gets(b1.price);
      gotoxy(41,16);
     printf("   Shelf Number: ");
    //scanf("%s",b1.selfnumber);
     gets(b1.selfnumber);
     gotoxy(41,17);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
     gotoxy(41,18);
    printf("The record is successfully saved\n\n");
    n1=0;
     gotoxy(41,19);
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
     system("cls");
    if(id==1)
    addbook();
    //else
     //   mainmenu();
    return 0;
}



int management()
{
    gets(r);
    system("cls");
    FILE *fp1;
    fp1=fopen("management.txt","a");
    {
         gotoxy(41,10);
   printf("ENTER ADD BOOK INFORMATION\n");
    gotoxy(41,11);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,12);
    printf("      Book Name: ");
    //scanf("%s",b1.name);
    gets(b1.name);
    gotoxy(41,13);
    printf("        Book Id: ");
  // scanf("%s",b1.id);
   gets(b1.id);
    gotoxy(41,14);
    printf("    Author Name: ");
   // scanf("%s",b1.authorname);
   gets(b1.authorname);
    gotoxy(41,15);
     printf("     Book Price: ");
    //scanf("%s",b1.price);
     gets(b1.price);
      gotoxy(41,16);
     printf("   Shelf Number: ");
    //scanf("%s",b1.selfnumber);
    gets(b1.selfnumber);
     gotoxy(41,17);
   printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
     gotoxy(41,18);
     printf("The record is successfully saved\n\n");
    n1=0;
     gotoxy(41,19);
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
     system("cls");
    if(id==1)
    addbook();
    else
        mainmenu();
    return 0;
}

int view()
{
    system("cls");
    int n1;
    FILE *fp;
     gotoxy(41,10);
    printf("%%%%%%%%%%%%%% SELECT VIEW BOOKS CATEGOLES %%%%%%%%%%\n");
     gotoxy(41,11);
    printf("        ::: 1. Mathematics\n");
     gotoxy(41,12);
    printf("        ::: 2. Engineering\n");
     gotoxy(41,13);
    printf("        ::: 3. Electronic\n");
     gotoxy(41,14);
    printf("        ::: 4. Management\n");
     gotoxy(41,15);
    printf("        ::: 5. Back to Main Menu\n");
     gotoxy(41,16);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,17);
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    //system("cls");
     switch(n1)
    {
    case 1:
       {
           int i=12;
           system("cls");
           fp=fopen("math.txt","r");
           if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
                gotoxy(41,10);
                printf("         VIEW MATHEMATICS BOOKS LIST           \n");
                 gotoxy(41,11);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               while(fread(&b1,sizeof(b1),1,fp)==1)
               {
                    gotoxy(41,i);
               printf("           book name: %s\n",b1.name);
               i++;
                gotoxy(41,i);
               printf("             Book id: %s\n",b1.id);
               i++;
                gotoxy(41,i);
               printf("    book Author name: %s\n",b1.authorname);
               i++;
                gotoxy(41,i);
               printf("          book Price: %s\n",b1.price);
               i++;
                gotoxy(41,i);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               i++;
                gotoxy(41,i);
               printf("   \n");
               i++;
           }
            gotoxy(41,i);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           fclose(fp);
           }
        else
           {
                gotoxy(41,10);
               printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
           }
           i++;
            gotoxy(41,i);
            printf("View any more? (1 / 0): ");
            int id;
           scanf("%d",&id);
           system("cls");
           if(id==1)
             view();
        //   else
        //    mainmenu();
       }
        break;
    case 2:
         {
             int i=12;
             system("cls");
           fp=fopen("engineering.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
                gotoxy(41,10);
                printf("         VIEW ENGINEERING BOOKS LIST           \n");
                 gotoxy(41,11);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           while(fread(&b1,sizeof(b1),1,fp)==1)
               {
                    gotoxy(41,i);
               printf("           book name: %s\n",b1.name);
               i++;
                gotoxy(41,i);
               printf("             Book id: %s\n",b1.id);
               i++;
                gotoxy(41,i);
               printf("    book Author name: %s\n",b1.authorname);
               i++;
                gotoxy(41,i);
               printf("          book Price: %s\n",b1.price);
               i++;
                gotoxy(41,i);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               i++;
                gotoxy(41,i);
               printf("   \n");
               i++;
           }
            gotoxy(41,i);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           fclose(fp);
           }
        else
           {
                gotoxy(41,10);
               printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
           }
           i++;
            gotoxy(41,i);
            printf("View any more? (1 / 0): ");
            int id;
            scanf("%d",&id);
            system("cls");
            if(id==1)
              view();
           else
              mainmenu();
        }
         break;
    case 3:
        {
            int i=12;
            system("cls");
           fp=fopen("electronic.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
                gotoxy(41,10);
           printf("         VIEW ELECTRONIC BOOKS LIST           \n");
            gotoxy(41,11);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             while(fread(&b1,sizeof(b1),1,fp)==1)
               {
                    gotoxy(41,i);
               printf("           book name: %s\n",b1.name);
               i++;
                gotoxy(41,i);
               printf("             Book id: %s\n",b1.id);
               i++;
                gotoxy(41,i);
               printf("    book Author name: %s\n",b1.authorname);
               i++;
                gotoxy(41,i);
               printf("          book Price: %s\n",b1.price);
               i++;
                gotoxy(41,i);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               i++;
                gotoxy(41,i);
               printf("   \n");
               i++;
           }
            gotoxy(41,i);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           fclose(fp);
           }
        else
           {
                gotoxy(41,10);
               printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
           }
           i++;
            gotoxy(41,i);
            printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
               if(id==1)
                 view();
           //    else
             //    mainmenu();
       }
        break;
    case 4:
         {
             int i=12;
             system("cls");
           fp=fopen("management.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
                gotoxy(41,10);
          printf("         VIEW MANAGEMENT BOOKS LIST           \n");
           gotoxy(41,11);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               while(fread(&b1,sizeof(b1),1,fp)==1)
               {
                    gotoxy(41,i);
               printf("           book name: %s\n",b1.name);
               i++;
                gotoxy(41,i);
               printf("             Book id: %s\n",b1.id);
               i++;
                gotoxy(41,i);
               printf("    book Author name: %s\n",b1.authorname);
               i++;
                gotoxy(41,i);
               printf("          book Price: %s\n",b1.price);
               i++;
                gotoxy(41,i);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               i++;
                gotoxy(41,i);
               printf("   \n");
               i++;
           }
            gotoxy(41,i);
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           fclose(fp);
           }
        else
           {
                gotoxy(41,10);
               printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
           }
           i++;
            gotoxy(41,i);
            printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
                view();
              else
                mainmenu();
        }
          break;
    case 5:
        mainmenu();
        break;
   default:
       {
           gotoxy(41,20);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,21);
         printf("Try again enter any key: ");
         getch();
         system("cls");
         view();
       }
        break;

    }
 return 0;
}
int edit()
{
    system("cls");
    int n1;
      gotoxy(41,10);
     printf("%%%%%%%%%%%%%% SELECT EDIT BOOK CATEGOLES %%%%%%%%%%\n");
       gotoxy(41,11);
    printf("        ::: 1. Mathematics\n");
      gotoxy(41,12);
    printf("        ::: 2. Engineering\n");
      gotoxy(41,13);
    printf("        ::: 3. Electronic\n");
      gotoxy(41,14);
    printf("        ::: 4. Management\n");
      gotoxy(41,15);
    printf("        ::: 5. Back to Main Menu\n");
      gotoxy(41,16);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
       gotoxy(41,17);
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    //system("cls");
    switch(n1)
    {
    case 1:
        {
            gets(r);
             system("cls");
            int k=0;
            FILE *fp;
            fp=fopen("math.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
            char editbook[30];
              gotoxy(41,10);
            printf("Enter Name Of Book To Edit: ");
            gets(editbook);
            //scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                      gotoxy(41,11);
                    printf("Enter New Book Information\n");
                      gotoxy(41,12);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                       gotoxy(41,13);
                     printf("Book Name: ");
                     //scanf("%s",b1.name);
                      gets(b1.name);
                       gotoxy(41,14);
                     printf("Book Id: ");
                    // scanf("%s",b1.id);
                    gets(b1.id);
                      gotoxy(41,15);
                    printf("Author Name: ");
                    //scanf("%s",b1.authorname);
                    gets(b1.authorname);
                      gotoxy(41,16);
                    printf("Book Price: ");
                    //scanf("%s",b1.price);
                     gets(b1.price);
                       gotoxy(41,17);
                    printf("Shelf Number: ");
                   //scanf("%s",b1.selfnumber);
                     gets(b1.selfnumber);
                      gotoxy(41,18);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                fseek (fp,-sizeof(b1),1) ;
                fwrite(&b1,sizeof(b1),1,fp);
                fclose(fp);
                k=1;
                break;
                }
            }
            if(k!=1)
                {
                      gotoxy(41,11);
                    printf("==========================================\n");
                      gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                 gotoxy(41,13);
               printf("==========================================\n\n\n");
                }

             }
        else
           {
                 gotoxy(41,10);
             printf("==========================================\n");
               gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                 gotoxy(41,12);
               printf("==========================================\n");
           }
               gotoxy(41,19);
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
                edit();
             // else
             //   mainmenu();
        }
        break;
    case 2:
        {
            gets(r);
            system("cls");
            int k=0;
            FILE *fp;
              fp=fopen("engineering.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
             gotoxy(41,10);
           printf("Enter Name Of Book To Edit: ");
          gets(editbook);
            //scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                    gotoxy(41,11);
                    printf("Enter New Book Information\n");
                    gotoxy(41,12);
                      printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                         gotoxy(41,13);
                     printf("Book Name: ");
                     //scanf("%s",b1.name);
                      gets(b1.name);
                       gotoxy(41,14);
                     printf("Book Id: ");
                    // scanf("%s",b1.id);
                    gets(b1.id);
                      gotoxy(41,15);
                    printf("Author Name: ");
                    //scanf("%s",b1.authorname);
                    gets(b1.authorname);
                      gotoxy(41,16);
                    printf("Book Price: ");
                    //scanf("%s",b1.price);
                     gets(b1.price);
                       gotoxy(41,17);
                    printf("Shelf Number: ");
                   //scanf("%s",b1.selfnumber);
                     gets(b1.selfnumber);
                       gotoxy(41,18);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                fseek (fp,-sizeof(b1),1) ;
                fwrite(&b1,sizeof(b1),1,fp);
                fclose(fp);
                k=1;
                break;
                }
            }
         if(k!=1);
                {
                       gotoxy(41,11);
                    printf("==========================================\n");
                       gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,13);
               printf("==========================================\n\n\n");
                }
            }
        else
           {
                  gotoxy(41,10);
             printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,12);
               printf("==========================================\n");
           }
              gotoxy(41,19);
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
                edit();
            //  else
            //    mainmenu();
        }
        break;
    case 3:
        {
            gets(r);
            system("cls");
            int k=0;
            FILE *fp;
             fp=fopen("electronic.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
             gotoxy(41,10);
          printf("Enter Name Of Book To Edit: ");
           gets(editbook);
            //scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                       gotoxy(41,11);
                    printf("Enter New Book Information\n");
                       gotoxy(41,12);
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,13);
                     printf("Book Name: ");
                     //scanf("%s",b1.name);
                      gets(b1.name);
                       gotoxy(41,14);
                     printf("Book Id: ");
                    // scanf("%s",b1.id);
                    gets(b1.id);
                      gotoxy(41,15);
                    printf("Author Name: ");
                    //scanf("%s",b1.authorname);
                    gets(b1.authorname);
                      gotoxy(41,16);
                    printf("Book Price: ");
                    //scanf("%s",b1.price);
                     gets(b1.price);
                       gotoxy(41,17);
                    printf("Shelf Number: ");
                   //scanf("%s",b1.selfnumber);
                     gets(b1.selfnumber);
                       gotoxy(41,18);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                fseek (fp,-sizeof(b1),1) ;
                fwrite(&b1,sizeof(b1),1,fp);
                fclose(fp);
                k=1;
                break;
                }
            }
              if(k!=1)
                {
                       gotoxy(41,11);
                    printf("==========================================\n");
                       gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,13);
               printf("==========================================\n");
                }
            }
        else
           {
                  gotoxy(41,10);
             printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,12);
               printf("==========================================\n\n\n");
           }
              gotoxy(41,19);
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
                edit();
            //  else
            //    mainmenu();
        }
        break;
    case 4:
        {
            gets(r);
            system("cls");
            int k=0;
            FILE *fp;
           fp=fopen("management.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
             gotoxy(41,10);
           printf("\Enter Name Of Book To Edit: ");
            gets(editbook);
            //scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                       gotoxy(41,11);
                    printf("Enter New Book Information\n");
                       gotoxy(41,12);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                       gotoxy(41,13);
                     printf("Book Name: ");
                    // scanf("%s",b1.name);
                     gets(b1.name);
                        gotoxy(41,14);
                     printf("Book Id: ");
                     //scanf("%s",b1.id);
                    gets(b1.id);
                       gotoxy(41,15);
                    printf("Author Name: ");
                    //scanf("%s",b1.authorname);
                    gets(b1.authorname);
                       gotoxy(41,16);
                    printf("Book Price: ");
                    //scanf("%s",b1.price);
                     gets(b1.price);
                        gotoxy(41,17);
                    printf("Shelf Number: ");
                   //scanf("%s",b1.selfnumber);
                    gets(b1.selfnumber);
                       gotoxy(41,18);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                fseek (fp,-sizeof(b1),1) ;
                fwrite(&b1,sizeof(b1),1,fp);
                fclose(fp);
                k=1;
                break;
                }
            }
             if(k!=1)
                {
                       gotoxy(41,11);
                    printf("\n\n==========================================\n");
                       gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,13);
               printf("==========================================\n\n\n");
                }
            }
        else
           {
                  gotoxy(41,10);
             printf("==========================================\n");
                gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
                  gotoxy(41,12);
               printf("==========================================\n\n\n");
           }
              gotoxy(41,19);
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
                edit();
             // else
             //   mainmenu();
        }
        break;
    case 5:
        mainmenu();
        break;
   default:
           gotoxy(41,20);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,21);
         printf("Try again enter any key: ");
         getch();
         system("cls");
          edit();
          break;
    }
    return 0;
  }

  int idv()
  {
      gets(r);
      gotoxy(41,15);
      printf("Only Use to Library Control Panel\n");
       int k=1,l=0,i=0,j;
            char password[30];
            char regname[30];
            char ch;
              gotoxy(41,16);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              gotoxy(41,17);
            printf("Enter Teacher Name: ");
              gotoxy(62,17);
              gets(regname);
            //scanf("%s",&regname);
             FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                    if(strcmp(teacher.tname,regname)==0)
                    {
                        k=0;
                        l=1;
                        break;
                    }
            }
        fclose(fp);
        if(l==1)
        {
              gotoxy(41,18);
            printf("Enter Library Id: ");

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
       // printf("\n%s",password);
            FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                {
                    if(strcmp(teacher.lid,password)==0)
                    {
                          gotoxy(41,19);
                         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                           gotoxy(41,20);
                        printf("Log in Successfully\n\n");
                        k=1;
                          gotoxy(41,21);
                        printf("Continue Enter any key:.........");
                          //gotoxy(74,21);
                          getche();
                         system("cls");
                        deletebook();
                        return 0;
                        break;
                    }
                }
                 }
                fclose(fp);
              }
     if(k==0)
     {
         gotoxy(41,20);
            printf("====================================\n");
            gotoxy(41,21);
               printf("%%%%%%%% The Id Did not Match %%%%%%%%\n");
               gotoxy(41,22);
               printf("====================================\n");
     }
     if(l==0)
     {
        gotoxy(41,20);
         printf("====================================\n");
        gotoxy(41,21);
               printf("%%%%%% The User Name Did not Match %%%%%%\n");
        gotoxy(41,22);
               printf("====================================\n");
     }
      gotoxy(41,24);
             printf(" Try Again ? (1 / 0): ");
               int na;
              scanf("%d",&na);
             system("cls");
               if(na==1)
                tsignin();
               //else
                //aftermain();
            return 0;
  }
int deletebook()
      {
    int n1=0;
    gotoxy(41,10);
    printf("%%%%%%%%%%%%%% SELECT DELETE BOOK CATEGOLES %%%%%%%%%%%%\n");
    gotoxy(41,11);
    printf("         ::: 1. Mathematics\n");
    gotoxy(41,12);
    printf("         ::: 2. Engineering\n");
    gotoxy(41,13);
    printf("         ::: 3. Electronic\n");
    gotoxy(41,14);
    printf("         ::: 4. Management\n");
    gotoxy(41,15);
    printf("         ::: 5. Back to Main Menu\n");
    gotoxy(41,16);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,17);
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    //system("cls");
    switch(n1)
    {
    case 1:
        {
            gets(r);
            system("cls");
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("math2.txt","w");
            fp=fopen("math.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
             fseek(fp,0,0);
            char deletebookname[30];
            gotoxy(41,10);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,11);
            printf("Enter Name Of Book To Delete: ");
            gets(deletebookname);
            //scanf("%s",deletebookname);
           while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,deletebookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&b1,sizeof(b1),1,fp)==1)
                fwrite(&b1,sizeof(b1),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("math2.txt","r");
            fp=fopen("math.txt","w");
            while(fread(&b1,sizeof(b1),1,ft)==1)
            {
                if(strcmp(b1.name,deletebookname)!=0)
                {
                    fwrite(&b1,sizeof(b1),1,fp);

                }
            }
            fclose(fp);
            fclose(ft);
            gotoxy(41,12);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,13);
             printf("Delete Successfully\n\n");
            }
            else
            {
                gotoxy(41,12);
                printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
                 printf("==========================================\n");
                 gotoxy(41,15);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,16);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,17);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               deletebook();
             //else
            //   mainmenu();
        fclose(fp);
        fclose(ft);
        }
        break;
    case 2:
        {
            gets(r);
            system("cls");
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("engineering2.txt","w");
            fp=fopen("engineering.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
            fseek(fp,0,0);
            char deletebookname[30];
            gotoxy(41,10);
         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,11);
            printf("Enter Name Of Book To Delete: ");
           gets(deletebookname);
            //scanf("%s",deletebookname);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,deletebookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&b1,sizeof(b1),1,fp)==1)
                fwrite(&b1,sizeof(b1),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("engineering2.txt","r");
            fp=fopen("engineering.txt","w");
            while(fread(&b1,sizeof(b1),1,ft)==1)
            {
                if(strcmp(b1.name,deletebookname)!=0)
                    fwrite(&b1,sizeof(b1),1,fp);
            }
            fclose(fp);
            fclose(ft);
            gotoxy(41,12);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,13);
             printf("Delete Successfully\n\n");
              }
            else
            {
                gotoxy(41,12);
                printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
                 printf("==========================================\n");
                 gotoxy(41,15);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,16);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,17);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               deletebook();
             // else
               // mainmenu();
        }
        break;
    case 3:
        {
            gets(r);
            system("cls");
            int cmp=1;
             FILE *fp,*ft;
            ft=fopen("electronic2.txt","w");
            fp=fopen("electronic.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
                fseek(fp,0,0);
            char deletebookname[30];
             gotoxy(41,10);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,11);
            printf("Enter Name Of Book To Delete: ");
           gets(deletebookname);
            //scanf("%s",deletebookname);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,deletebookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&b1,sizeof(b1),1,fp)==1)
                fwrite(&b1,sizeof(b1),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("electronic2.txt","r");
            fp=fopen("electronic.txt","w");
            while(fread(&b1,sizeof(b1),1,ft)==1)
            {
                if(strcmp(b1.name,deletebookname)!=0)
                    fwrite(&b1,sizeof(b1),1,fp);
            }
            fclose(fp);
            fclose(ft);
            gotoxy(41,12);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,13);
            printf("Delete Successfully\n\n");
              }
            else
            {
                gotoxy(41,12);
                printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
                 printf("==========================================\n");
                 gotoxy(41,15);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,16);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,17);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               deletebook();
            //  else
             //   mainmenu();
        }
        break;
    case 4:
        {
            gets(r);
            system("cls");
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("management2.txt","w");
            fp=fopen("management.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
                fseek(fp,0,0);
            char deletebookname[30];
             gotoxy(41,10);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,11);
            printf("Enter Name Of Book To Delete: ");
           gets(deletebookname);
            //scanf("%s",deletebookname);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,deletebookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&b1,sizeof(b1),1,fp)==1)
                fwrite(&b1,sizeof(b1),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("management2.txt","r");
            fp=fopen("management.txt","w");
            while(fread(&b1,sizeof(b1),1,ft)==1)
            {
                if(strcmp(b1.name,deletebookname)!=0)
                    fwrite(&b1,sizeof(b1),1,fp);
            }
            fclose(fp);
            fclose(ft);
            gotoxy(41,12);
              printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              gotoxy(41,13);
             printf("Delete Successfully\n\n");
              }
             else
            {
                gotoxy(41,12);
                printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
                 printf("==========================================\n");
                 gotoxy(41,15);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,16);
               printf("==========================================\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n");
            }
            gotoxy(41,17);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               deletebook();
              else
                mainmenu();
        }
        break;
    case 5:
        mainmenu();
        return;
        break;
    default:
        gotoxy(41,18);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,19);
         printf("Try again enter any key: ");
         getch();
         system("cls");
         deletebook();
          break;
    }

 return 0;
   }
int search()
{
    system("cls");
      gotoxy(41,10);
    printf("%%%%%%%%%%%%%% SELECT SEARCH BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
      gotoxy(41,11);
    printf("          ::: 1. Mathematics\n");
      gotoxy(41,12);
    printf("          ::: 2. Engineering\n");
      gotoxy(41,13);
    printf("          ::: 3. Electronic\n");
      gotoxy(41,14);
    printf("          ::: 4. Management\n");
      gotoxy(41,15);
    printf("          ::: 5. Back to Main Menu\n");
      gotoxy(41,16);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
      gotoxy(41,17);
    printf("Enter Your Choices:  ");
    int n1;
    scanf("%d",&n1);
   // system("cls");
    switch(n1)
    {
    case 1:
        {
            gets(r);
             system("cls");
            int ch=0;
            char searchbname[30];
              gotoxy(41,10);
            printf("Enter Search Book name: ");
            gets(searchbname);
            //scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("math.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                      gotoxy(41,11);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                       gotoxy(41,12);
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                       gotoxy(41,13);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                      gotoxy(41,14);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                      gotoxy(41,15);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                       gotoxy(41,16);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                      gotoxy(41,17);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
            if(ch!=1)
            {
                gotoxy(41,11);
                printf("==========================================\n");
                gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,13);
               printf("==========================================\n");
            }
            fclose(fp);
              gotoxy(41,18);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               search();
             // else
              //  mainmenu();
        }
        break;
   case 2:
        {
              gets(r);
            system("cls");
            int ch=0;
            char searchbname[30];
            gotoxy(41,10);
            printf("Enter Search Book name: ");
          gets(searchbname);
            //scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("engineering.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                    gotoxy(41,11);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     gotoxy(41,13);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    gotoxy(41,14);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    gotoxy(41,15);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                    gotoxy(41,16);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                    gotoxy(41,17);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                gotoxy(41,11);
                printf("==========================================\n");
                gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,13);
               printf("==========================================\n");
            }
            fclose(fp);
            gotoxy(41,18);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               search();
             // else
             //   mainmenu();
        }
        break;
    case 3:
        {
              gets(r);
            system("cls");
             int ch=0;
            char searchbname[30];
            gotoxy(41,10);
            printf("Enter Search Book name: ");
           gets(searchbname);
            //scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("electronic.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                    gotoxy(41,11);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     gotoxy(41,13);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    gotoxy(41,14);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    gotoxy(41,15);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                     gotoxy(41,16);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                    gotoxy(41,17);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                gotoxy(41,11);
                printf("==========================================\n");
                gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,13);
               printf("==========================================\n");
            }
            fclose(fp);
            gotoxy(41,18);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               search();
           //   else
           //     mainmenu();
        }
        break;
    case 4:
        {
            gets(r);
            system("cls");
            int ch=0;
            char searchbname[30];
            gotoxy(41,10);
            printf("Enter Search Book name: ");
           gets(searchbname);
            //scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("management.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                    gotoxy(41,11);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     gotoxy(41,13);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    gotoxy(41,14);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    gotoxy(41,15);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                     gotoxy(41,16);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                    gotoxy(41,17);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                gotoxy(41,11);
                printf("==========================================\n");
                gotoxy(41,12);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,13);
               printf("==========================================\n");
            }
            fclose(fp);
            gotoxy(41,18);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               system("cls");
              if(id==1)
               search();
           //   else
            //    mainmenu();
        }
        break;
    case 5:
        mainmenu();
        break;
    default:
       {
           gotoxy(41,20);
         printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        gotoxy(41,21);
         printf("Try again enter any key: ");
         getch();
         system("cls");
          search();
       }
        break;
    }

 return 0;
}

int  issue()
{
     system("cls");
    int n;
    gotoxy(41,10);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%% ISSUE SELECT %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,11);
    printf("            ::: 1.  Issue a Book\n");
    gotoxy(41,12);
    printf("            ::: 2.  View a Issued Book\n");
    gotoxy(41,13);
    printf("            ::: 3.  Search Issued Book\n");
    gotoxy(41,14);
    printf("            ::: 4.  Remove Issued Book\n");
    gotoxy(41,15);
    printf("            ::: 5.  Back to Main Menu\n");
    gotoxy(41,16);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,17);
    printf("Enter Your Choice: ");
    scanf("%d",&n);
     system("cls");
    switch(n)
    {
    case 1:
        {
             issuebook();
        }
        break;
    case 2:
        {
            viewissuebook();
        }
        break;
    case 3:
        {
            searchissuedbook();
        }
        break;
    case 4:
        {
            tremove();
        }
        break;
    case 5:{
    system("cls");
    mainmenu();
    return;
    }
       break;
    default:
        gotoxy(41,18);
          printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
}
return 0;
}






     int issuebook()
       {
            system("cls");
          int n1;
          gotoxy(41,10);
          printf("%%%%%%%%%%%%%%%% SELECT ISSUE BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          gotoxy(41,11);
          printf("          ::: 1. Mathematics\n");
          gotoxy(41,12);
          printf("          ::: 2. Engineering\n");
          gotoxy(41,13);
          printf("          ::: 3. Electronic\n");
          gotoxy(41,14);
          printf("          ::: 4. Management\n");
          gotoxy(41,15);
          printf("          ::: 5. Exit \n");
          gotoxy(41,16);
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          gotoxy(41,17);
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            gets(r);
            system("cls");
            FILE *fp;
            fp=fopen("mathissuebook.txt","a");
            gotoxy(41,10);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,11);
            printf("     Student Name: ");
            gets(is.studentname);
            //scanf("%s",is.studentname);
            gotoxy(41,12);
            printf("       Student Id: ");
            gets(is.studentid);
            //scanf("%s",is.studentid);
            gotoxy(41,13);
            printf("        Book Name: ");
             gets(is.bookname);
           // scanf("%s",is.bookname);
            gotoxy(41,14);
            printf("          Book Id: ");
            gets(is.bookid);
            //scanf("%s",is.bookid);
            gotoxy(41,15);
            printf("    Book Category: ");
            gets(is.bookcategory);
            //scanf("%s",is.bookcategory);
            gotoxy(41,16);
            printf("      Issued Date: ");
            gets(is.issueddate);
           // scanf("%s",is.issueddate);
            gotoxy(41,17);
            printf("      Return Date: ");
            gets(is.returndate);
            //scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            gotoxy(41,18);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,19);
            printf("Book Issued Successfully\n");
            gotoxy(41,20);
             printf("Issue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
                issuebook();
              else
               issue();
        }
        break;
    case 2:
         {
             gets(r);
              system("cls");
            FILE *fp;
            fp=fopen("engineeringissuebook.txt","a");
            gotoxy(41,10);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,11);
             printf("     Student Name: ");
            gets(is.studentname);
            //scanf("%s",is.studentname);
            gotoxy(41,12);
            printf("       Student Id: ");
            gets(is.studentid);
            //scanf("%s",is.studentid);
            gotoxy(41,13);
            printf("        Book Name: ");
             gets(is.bookname);
           // scanf("%s",is.bookname);
            gotoxy(41,14);
            printf("          Book Id: ");
            gets(is.bookid);
            //scanf("%s",is.bookid);
            gotoxy(41,15);
            printf("    Book Category: ");
            gets(is.bookcategory);
            //scanf("%s",is.bookcategory);
            gotoxy(41,16);
            printf("      Issued Date: ");
            gets(is.issueddate);
           // scanf("%s",is.issueddate);
            gotoxy(41,17);
            printf("      Return Date: ");
            gets(is.returndate);
            //scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            gotoxy(41,18);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,19);
            printf("Book Issued Successfully\n");
            gotoxy(41,20);
             printf("Issue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
                issuebook();
              else
                issue();
        }
        break;
    case 3:
         {
             gets(r);
              system("cls");
            FILE *fp;
            fp=fopen("electronicissuebook.txt","a");
            gotoxy(41,10);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,11);
           printf("     Student Name: ");
            gets(is.studentname);
            //scanf("%s",is.studentname);
            gotoxy(41,12);
            printf("       Student Id: ");
            gets(is.studentid);
            //scanf("%s",is.studentid);
            gotoxy(41,13);
            printf("        Book Name: ");
             gets(is.bookname);
           // scanf("%s",is.bookname);
            gotoxy(41,14);
            printf("          Book Id: ");
            gets(is.bookid);
            //scanf("%s",is.bookid);
            gotoxy(41,15);
            printf("    Book Category: ");
            gets(is.bookcategory);
            //scanf("%s",is.bookcategory);
            gotoxy(41,16);
            printf("      Issued Date: ");
            gets(is.issueddate);
           // scanf("%s",is.issueddate);
            gotoxy(41,17);
            printf("      Return Date: ");
            gets(is.returndate);
            //scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            gotoxy(41,18);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,19);
            printf("Book Issued Successfully\n");
            gotoxy(41,20);
             printf("Issue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
                issuebook();
              else
                issue();

        }
        break;
    case 4:
         {
             gets(r);
              system("cls");
            FILE *fp;
            fp=fopen("managementissuebook.txt","a");
            gotoxy(41,10);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,11);
              printf("     Student Name: ");
            gets(is.studentname);
            //scanf("%s",is.studentname);
            gotoxy(41,12);
            printf("       Student Id: ");
            gets(is.studentid);
            //scanf("%s",is.studentid);
            gotoxy(41,13);
            printf("        Book Name: ");
             gets(is.bookname);
           // scanf("%s",is.bookname);
            gotoxy(41,14);
            printf("          Book Id: ");
            gets(is.bookid);
            //scanf("%s",is.bookid);
            gotoxy(41,15);
            printf("    Book Category: ");
            gets(is.bookcategory);
            //scanf("%s",is.bookcategory);
            gotoxy(41,16);
            printf("      Issued Date: ");
            gets(is.issueddate);
           // scanf("%s",is.issueddate);
            gotoxy(41,17);
            printf("      Return Date: ");
            gets(is.returndate);
            //scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            gotoxy(41,18);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gotoxy(41,19);
            printf("Book Issued Successfully\n");
            gotoxy(41,20);
             printf("Issue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
                issuebook();
              else
                issue();
        }
        break;
    case 5:
      system("cls");
      issue();
    default:
          gotoxy(41,28);
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
     }
    return 0;
   }





int viewissuebook()
        {
             system("cls");
            int n1;
              gotoxy(41,10);
          printf("%%%%%%%%%%%%%%%% SELECT VIEW ISSUE BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
           gotoxy(41,11);
          printf("          ::: 1. Mathematics\n");
           gotoxy(41,12);
          printf("          ::: 2. Engineering\n");
           gotoxy(41,13);
          printf("          ::: 3. Electronic\n");
           gotoxy(41,14);
          printf("          ::: 4. Management\n");
           gotoxy(41,15);
          printf("          ::: 5. Exit \n");
           gotoxy(41,16);
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           gotoxy(41,17);
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
           system("cls");
    switch(n1)
    {
    case 1:
        {
             int i=12;
             system("cls");
            FILE *fp;
            fp=fopen("mathissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
                 gotoxy(41,11);
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                 gotoxy(41,i);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            i++;
             gotoxy(41,i);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            i++;
             gotoxy(41,i);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            i++;
             gotoxy(41,i);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            i++;
             gotoxy(41,i);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            i++;
             gotoxy(41,i);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            i++;
             gotoxy(41,i);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            i++;
            gotoxy(41,i);
            printf("    \n");
            i++;

             }
            }
            else
            {
                 gotoxy(41,10);
              printf("==========================================\n");
               gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
            }

            fclose(fp);
             gotoxy(41,i);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            i++;
             gotoxy(41,i);
             printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               viewissuebook();
              else
                issue();
        }
        break;
    case 2:
        {
             int i=12;
             system("cls");
            int k=1;
            FILE *fp;
            fp=fopen("engineeringissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
                 gotoxy(41,11);
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                 gotoxy(41,i);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            i++;
             gotoxy(41,i);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            i++;
             gotoxy(41,i);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            i++;
             gotoxy(41,i);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            i++;
             gotoxy(41,i);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            i++;
             gotoxy(41,i);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            i++;
             gotoxy(41,i);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            i++;
            gotoxy(41,i);
            printf("    \n");
            i++;

             }
            }
            else
            {
                 gotoxy(41,10);
              printf("==========================================\n");
               gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
            }

            fclose(fp);
             gotoxy(41,i);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            i++;
             gotoxy(41,i);
             printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               viewissuebook();
              else
                issue();
        }
        break;

     case 3:
        {
             int i=12;
             system("cls");
            FILE *fp;
            fp=fopen("electronicissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
                gotoxy(41,11);
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                 gotoxy(41,i);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            i++;
             gotoxy(41,i);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            i++;
             gotoxy(41,i);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            i++;
             gotoxy(41,i);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            i++;
             gotoxy(41,i);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            i++;
             gotoxy(41,i);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            i++;
             gotoxy(41,i);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            i++;
            gotoxy(41,i);
            printf("    \n");
            i++;

             }
            }
            else
            {
                 gotoxy(41,10);
              printf("==========================================\n");
               gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
            }

            fclose(fp);
             gotoxy(41,i);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            i++;
             gotoxy(41,i);
             printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
              viewissuebook();
             else
                issue();
         }
        break;
     case 4:
        {
             int i=12;
             system("cls");
            FILE *fp;
            fp=fopen("managementissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
               gotoxy(41,11);
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                 gotoxy(41,i);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            i++;
             gotoxy(41,i);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            i++;
             gotoxy(41,i);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            i++;
             gotoxy(41,i);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            i++;
             gotoxy(41,i);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            i++;
             gotoxy(41,i);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            i++;
             gotoxy(41,i);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            i++;
            gotoxy(41,i);
            printf("    \n");
            i++;

             }
            }
            else
            {
                 gotoxy(41,10);
              printf("==========================================\n");
               gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
                gotoxy(41,12);
               printf("==========================================\n");
            }

            fclose(fp);
             gotoxy(41,i);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            i++;
             gotoxy(41,i);
             printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               viewissuebook();
              else
                issue();
        }
        break;
     case 5:
      system("cls");
      issue();
    default:
         gotoxy(41,18);
          printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;

    }
    return 0;
       }







int searchissuedbook()
        {
          system("cls");
          int n1;
           gotoxy(41,10);
          printf("%%%%%%%%%%%%%%%% SELECT SEARCH BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
           gotoxy(41,11);
          printf("          ::: 1. Mathematics\n");
           gotoxy(41,12);
          printf("          ::: 2. Engineering\n");
           gotoxy(41,13);
          printf("          ::: 3. Electronic\n");
           gotoxy(41,14);
          printf("          ::: 4. Management\n");
           gotoxy(41,15);
          printf("          ::: 5. Exit \n");
           gotoxy(41,16);
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           gotoxy(41,17);
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
           system("cls");
    switch(n1)
    {
    case 1:
        {
            gets(r);
             system("cls");
            int k=0;
            char searchissuebook[30];
             gotoxy(41,10);
            printf("Search Book Name: ");
            gets(searchissuebook);
            //scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("mathissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                     gotoxy(41,11);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
             gotoxy(41,13);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
             gotoxy(41,14);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
             gotoxy(41,15);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
             gotoxy(41,16);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
             gotoxy(41,17);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
             gotoxy(41,18);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
             gotoxy(41,19);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 gotoxy(41,12);
                 printf("==========================================\n");
                  gotoxy(41,13);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
               printf("==========================================\n");
            }
            fclose(fp);
             gotoxy(41,20);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
               if(id==1)
         searchissuedbook();
          else
            issue();

        }
        break;
    case 2:
        {
            gets(r);
             system("cls");
             int k=0;
            char searchissuebook[30];
             gotoxy(41,10);
            printf("Search Book Name: ");
          gets(searchissuebook);
            //scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("engineeringissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                     gotoxy(41,11);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
             gotoxy(41,13);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
             gotoxy(41,14);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
             gotoxy(41,15);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
             gotoxy(41,16);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
             gotoxy(41,17);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
             gotoxy(41,18);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
             gotoxy(41,19);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 gotoxy(41,12);
                 printf("==========================================\n");
                  gotoxy(41,13);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
               printf("==========================================\n");
            }
            fclose(fp);
             gotoxy(41,20);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
         searchissuedbook();
          else
            issue();

        }
        break;
    case 3:
        {
            gets(r);
             system("cls");
             int k=0;
            char searchissuebook[30];
            gotoxy(41,10);
            printf("Search Book Name: ");
          gets(searchissuebook);
            //scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("electronicissuebook.txt","r");
          while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                     gotoxy(41,11);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
             gotoxy(41,13);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
             gotoxy(41,14);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
             gotoxy(41,15);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
             gotoxy(41,16);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
             gotoxy(41,17);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
             gotoxy(41,18);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
             gotoxy(41,19);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 gotoxy(41,12);
                 printf("==========================================\n");
                  gotoxy(41,13);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
               printf("==========================================\n");
            }
            fclose(fp);
             gotoxy(41,20);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
               if(id==1)
         searchissuedbook();
          else
            issue();
        }
        break;
    case 4:
        {
            gets(r);
             system("cls");
             int k=0;
            char searchissuebook[30];
            gotoxy(41,10);
            printf("Search Book Name: ");
            gets(searchissuebook);
            //scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("managementissuebook.txt","r");
           while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                     gotoxy(41,11);
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     gotoxy(41,12);
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
             gotoxy(41,13);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
             gotoxy(41,14);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
             gotoxy(41,15);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
             gotoxy(41,16);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
             gotoxy(41,17);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
             gotoxy(41,18);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
             gotoxy(41,19);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 gotoxy(41,12);
                 printf("==========================================\n");
                  gotoxy(41,13);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
                gotoxy(41,14);
               printf("==========================================\n");
            }
            fclose(fp);
             gotoxy(41,20);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
         searchissuedbook();
          else
            issue();
        }
        break;
        case 5:
      system("cls");
      issue();
    default:
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
    }
return 0;
        }


int tremove()
{
    gets(r);
     gotoxy(41,15);
      printf("Only Use to Library Control Panel\n");
       int k=1,l=0,i=0,j;
            char password[30];
            char regname[30];
            char ch;
              gotoxy(41,16);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              gotoxy(41,17);
            printf("Enter Teacher Name: ");
              gotoxy(62,17);
              gets(regname);
           // scanf("%s",&regname);
             FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                    if(strcmp(teacher.tname,regname)==0)
                    {
                        k=0;
                        l=1;
                        break;
                    }
            }
        fclose(fp);
        if(l==1)
        {
              gotoxy(41,18);
            printf("Enter Library Id: ");

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
       // printf("\n%s",password);
            FILE *fp;
            fp=fopen("teacher.txt","r");
            {
                while(fread(&teacher,sizeof(teacher),1,fp)==1)
                {
                    if(strcmp(teacher.lid,password)==0)
                    {
                          gotoxy(41,19);
                         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                           gotoxy(41,20);
                        printf("Log in Successfully\n\n");
                        k=1;
                          gotoxy(41,21);
                        printf("Continue Enter any key:.........");
                          //gotoxy(74,21);
                          getche();
                         system("cls");
                        removeissuedbook();
                        return 0;
                        break;
                    }
                }
                 }
                fclose(fp);
              }
     if(k==0)
     {
         gotoxy(41,20);
            printf("====================================\n");
            gotoxy(41,21);
               printf("%%%%%%%% The Id Did not Match %%%%%%%%\n");
               gotoxy(41,22);
               printf("====================================\n");
     }
     if(l==0)
     {
        gotoxy(41,20);
         printf("====================================\n");
        gotoxy(41,21);
               printf("%%%%%% The User Name Did not Match %%%%%%\n");
        gotoxy(41,22);
               printf("====================================\n");
     }
      gotoxy(41,24);
             printf(" Try Again ? (1 / 0): ");
               int na;
              scanf("%d",&na);
             system("cls");
               if(na==1)
                tremove();
               //else
                //aftermain();
            return 0;
}




int removeissuedbook()
       {
            system("cls");
            int n1;
            gotoxy(41,10);
          printf("%%%%%%%%%%%%%%%% SELECT REMOVE ISSUED BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          gotoxy(41,11);
          printf("          ::: 1. Mathematics\n");
          gotoxy(41,12);
          printf("          ::: 2. Engineering\n");
          gotoxy(41,13);
          printf("          ::: 3. Electronic\n");
          gotoxy(41,14);
          printf("          ::: 4. Management\n");
          gotoxy(41,15);
          printf("          ::: 5. Exit \n");
          gotoxy(41,16);
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          gotoxy(41,17);
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
           system("cls");
    switch(n1)
           {
          case 1:
            {
                gets(r);
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("mathissuebook2.txt","w");
            fp=fopen("mathissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            gotoxy(41,10);
            printf("Enter Name Of Issued Book To Delete\n");
            gotoxy(41,11);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gets(deleteissuedbookname);
            //scanf("%s",deleteissuedbookname);
           while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
                fwrite(&is,sizeof(is),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("mathissuebook2.txt","r");
            fp=fopen("mathissuebook.txt","w");
            while(fread(&is,sizeof(is),1,ft)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)!=0)
                {
                    fwrite(&is,sizeof(is),1,fp);

                }
            }
            fclose(fp);
            fclose(ft);
            gotoxy(41,12);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,13);
             printf("Delete Successfully\n\n");
            }
            else
            {
                gotoxy(41,13);
               printf("==========================================\n");
               gotoxy(41,14);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,15);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,16);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               removeissuedbook();
             else
             issue();
        fclose(fp);
        fclose(ft);
            }
            break;
     case 2:
            {
                gets(r);
                 system("cls");
                int cmp=1;
            FILE *fp,*ft;
            ft=fopen("engineeringissuebook2.txt","w");
            fp=fopen("engineeringissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            gotoxy(41,10);
            printf("Enter Name Of Issued Book To Delete\n");
            gotoxy(41,11);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gets(deleteissuedbookname);
            //scanf("%s",deleteissuedbookname);
           while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
                fwrite(&is,sizeof(is),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("engineeringissuebook2.txt","r");
            fp=fopen("engineeringissuebook.txt","w");
            while(fread(&is,sizeof(is),1,ft)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)!=0)
                {
                    fwrite(&is,sizeof(is),1,fp);

                }
            }
            fclose(fp);
            fclose(ft);
             gotoxy(41,12);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,13);
             printf("Delete Successfully\n\n");
            }
            else
            {
                gotoxy(41,13);
               printf("==========================================\n");
               gotoxy(41,14);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,15);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,16);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               removeissuedbook();
             else
             issue();
        fclose(fp);
        fclose(ft);
            }
            break;
    case 3:
            {
                gets(r);
                 system("cls");
                 int cmp=1;
            FILE *fp,*ft;
            ft=fopen("electronicissuebook2.txt","w");
            fp=fopen("electronicissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            gotoxy(41,10);
            printf("Enter Name Of Issued Book To Delete\n");
            gotoxy(41,11);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          gets(deleteissuedbookname);
            //scanf("%s",deleteissuedbookname);
           while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
                fwrite(&is,sizeof(is),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("electronicissuebook2.txt","r");
            fp=fopen("electronicissuebook.txt","w");
            while(fread(&is,sizeof(is),1,ft)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)!=0)
                {
                    fwrite(&is,sizeof(is),1,fp);

                }
            }
            fclose(fp);
            fclose(ft);
             gotoxy(41,12);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,13);
             printf("Delete Successfully\n\n");
            }
            else
            {
                gotoxy(41,13);
               printf("==========================================\n");
               gotoxy(41,14);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,15);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,16);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
             if(id==1)
               removeissuedbook();
             else
             issue();
        fclose(fp);
        fclose(ft);
            }
            break;

   case 4:
            {
                gets(r);
                 system("cls");
                 int cmp=1;
            FILE *fp,*ft;
            ft=fopen("managementissuebook2.txt","w");
            fp=fopen("managementissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            gotoxy(41,10);
            printf("Enter Name Of Issued Book To Delete\n");
            gotoxy(41,11);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            gets(deleteissuedbookname);
            //scanf("%s",deleteissuedbookname);
           while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)==0)
                  {
                      cmp=0;
                      break;
                  }
            }
            if(cmp==0)
            {
            fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
                fwrite(&is,sizeof(is),1,ft);
            fclose(fp);
            fclose(ft);
            ft=fopen("managementissuebook2.txt","r");
            fp=fopen("managementissuebook.txt","w");
            while(fread(&is,sizeof(is),1,ft)==1)
            {
                if(strcmp(is.bookname,deleteissuedbookname)!=0)
                {
                    fwrite(&is,sizeof(is),1,fp);

                }
            }
            fclose(fp);
            fclose(ft);
              gotoxy(41,12);
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             gotoxy(41,13);
             printf("Delete Successfully\n\n");
            }
            else
            {
                gotoxy(41,13);
               printf("==========================================\n");
               gotoxy(41,14);
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,15);
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                gotoxy(41,10);
                 printf("==========================================\n");
                 gotoxy(41,11);
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               gotoxy(41,12);
               printf("==========================================\n\n\n");
            }
            gotoxy(41,16);
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
                system("cls");
              if(id==1)
               removeissuedbook();
             else
             issue();
        fclose(fp);
        fclose(ft);
            }
            break;
    case 5:
      system("cls");
      issue();
    default:
        gotoxy(41,18);
          printf("%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
     }
     return 0;
}
