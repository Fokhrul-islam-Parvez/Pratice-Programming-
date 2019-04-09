#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
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
    printf("\n                                       WELCOME TO LIBRARY MANAGEMENT SYSTEM\n");
    printf("                                     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
   aftermain();
    return 0;
}

int aftermain()
{
     char ch;
     int n;
    gotoxy(40,6);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    gotoxy(41,7);
     printf("       ::: 1. Sign in\n");
     gotoxy(41,8);
     printf("       ::: 2. Sign up\n");
     gotoxy(41,9);
     printf("       ::: 3. Exit\n");
     gotoxy(40,10);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     gotoxy(41,11);
     printf("Enter Your Choice:  ");
     gotoxy(60,11);
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
            printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
            break;
    }
     printf("\n\n%%%%%%%%%%%% Try Again ? (1 / 0) %%%%%%%%%%%%\n");
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
            int k=1,l=0,i=0,j;
            char password[30];
            char regname[30];
            char ch;
            printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("    Enter User Name: ");
            scanf("%s",&regname);
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
                         printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                        printf("Log in Successfully\n\n");
                        k=1;
                        printf("Continue Enter any key:.........");
                        getche();
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
            printf("\n\n====================================\n");
               printf("%%%%%%%% The Password Did not Match %%%%%%%%\n");
               printf("====================================\n\n\n");
     }
     if(l==0)
     {
         printf("\n\n====================================\n");
               printf("%%%%%% The User Name Did not Match %%%%%%\n");
               printf("====================================\n\n\n");
     }
             printf("\n\n%%%%%%%%%%%% Try Again ? (1 / 0) %%%%%%%%%%%%\n");
               int na;
              scanf("%d",&na);
               if(na==1)
                signin();
               //else
                //aftermain();
            return 0;
}

int registation()
{
    FILE *fp;
    fp=fopen("student.txt","a");
    {
        printf("\n\n\n\nEnter Your Information For Registration\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        printf("Name: ");
        scanf("%s",student.name);
        //gets(student.name);
        printf("Id: ");
        //gets(student.id);
        scanf("%s",student.id);
        printf("Department: ");
        scanf("%s",student.dep);
        //gets(student.dep);
        printf("Semester: ");
        scanf("%s",student.semes);
        //gets(student.semes);
        printf("Batch: ");
        scanf("%s",student.batch);
        //gets(student.batch);
        printf("Password: ");
        scanf("%s",student.password);
        //gets(student.password);
        fwrite(&student,sizeof(student),1,fp);
       printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        printf("Complete Your Registration\n");
    }
    fclose(fp);
     printf("Continue Enter any key:..............");
     getche();
     mainmenu();
   return 0;
}



int mainmenu()
{
     int t;
    while(t=1)
    {
    int n;
    printf("\n\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%  MAIN MENU  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("          ::: 1. Add Books\n");
    printf("          ::: 2. Delete Books\n");
    printf("          ::: 3. Search Books\n");
    printf("          ::: 4. Issue Books\n");
    printf("          ::: 5. View Book List\n");
    printf("          ::: 6. Edit Books's Record\n");
    printf("          ::: 7. Close Application\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choice:  ");
    scanf("%d",&n);
    switch(n)
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
        issue();
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
        printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
           break;
       }
     }
   }
   return 0;
}





int addbook()
{
    printf("\n\n\n\n%%%%%%%%%%%%%% SELECT ADD BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
    printf("          ::: 1. Mathematics\n");
    printf("          ::: 2. Engineering\n");
    printf("          ::: 3. Electronic\n");
    printf("          ::: 4. Management\n");
    printf("          ::: 5. Back to Main Menu\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
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
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
    }

 return 0;
}





int math()
{
    printf("\n\n\n\nENTER ADD BOOK INFORMATION\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("      Book Name: ");
    scanf("%s",b1.name);
   // gets(b1.name);
    printf("        Book Id: ");
   scanf("%s",b1.id);
   //gets(b1.id);
    printf("    Author Name: ");
    scanf("%s",b1.authorname);
  // gets(b1.authorname);
     printf("     Book Price: ");
    scanf("%s",b1.price);
     //gets(b1.price);
     printf("   Shelf Number: ");
    scanf("%s",b1.selfnumber);
    // gets(b1.selfnumber);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    FILE *fp1;
    fp1=fopen("math.txt","a");
    {
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
    printf("The record is sucessfully saved\n\n");
    n1=0;
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
    addbook();
   // else
    //    mainmenu();
    return 0;
}



int engineering()
{
    FILE *fp1;
    fp1=fopen("engineering.txt","a");
    {
    printf("\n\n\n\nENTER ADD BOOK INFORMATION\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("      Book Name: ");
    scanf("%s",b1.name);
   // gets(b1.name);
    printf("        Book Id: ");
   scanf("%s",b1.id);
   //gets(b1.id);
    printf("    Author Name: ");
    scanf("%s",b1.authorname);
   //gets(b1.authorname);
     printf("     Book Price: ");
    scanf("%s",b1.price);
     //gets(b1.price);
     printf("   Shelf Number: ");
    scanf("%s",b1.selfnumber);
    // gets(b1.selfnumber);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
   printf("The record is successfully saved\n\n");
    n1=0;
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
    addbook();
   // else
     //   mainmenu();
    return 0;
}



int electronic()
{
    FILE *fp1;
    fp1=fopen("electronic.txt","a");
    {
     printf("\n\n\n\nENTER ADD BOOK INFORMATION\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("      Book Name: ");
    scanf("%s",b1.name);
   // gets(b1.name);
    printf("        Book Id: ");
   scanf("%s",b1.id);
   //gets(b1.id);
    printf("    Author Name: ");
    scanf("%s",b1.authorname);
   //gets(b1.authorname);
     printf("     Book Price: ");
    scanf("%s",b1.price);
     //gets(b1.price);
     printf("   Shelf Number: ");
    scanf("%s",b1.selfnumber);
    // gets(b1.selfnumber);
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
    printf("The record is successfully saved\n\n");
    n1=0;
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
    addbook();
    //else
     //   mainmenu();
    return 0;
}



int management()
{
    FILE *fp1;
    fp1=fopen("management.txt","a");
    {
   printf("\n\n\n\nENTER ADD BOOK INFORMATION\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("      Book Name: ");
    scanf("%s",b1.name);
   // gets(b1.name);
    printf("        Book Id: ");
   scanf("%s",b1.id);
   //gets(b1.id);
    printf("    Author Name: ");
    scanf("%s",b1.authorname);
   //gets(b1.authorname);
     printf("     Book Price: ");
    scanf("%s",b1.price);
     //gets(b1.price);
     printf("   Shelf Number: ");
    scanf("%s",b1.selfnumber);
    // gets(b1.selfnumber);
   printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    fwrite(&b1,sizeof(b1),1,fp1);
    }
    fclose(fp1);
     printf("The record is successfully saved\n\n");
    n1=0;
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    if(id==1)
    addbook();
    else
        mainmenu();
    return 0;
}

int view()
{
    int n1;
    FILE *fp;

    printf("\n\n\n\n%%%%%%%%%%%%%% SELECT VIEW BOOKS CATEGOLES %%%%%%%%%%\n");
    printf("        ::: 1. Mathematics\n");
    printf("        ::: 2. Engineering\n");
    printf("        ::: 3. Electronic\n");
    printf("        ::: 4. Management\n");
    printf("        ::: 5. Back to Main Menu\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
     switch(n1)
    {
    case 1:
       {
           fp=fopen("math.txt","r");
           if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
           printf("\n\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               while(fread(&b1,sizeof(b1),1,fp)==1)
               {
               printf("           book name: %s\n",b1.name);
               printf("             Book id: %s\n",b1.id);
               printf("    book Author name: %s\n",b1.authorname);
               printf("          book Price: %s\n",b1.price);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               printf("\n");
           }
           printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
           fclose(fp);
           }
        else
           {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
            printf("View any more? (1 / 0): ");
            int id;
           scanf("%d",&id);
           if(id==1)
             view();
        //   else
        //    mainmenu();
       }
        break;
    case 2:
         {
           fp=fopen("engineering.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
           printf("\n\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                printf("           book name: %s\n",b1.name);
               printf("             Book id: %s\n",b1.id);
               printf("    book Author name: %s\n",b1.authorname);
               printf("          book Price: %s\n",b1.price);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               printf("\n");
            }
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            fclose(fp);
             }
        else
           {
              printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
            printf("View any more? (1 / 0): ");
            int id;
            scanf("%d",&id);
            if(id==1)
              view();
           else
              mainmenu();
        }
         break;
    case 3:
        {
           fp=fopen("electronic.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
           printf("\n\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
              while(!feof(fp))
              {
               fread(&b1,sizeof(b1),1,fp);
               printf("           book name: %s\n",b1.name);
               printf("             Book id: %s\n",b1.id);
               printf("    book Author name: %s\n",b1.authorname);
               printf("          book Price: %s\n",b1.price);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               printf("\n");
              }
               printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               fclose(fp);
                }
        else
           {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
               printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
               if(id==1)
                 view();
           //    else
             //    mainmenu();
       }
        break;
    case 4:
         {
           fp=fopen("management.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0) ;
           printf("\n\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               while(fread(&b1,sizeof(b1),1,fp)==1)
               {
               printf("           book name: %s\n",b1.name);
               printf("             Book id: %s\n",b1.id);
               printf("    book Author name: %s\n",b1.authorname);
               printf("          book Price: %s\n",b1.price);
               printf("   book Shelf number: %s\n",b1.selfnumber);
               printf("\n");
               }
              printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
               fclose(fp);
                }
        else
           {
             printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
               printf("View any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
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
           printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        break;

    }
 return 0;
}
int edit()
{
    int n1;
     printf("\n\n\n\n%%%%%%%%%%%%%% SELECT EDIT BOOK CATEGOLES %%%%%%%%%%\n");
    printf("::: 1. Mathematics\n");
    printf("::: 2. Engineering\n");
    printf("::: 3. Electronic\n");
    printf("::: 4. Management\n");
    printf("::: 5. Back to Main Menu\n");
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            int k=0;
            FILE *fp;
            fp=fopen("math.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
            char editbook[30];
            printf("\n\n\n\nEnter Name Of Book To Edit\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                    printf("\n\n\n\nEnter New Book Information\n");
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     printf("Book Name: \n");
                     scanf("%s",b1.name);
                     // gets(b1.name);
                     printf("Book Id: \n");
                     scanf("%s",b1.id);
                    //gets(b1.id);
                    printf("Author Name: \n");
                    scanf("%s",b1.authorname);
                    //gets(b1.authorname);
                    printf("Book Price: \n");
                    scanf("%s",b1.price);
                     //gets(b1.price);
                    printf("Shelf Number: \n");
                   scanf("%s",b1.selfnumber);
                    // gets(b1.selfnumber);
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
                    printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
                }

             }
        else
           {
             printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }

             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                edit();
             // else
             //   mainmenu();
        }
        break;
    case 2:
        {
            int k=0;
            FILE *fp;
              fp=fopen("engineering.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
           printf("\n\n\n\nEnter Name Of Book To Edit\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                    printf("\n\n\n\nEnter New Book Information\n");
                      printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     printf("Book Name: \n");
                     scanf("%s",b1.name);
                     // gets(b1.name);
                     printf("Book Id: \n");
                     scanf("%s",b1.id);
                    //gets(b1.id);
                    printf("Author Name: \n");
                    scanf("%s",b1.authorname);
                    //gets(b1.authorname);
                    printf("Book Price: \n");
                    scanf("%s",b1.price);
                     //gets(b1.price);
                    printf("Shelf Number: \n");
                   scanf("%s",b1.selfnumber);
                    // gets(b1.selfnumber);
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
                    printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
                }
            }
        else
           {
             printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                edit();
            //  else
            //    mainmenu();
        }
        break;
    case 3:
        {
            int k=0;
            FILE *fp;
             fp=fopen("electronic.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
          printf("\n\n\n\nEnter Name Of Book To Edit\n");
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                    printf("\n\n\nEnter New Book Information\n");
                 printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     printf("Book Name: \n");
                     scanf("%s",b1.name);
                     // gets(b1.name);
                     printf("Book Id: \n");
                     scanf("%s",b1.id);
                    //gets(b1.id);
                    printf("Author Name: \n");
                    scanf("%s",b1.authorname);
                    //gets(b1.authorname);
                    printf("Book Price: \n");
                    scanf("%s",b1.price);
                     //gets(b1.price);
                    printf("Shelf Number: \n");
                   scanf("%s",b1.selfnumber);
                    // gets(b1.selfnumber);
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
                    printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
                }
            }
        else
           {
             printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                edit();
            //  else
            //    mainmenu();
        }
        break;
    case 4:
        {
            int k=0;
            FILE *fp;
           fp=fopen("management.txt","rb+");
             if(fread(&b1,sizeof(b1),1,fp)==1)
           {
               fseek ( fp,0,0);
          char editbook[30];
           printf("\n\n\n\nEnter Name Of Book To Edit\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",editbook);
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,editbook)==0)
                {
                    printf("\n\n\n\nEnter New Book Information\n");
                    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     printf("Book Name: \n");
                     scanf("%s",b1.name);
                     // gets(b1.name);
                     printf("Book Id: \n");
                     scanf("%s",b1.id);
                    //gets(b1.id);
                    printf("Author Name: \n");
                    scanf("%s",b1.authorname);
                    //gets(b1.authorname);
                    printf("Book Price: \n");
                    scanf("%s",b1.price);
                     //gets(b1.price);
                    printf("Shelf Number: \n");
                   scanf("%s",b1.selfnumber);
                    // gets(b1.selfnumber);
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
                    printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
                }
            }
        else
           {
             printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
           }
             printf("Edit any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
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
           printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
    }
    return 0;
  }

  int deletebook()
  {
    int n1=0;
    printf("\n\n\n\n%%%%%%%%%%%%%% SELECT DELETE BOOK CATEGOLES %%%%%%%%%%%%\n");
    printf("         ::: 1. Mathematics\n");
    printf("         ::: 2. Engineering\n");
    printf("         ::: 3. Electronic\n");
    printf("         ::: 4. Management\n");
    printf("         ::: 5. Back to Main Menu\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("math2.txt","w");
            fp=fopen("math.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
             fseek(fp,0,0);
            char deletebookname[30];
            printf("\n\n\n\nEnter Name Of Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deletebookname);
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
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
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
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("engineering2.txt","w");
            fp=fopen("engineering.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
            fseek(fp,0,0);
            char deletebookname[30];
            printf("\n\n\n\nEnter Name Of Book To Delete\n");
         printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deletebookname);
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
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
              }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               deletebook();
             // else
               // mainmenu();
        }
        break;
    case 3:
        {
            int cmp=1;
             FILE *fp,*ft;
            ft=fopen("electronic2.txt","w");
            fp=fopen("electronic.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
                fseek(fp,0,0);
            char deletebookname[30];
            printf("\n\n\n\nEnter Name Of Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deletebookname);
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
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
              }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               deletebook();
            //  else
             //   mainmenu();
        }
        break;
    case 4:
        management();
        {
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("management2.txt","w");
            fp=fopen("management.txt","r");
            if(fread(&b1,sizeof(b1),1,fp)==1)
            {
                fseek(fp,0,0);
            char deletebookname[30];
            printf("\n\n\n\nEnter Name Of Book To Delete\n");
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deletebookname);
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
              printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
              }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               deletebook();
              else
                mainmenu();
        }
        break;
    case 5:
        mainmenu();
        break;
    default:
         printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
    }

 return 0;
   }
int search()
{
    printf("\n\n\n\n%%%%%%%%%%%%%% SELECT SEARCH BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
    printf("          ::: 1. Mathematics\n");
    printf("          ::: 2. Engineering\n");
    printf("          ::: 3. Electronic\n");
    printf("          ::: 4. Management\n");
    printf("          ::: 5. Back to Main Menu\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choices:  ");
    scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            int ch=0;
            char searchbname[30];
            printf("\n\n\nEnter Search Book name: ");
            scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("math.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
            if(ch!=1)
            {
                printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               search();
             // else
              //  mainmenu();
        }
        break;
   case 2:
        {
            int ch=0;
            char searchbname[30];
            printf("\n\n\nEnter Search Book name: ");
            scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("engineering.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
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
             int ch=0;
            char searchbname[30];
            printf("\n\n\nEnter Search Book name: ");
            scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("electronic.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               search();
           //   else
           //     mainmenu();
        }
        break;
    case 4:
        {
            int ch=0;
            char searchbname[30];
            printf("\n\n\nEnter Search Book name: ");
            scanf("%s",searchbname);
            FILE *fp;
            fp=fopen("management.txt","r");
            while(fread(&b1,sizeof(b1),1,fp)==1)
            {
                if(strcmp(b1.name,searchbname)==0)
                {
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                    printf("Book Name: ");
                     printf("%s\n",b1.name);
                     // puts(b1.name);
                     printf("Book Id: ");
                     printf("%s\n",b1.id);
                    //puts(b1.id);
                    printf("Author Name: ");
                    printf("%s\n",b1.authorname);
                    //puts(b1.authorname);
                    printf("Book Price: ");
                    printf("%s\n",b1.price);
                     //puts(b1.price);
                    printf("Shelf Number: ");
                    printf("%s\n",b1.selfnumber);
                    // puts(b1.selfnumber);
                     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                     ch=1;
                    break;
                }
            }
             if(ch!=1)
            {
                printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
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
        printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
        break;
    }

 return 0;
}

int  issue()
{
    int n;
    printf("\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%% ISSUE SELECT %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("            ::: 1.  Issue a Book\n");
    printf("            ::: 2.  View a Issued Book\n");
    printf("            ::: 3.  Search Issued Book\n");
    printf("            ::: 4.  Remove Issued Book\n");
    printf("            ::: 5.  Back to Main Menu\n");
     printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("Enter Your Choice: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
       {
          int n1;
          printf("\n\n\n\n%%%%%%%%%%%%%%%% SELECT ISSUE BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          printf("          ::: 1. Mathematics\n");
          printf("          ::: 2. Engineering\n");
          printf("          ::: 3. Electronic\n");
          printf("          ::: 4. Management\n");
          printf("          ::: 5. Exit \n");
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            FILE *fp;
            fp=fopen("mathissuebook.txt","w");
             printf("\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            scanf("%s",is.studentname);
            printf("       Student Id: ");
            scanf("%s",is.studentid);
            printf("        Book Name: ");
            scanf("%s",is.bookname);
            printf("          Book Id: ");
            scanf("%s",is.bookid);
            printf("    Book Category: ");
            scanf("%s",is.bookcategory);
            printf("      Issued Date: ");
            scanf("%s",is.issueddate);
            printf("      Return Date: ");
            scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("Book Issued Successfully\n");
             printf("\nIssue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;
    case 2:
         {
            FILE *fp;
            fp=fopen("engineeringissuebook.txt","w");
             printf("\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            scanf("%s",is.studentname);
            printf("       Student Id: ");
            scanf("%s",is.studentid);
            printf("        Book Name: ");
            scanf("%s",is.bookname);
            printf("          Book Id: ");
            scanf("%s",is.bookid);
            printf("    Book Category: ");
            scanf("%s",is.bookcategory);
            printf("      Issued Date: ");
            scanf("%s",is.issueddate);
            printf("      Return Date: ");
            scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("Book Issued Successfully\n");
             printf("\nIssue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;
    case 3:
         {
            FILE *fp;
            fp=fopen("electronicissuebook.txt","w");
             printf("\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            scanf("%s",is.studentname);
            printf("       Student Id: ");
            scanf("%s",is.studentid);
            printf("        Book Name: ");
            scanf("%s",is.bookname);
            printf("          Book Id: ");
            scanf("%s",is.bookid);
            printf("    Book Category: ");
            scanf("%s",is.bookcategory);
            printf("      Issued Date: ");
            scanf("%s",is.issueddate);
            printf("      Return Date: ");
            scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("Book Issued Successfully\n");
             printf("\nIssue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();

        }
        break;
    case 4:
         {
            FILE *fp;
            fp=fopen("managementissuebook.txt","w");
             printf("\n\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            scanf("%s",is.studentname);
            printf("       Student Id: ");
            scanf("%s",is.studentid);
            printf("        Book Name: ");
            scanf("%s",is.bookname);
            printf("          Book Id: ");
            scanf("%s",is.bookid);
            printf("    Book Category: ");
            scanf("%s",is.bookcategory);
            printf("      Issued Date: ");
            scanf("%s",is.issueddate);
            printf("      Return Date: ");
            scanf("%s",is.returndate);
            fwrite(&is,sizeof(is),1,fp);
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("Book Issued Successfully\n");
             printf("\nIssue any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;
    case 5:
      return;
    default:
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
     }
   }
  break;


    case 2:
        {
             int n1;
          printf("\n\n\n\n%%%%%%%%%%%%%%%% SELECT VIEW ISSUE BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          printf("          ::: 1. Mathematics\n");
          printf("          ::: 2. Engineering\n");
          printf("          ::: 3. Electronic\n");
          printf("          ::: 4. Management\n");
          printf("          ::: 5. Exit \n");
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            FILE *fp;
            fp=fopen("mathissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
            {
            printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
             }
            }
            else
            {
              printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }

            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("\nView any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;
    case 2:
        {
            int k=1;
            FILE *fp;
            fp=fopen("engineeringissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
            {
            printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
            }
            }
            else
            {
              printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("\nView any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;

     case 3:
        {
            FILE *fp;
            fp=fopen("electronicissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
                while(fread(&is,sizeof(is),1,fp)==1)
            {
            printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
            }
            }
            else
            {
              printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("\nView any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
         }
        break;
     case 4:
        {
            FILE *fp;
            fp=fopen("managementissuebook.txt","r");
             if(fread(&is,sizeof(is),1,fp)==1)
            {
                fseek(fp,0,0);
            while(fread(&is,sizeof(is),1,fp)==1)
            {
            printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
           }
            }
            else
            {
              printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%% There are no Issued book %%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("\nView any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();
              //else
              //  mainmenu();
        }
        break;
     case 5:
      return;
    default:
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;
    }
       }
        break;







    case 3:
        {

          int n1;
          printf("\n\n\n\n%%%%%%%%%%%%%%%% SELECT SEARCH BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          printf("          ::: 1. Mathematics\n");
          printf("          ::: 2. Engineering\n");
          printf("          ::: 3. Electronic\n");
          printf("          ::: 4. Management\n");
          printf("          ::: 5. Exit \n");
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
    switch(n1)
    {
    case 1:
        {
            int k=0;
            char searchissuebook[30];
            printf("\n\nSearch Book Name: ");
            scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("mathissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                    printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();

        }
        break;
    case 2:
        {
             int k=0;
            char searchissuebook[30];
            printf("\n\nSearch Book Name: ");
            scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("engineeringissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                    printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();

        }
        break;
    case 3:
        {
             int k=0;
            char searchissuebook[30];
            printf("\n\nSearch Book Name: ");
            scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("electronicissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                    printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();

        }
        break;
    case 4:
        {
             int k=0;
            char searchissuebook[30];
            printf("\n\nSearch Book Name: ");
            scanf("%s",searchissuebook);
              FILE *fp;
            fp=fopen("managementissuebook.txt","r");
            while(fread(&is,sizeof(is),1,fp)==1)
            {
                if(strcmp(is.bookname,searchissuebook)==0)
                {
                    printf("\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            printf("     Student Name: ");
            printf("%s\n",is.studentname);
            printf("       Student Id: ");
            printf("%s\n",is.studentid);
            printf("        Book Name: ");
            printf("%s\n",is.bookname);
            printf("          Book Id: ");
            printf("%s\n",is.bookid);
            printf("    Book Category: ");
            printf("%s\n",is.bookcategory);
            printf("      Issued Date: ");
            printf("%s\n",is.issueddate);
            printf("      Return Date: ");
            printf("%s\n",is.returndate);
            printf("\n");
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            k=1;
                }
            }
            if(k==0)
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Match %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            fclose(fp);
             printf("Search any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
                issue();

        }
        break;
    }

        }
        break;

      case 4:

       {
            int n1;
          printf("\n\n\n\n%%%%%%%%%%%%%%%% SELECT SEARCH BOOK CATEGOLES %%%%%%%%%%%%%%%%\n");
          printf("          ::: 1. Mathematics\n");
          printf("          ::: 2. Engineering\n");
          printf("          ::: 3. Electronic\n");
          printf("          ::: 4. Management\n");
          printf("          ::: 5. Exit \n");
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          printf("Enter Your Choices:  ");
          scanf("%d",&n1);
    switch(n1)
           {
          case 1:
            {
            int cmp=1;
            FILE *fp,*ft;
            ft=fopen("mathissuebook2.txt","w");
            fp=fopen("mathissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            printf("\n\n\n\nEnter Name Of Issued Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deleteissuedbookname);
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
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
            }
            else
            {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               issue();
             //else
            //   mainmenu();
        fclose(fp);
        fclose(ft);
            }
            break;
          case 2:
            {
                int cmp=1;
            FILE *fp,*ft;
            ft=fopen("engineeringissuebook2.txt","w");
            fp=fopen("engineeringissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            printf("\n\n\n\nEnter Name Of Issued Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deleteissuedbookname);
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
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
            }
            else
            {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               issue();
             //else
            //   mainmenu();
        fclose(fp);
        fclose(ft);
            }
            break;
          case 3:
            {
                 int cmp=1;
            FILE *fp,*ft;
            ft=fopen("electronicissuebook2.txt","w");
            fp=fopen("electronicissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            printf("\n\n\n\nEnter Name Of Issued Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deleteissuedbookname);
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
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
            }
            else
            {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               issue();
             //else
            //   mainmenu();
        fclose(fp);
        fclose(ft);
            }
            break;

        case 4:
            {
                 int cmp=1;
            FILE *fp,*ft;
            ft=fopen("managementissuebook2.txt","w");
            fp=fopen("managementissuebook.txt","r");
            if(fread(&is,sizeof(is),1,fp)==1)
            {
             fseek(fp,0,0);
            char deleteissuedbookname[30];
            printf("\n\n\n\nEnter Name Of Issued Book To Delete\n");
            printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
            scanf("%s",deleteissuedbookname);
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
             printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
             printf("Delete Successfully\n\n");
            }
            else
            {
               printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%% The Book Did not Issued %%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
            }
            else
            {
                 printf("\n\n==========================================\n");
               printf("%%%%%%%%%%%%%%%%%%%%  There are no Issued book  %%%%%%%%%%%%%%%%%%%%\n");
               printf("==========================================\n\n\n");
            }
             printf("Delete any more? (1 / 0): ");
               int id;
               scanf("%d",&id);
              if(id==1)
               issue();
             //else
            //   mainmenu();
        fclose(fp);
        fclose(ft);
            }
            break;
     }

}
        break;
   case 5:
    mainmenu();
       break;
    default:
          printf("\n%%%%%%%%%%%%%%%%%% Invalid Entry %%%%%%%%%%%%%%%%%%\n");
          break;

}
return 0;
}
