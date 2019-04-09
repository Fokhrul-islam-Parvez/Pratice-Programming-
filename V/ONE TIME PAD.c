#include<stdio.h>
#include <string.h>
char pt[100];
char key[100];
int ptn[100];
int keyn[100];
int ansn[100];
char ans[100];
int ptlen;
int keylen;
int i=0;
void scanfunction()
{
    printf("Enter Text: \n");
    scanf("%s",pt);
    printf("Enter Key: \n");
    scanf("%s",key);
    ptlen=strlen(pt);
    keylen=strlen(key);
    if(ptlen>keylen)
    {
        int d=ptlen-keylen;
        for(i=0;i<d;i++)
        {
            key[keylen]=key[i];
            keylen++;
        }
    }
    for(i=0;i<ptlen;i++)
    {
        char c=pt[i];
        int a=c;
        a=a-64;
        ptn[i]=a;
    }
     for(i=0;i<ptlen;i++)
    {
        char c=key[i];
        int a=c;
        a=a-64;
        keyn[i]=a;
    }

}
void decryoperation()
{
    for(i=0;i<ptlen;i++)
    {
         int n=ptn[i]-keyn[i];
         if(n<-26)
         {
             n=n*(-1);
             int a=n/26;
             a++;
             int b=a*26;
             n=b-a;
         }
         else if(n<=0)
         {
             n=n+26;
             if(n==0)
                n=26;
         }
         ans[i]=n+64;
    }
    for(i=0;i<ptlen;i++)
    {
        printf("%c",ans[i]);
    }
}

void encryoperation()
{
    for(i=0;i<ptlen;i++)
    {
        int n=ptn[i]+keyn[i];
        if(n>26)
            n=n%26;
        ans[i]=n+64;
    }
     for(i=0;i<ptlen;i++)
    {
        printf("%c",ans[i]);
    }
}
int main()
{
   printf("Choice your operation\nEncryption==1\nDecryption==2\n");
   int op;
   scanf("%d",&op);
   if(op==1)
   {
       scanfunction();
       encryoperation();
   }
   else if(op==2)
   {
       scanfunction();
       decryoperation();
   }

}
