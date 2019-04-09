#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a1,a2,s2=0,a3=0,s3,t=0;
        char s[3]="PAR",s1[5]="IMPAR";
        char c1 [4][20];
        for(j=0;j<4;j++)
            scanf("%s",c1[j]);
        scanf("%d %d",&a1,&a2);
        t=a1+a2;
        s3= strncmp(s,c1[1],3);
        s2= strncmp(s1,c1[3],3);
        printf("%d %d\n",s3,s2);
       if(t%2==0)
       { if(s3==0)
        printf("%s\n",c1[0]);
        else
        printf("%s\n",c1[2]);
       }
        if(t%2!=0)
       { if(s2==1)
        printf("%s\n",c1[0]);
        else
        printf("%s\n",c1[2]);
       }
    }
    return 0;
}
