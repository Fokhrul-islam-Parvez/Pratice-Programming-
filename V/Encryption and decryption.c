#include<stdio.h>
  int key[2][2],i,j;
  char pt[4];
  char enc[8];
  char dec[8];
 void scanfunction()
    {
         printf("Enter key (2*2 matrix)\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&key[i][j]);
            }
        }
        printf("Enter Text(must be text length 4) :\n");
        scanf("%s",&pt);

    }
    void keyinverse()
    {
    int r2=key[0][0]*key[1][1]-key[0][1]*key[1][0];
    int r1=26,t1=0,t2=1,x=1,t=0;
    while(x==1){
    int d=r1/r2;
    int R=r1%r2;
    t=(t1-(t2*d));
     t1=t2;
     t2=t;
     r1=r2;
     r2=R;
     if(r2<=0 || r1<=1)
        break;
    }
    int ke=key[0][0];
    key[0][0]=key[1][1];
    key[1][1]=ke;
    key[0][1]=(key[0][1]*(-1))+26;
    key[1][0]=(key[1][0]*(-1))+26;

        for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    key[i][j]=key[i][j]*t1;
                    if(key[i][j]>25)
                    {
                        key[i][j]=key[i][j]%26;

                    }
                }
            }

    }
void matrixprocess()
{
      int le=sizeof(pt);
        int p=0,t,k=0,kk=0,n=0,in=0;
        for(t=0;t<2;t++)
        {
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    int in=pt[k];
                    k++;
                    in=in-65;
                     n=n+(key[i][j]*in);
                }
                if(n>25)

        {
                    int y=n/26;
                    int x=y*26;
                    n=n-x;
                }
                char f=n+65;

                enc[p]=f;
                p++;
                n=0;
                k=0;
                k=kk;
            }
            kk=2;
            k=2;
        }
}



int main()
{
    printf("Select your operation\nEncryption == 1\nDecryption == 2 \n");
    int op;
    scanf("%d",&op);
    if(op==1)
    {
        scanfunction();
        matrixprocess();
         for(i=0;i<4;i++)
        {
            printf("%c",enc[i]);
        }
    }
   if(op==2)
   {
        scanfunction();
        keyinverse();
        matrixprocess();
         for(i=0;i<4;i++)
        {
            printf("%c",enc[i]);
        }
   }
}
