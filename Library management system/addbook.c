#include<stdio.h>
#include<stdlib.h>
int addbook()
{
    printf("\n%%%%%%%%%%%%%%%%%% SELECT CATEGOLES %%%%%%%%%%%%%%\n");
    printf("::: 1. Mathematics\n");
    printf("::: 2. Engineering\n");
    printf("::: 3. Electronic\n");
    printf("::: 4. Management\n");
    printf("::: 5. Back to Main Menu\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
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
          printf("Invalid Entry\n");
          break;
    }

 return 0;
}





int math()
{
    FILE *fp1;
    fp1=fopen("math.txt","a");
    {
    printf("\nENTER BOOK INFORMATION\n");
    printf("===============================\n");
    printf("Book Name: ");
     gets(book1.bname);
    printf("Author Name: ");
    gets(book1.authorname);
    printf("Book Price: ");
    gets(book1.price);
    printf("Shelf Number: ");
    gets(book1.shelfnumber);
    printf("======================================\n");
    fwrite(&book1,sizeof(book1),1,fp1);
    fprintf(fp1,"\n");
    }
    fclose(fp1);
    printf("The record is sucessfully saved\n\n");
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



int engineering()
{
    FILE *fp1;
    fp1=fopen("engineering.txt","a");
    {
    printf("\nENTER BOOK INFORMATION\n");
    printf("===============================\n");
    printf("Book Name: ");
    gets(book1.bname);
    printf("Author Name: ");
    gets(book1.authorname);
    printf("Book Price: ");
    gets(book1.price);
    printf("Shelf Number: ");
    gets(book1.shelfnumber);
     printf("Book Name: ");
   scanf("%s",book1.bname);
    printf("======================================\n");
    fwrite(&book1,sizeof(book1),1,fp1);
   fprintf(fp1,"\n");
    }
    fclose(fp1);
   printf("The record is sucessfully saved\n\n");
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



int electronic()
{
    FILE *fp1;
    fp1=fopen("electronic.txt","a");
    {
    printf("\nENTER BOOK INFORMATION\n");
    printf("===============================\n");
    printf("Book Name: ");
     gets(book1.bname);
    printf("Author Name: ");
    gets(book1.authorname);
    printf("Book Price: ");
    gets(book1.price);
    printf("Shelf Number: ");
    gets(book1.shelfnumber);
    printf("======================================\n");
    fwrite(&book1,sizeof(book1),1,fp1);
    fprintf("\n",fp1);
    }
    fclose(fp1);
    printf("The record is sucessfully saved\n\n");
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



int management()
{
    FILE *fp1;
    fp1=fopen("management.txt","a");
    {
   printf("\nENTER BOOK INFORMATION\n");
    printf("===============================\n");
    printf("Book Name: ");
    gets(book1.bname);
    printf("Author Name: ");
    gets(book1.authorname);
    printf("Book Price: ");
    gets(book1.price);
    printf("Shelf Number: ");
    gets(book1.shelfnumber);
    printf("======================================\n");
    fwrite(&book1,sizeof(book1),1,fp1);
    fprintf(fp1,"\n");
    }
    fclose(fp1);
     printf("The record is sucessfully saved\n\n");
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
