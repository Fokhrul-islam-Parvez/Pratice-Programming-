#include<stdio.h>
struct addbooks
{
    char bname[30];
    char authorname[30];
    char price[30];
    char shelfnumber[30];
};

int main()
{
    struct addbooks book1;
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
     printf("\n======================================\n");
    fwrite(&book1,sizeof(book1),1,fp1);
    }
    fclose(fp1);
    printf("BOOK ADD SUCESSFULL\n");
}
