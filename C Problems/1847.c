#include<stdio.h>
int main()
{
    int i,a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && (b==c || b<c))
        printf(":)\n");
        if(a<b && (b==c || b>c))
            printf(":(\n");
        if(a<b && b<c)
        {
            if(b-a>c-b)
                printf(":(\n");
            if(b-a<c-b)
                printf(":)\n");
            else
                printf(":)\n");
        }
        if(a>b && b>c)
        {
            if(a-b>b-c)
                printf(":)\n");
            if(a-b<b-c)
                printf(":(\n");
            else
                printf(":(\n");
        }
        if(a==b && b<c)
            printf(":)\n");
        if(a==b && b>c)
            printf(":(\n");
        if(a==b && b==c)
            printf(":(\n");
    return 0;
}
