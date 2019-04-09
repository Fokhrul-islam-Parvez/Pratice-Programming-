#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("file-2.txt","w");
    {
        scanf("%c",&ch);
        putc(ch,fp);
    }
    fclose(fp);
   fp=fopen("file-2.txt","r");
   {
      ch=getc(fp);
       printf("%c",ch);
   }
   fclose(fp);
   return 0;
}
