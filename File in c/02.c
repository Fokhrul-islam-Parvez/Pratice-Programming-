#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("file-2.txt","w");
    {
        scanf("%c",&ch);
        fprintf(fp,"%c",ch);
    }
    fclose(fp);
   fp=fopen("file-2.txt","r");
   {
       fprintf(fp,"%c",ch);
       printf("%c",ch);
   }
   fclose(fp);
   return 0;
}
