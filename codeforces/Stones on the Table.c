#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    char arr[n];
    for(i=0;i<n;i++)
    {
        printf("hf");
        scanf("%c",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            c++;
    }
    printf("%d",c);
}
