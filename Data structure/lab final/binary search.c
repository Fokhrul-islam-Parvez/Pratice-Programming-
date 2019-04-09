#include<stdio.h>
int main()
{
    int asize,i,j;
    printf("Enter Your Array Size : ");
    scanf("%d",&asize);
    int arra[asize];
    printf("Enter Array Element : \n");
    for(i=0;i<asize;i++)
        scanf("%d",&arra[i]);
    printf("Enter Search Element: ");
    int selement,f,l,mid,t;
    scanf("%d",&selement);
    f=0;
    l=asize-1;
    mid=(f+l)/2;
    while(t=1)
    {
      if(arra[mid]==selement)
      {
          printf("Element %d Index Number %d",selement,mid+1);
          break;
      }
      if(arra[mid]>selement)
      {
           l=mid-1;
           mid=(f+l)/2;
      }
      else
      {
           f=mid+1;
           mid=(f+l)/2;
      }
      if(f>l)
      {
          printf("%d is not here",selement);
          break;
      }
    }
}
