#include<stdio.h>
#include <string.h>
char pt[100];
char ptx[100];
char pt1[100];
char key[100];
char ke[100];
char matrix[5][5];
int ptlength=0,keylength,doublekey=0,i=0,j=0,k=0,z=0;
void scanfunction()
{
    printf("Enter Text: \n");
    gets(pt1);
      gets(pt1);
    printf("Enter key: \n");
    gets(ke);
}
void ptoperation()
{
    char pc;
    ptlength=strlen(pt1);
     for(i=0;i<ptlength;i++)
    {
        int a=pt1[i];
        if(a==32)
            continue;
         ptx[j]=pt1[i];
        j++;
    }
    j=0;
     ptlength=strlen(ptx);
    for(i=0;i<ptlength;i++)
    {
        char c=ptx[i];
        if(i!=0)
          {
              pc=ptx[i-1];
              if(c==pc)
                {
                   pt[j]='X';
                   j++;
                }
           }
        pt[j]=c;
        j++;
    }
     ptlength= strlen(pt);
     j=0;
     if(ptlength%2!=0)
     {
          pt[ptlength]='X';
          ptlength++;
     }
     ptlength= strlen(pt);
     printf("pt==%s\n",pt);
}

void ctoperation()
{
     char pc;
    ptlength=strlen(pt1);
     for(i=0;i<ptlength;i++)
    {
        pt[i]=pt1[i];
    }
    j=0;
     ptlength=strlen(pt);
}

void keyoperation()
{
    keylength=strlen(ke);
    for(i=0;i<keylength;i++)
    {

        int a=ke[i];
        if(a==32)
                continue;
        key[j]=ke[i];
        j++;
    }
    keylength=strlen(key);
    int k=keylength;
 for(i=0;i<keylength;i++)
    {
        if(key[i]=='j')
        {
            key[i]='i';
        }
    }


    for(i=0;i<keylength;i++)
    {
      for(j=i+1;j<keylength;)
       {
         if(key[i]==key[j])
          {
             for(k=j;k<keylength;k++)
              {
                key[k]=key[k+1];;
              }
                keylength--;
           }
          else
           {
             j++;
           }
        }
     }

}
void matrixprocess()
{
    int intn=65;
    int y=0;
  // int ext=25-keylength;
   //printf("ext==%d",ext);
   for(i=0;i<26;i++)
   {
       char c=intn;
       for(j=0;j<keylength;j++)
       {
           if(c==key[j])
            {
                y=1;
                break;

            }
       }
       if(c=='J')
       {
           intn++;
           y=0;
           continue;

       }
       if(y==0)
       {
           key[keylength]=c;
           keylength++;

       }
       intn++;
       y=0;
   }
  //printf("%s",key);
  int a=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            matrix[i][j]=key[a];
            a++;

        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
}
void encryption()
{
    int r1=-1,r2=-1,c1=-1,c2=-1,a=0,z=0,t;
    for(t=0;t<ptlength/2;t++)
    {
        for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(pt[a]==matrix[i][j])
            {
                a++;
                 r1=i;
                 c1=j;
                break;
            }
        }
        if(r1!=-1)
            break;
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(pt[a]==matrix[i][j])
            {
                a++;
                 r2=i;
                 c2=j;
                break;
            }
        }
         if(r2!=-1)
            break;
    }
    if(r1==r2)
    {
        if(c1==4)
            c1=-1;
        if(c2==4)
            c2=-1;

        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1][c1+1],matrix[r2][c2+1]);
        z++;
        z++;
    }

    else if(c1==c2)
    {
        if(r1==4)
            r1=-1;
        if(r2==4)
            r2=-1;
        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1+1][c1],matrix[r2+1][c2]);
        z++;
        z++;
    }
    else
    {

        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1][c2],matrix[r2][c1]);
        z++;
        z++;
    }
    r1=-1;
    r2=-1;
    }

}

void decryption()
{
    int r1=-1,r2=-1,c1=-1,c2=-1,a=0,z=0,t;
    for(t=0;t<ptlength/2;t++)
    {
        for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(pt[a]==matrix[i][j])
            {
                a++;
                 r1=i;
                 c1=j;
                break;
            }
        }
        if(r1!=-1)
            break;
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(pt[a]==matrix[i][j])
            {
                a++;
                 r2=i;
                 c2=j;
                break;
            }
        }
         if(r2!=-1)
            break;
    }
    if(r1==r2)
    {
        if(c1==0)
            c1=5;
        if(c2==0)
            c2=5;

        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1][c1-1],matrix[r2][c2-1]);
        z++;
        z++;
    }

    else if(c1==c2)
    {
        if(r1==0)
            r1=5;
        if(r2==0)
            r2=5;
        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1-1][c1],matrix[r2-1][c2]);
        z++;
        z++;
    }
    else
    {
        printf("%c%c==%c%c\n",pt[z],pt[z+1],matrix[r1][c2],matrix[r2][c1]);
        z++;
        z++;
    }
    r1=-1;
    r2=-1;
    }

}
int main()
{
    printf("Select your operation:\nEncryption==1\nDecryption==2\n");
    int op;
    scanf("%d",&op);
    if(op==1){
    scanfunction();
    ptoperation();
    keyoperation();
    matrixprocess();
    encryption();
    }
    else if(op==2)
    {
        scanfunction();
        keyoperation();
        ctoperation();
        matrixprocess();
        decryption();
    }
}
