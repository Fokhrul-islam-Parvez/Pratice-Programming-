#include<stdio.h>
int main()
{
  int i,t;
  scanf("%d",&t);
  int a[t];
  for(i=0;i<t;i++)
    scanf("%d",&a[i]);
  for(i=0;i<t;i++)
  {
      if(a[i]%2==0 && a[i]>0)
        printf("EVEN POSITIVE\n");
      if(a[i]%2==0 && a[i]<0)
        printf("EVEN NEGATIVE\n");
      if(a[i]%2!=0 && a[i]>0)
        printf("ODD POSITIVE\n");
      if(a[i]%2!=0 && a[i]<0)
        printf("ODD NEGATIVE\n");
      if(a[i]==0)
        printf("NULL\n");
  }
  return 0;
}
