#include<stdio.h>
int main()
{
struct addbooks
{
    char a[40];
    char  id[30];
    char authorname[30];
    char price[30];
    char shelfnumber[30];
}book1;

    printf("\nENTER BOOK INFORMATION\n");
    printf("===============================\n");
     printf("Book Name: ");
    gets(book1.a);
    printf("Book Id: ");
    gets(book1.id);
    printf("Author Name: ");
    gets(book1.authorname);
    printf("Book Price: ");
    gets(book1.price);
    printf("Shelf Number: ");
    gets(book1.shelfnumber);
    printf("======================================\n");
    FILE *fp1;
    fseek (fp1, 0 , SEEK_END );
    fp1=fopen("math.txt","a");
    {
    fwrite(&book1,sizeof(book1),1,fp1);
    fprintf(fp1,"  \n");
    }
    fclose(fp1);
    printf("The record is sucessfully saved\n\n");
   // n1=0;
    printf("Save any more? (1 / 0): ");
    int id;
    scanf("%d",&id);
    //if(id==1)
   // addbook();
   // else
   //     mainmenu();
    return 0;
}
