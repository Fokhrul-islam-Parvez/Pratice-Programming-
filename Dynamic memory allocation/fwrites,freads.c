#include<stdio.h>
#include<stdlib.h>
struct myaddress
{
    char name[50];
    char var[50];
    char id[30];
    char batch[30];
};
int main()
{
    struct myaddress paru;
    FILE *fp;
    fp=fopen("writ,read.txt", "w");
    {
        gets(paru.name);
        gets(paru.var);
        gets(paru.id);
        gets(paru.batch);
        fwrite(&paru,sizeof(paru),1,fp);
    }
    fclose(fp);
     fp=fopen("writ,read.txt", "r");
     {
          fread(&paru,sizeof(paru),1,fp);
          printf("\n");
        puts(paru.name);
        puts(paru.var);
        puts(paru.id);
        puts(paru.batch);
     }
     fclose(fp);
     return 0;
}
