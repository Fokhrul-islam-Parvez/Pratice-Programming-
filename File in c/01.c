#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int ch;
    fp=fopen("file.txt","a+");
    {
        scanf("%d",&ch);
        fprintf(fp,"%d",ch);
    }
    fclose(fp);
    fp=fopen("file.txt","r");
    {
        fscanf(fp,"%d",&ch);
        printf("%d",ch);
    }
    fclose(fp);
    return 0;
}
