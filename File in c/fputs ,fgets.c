#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[100];
    FILE *fp;
    fp=fopen("gets,puts.txt","w");
    {
        gets(ch);
        fputs(ch,fp);
        fputs("\n",fp);
        gets(ch);
        fputs(ch,fp);
    }
    fclose(fp);
   fp=fopen("gets,puts.txt","r");
   {
     fgets(ch,sizeof(ch),fp);
       printf("%s",ch);
    fgets(ch,sizeof(ch),fp);
      printf("%s",ch);
   }
   fclose(fp);
   return 0;
}
