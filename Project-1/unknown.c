#include<stdio.h>
int main()
{
    int i,j;
    FILE *ft;
 ft=fopen("libraryid.txt","w");
   for(i=0;i<5;i++)
  {
      scanf("%d",&j);
     fprintf(ft,"%d",j);
     fprintf(ft,"\n");k
  }
  fclose(ft);
   }
