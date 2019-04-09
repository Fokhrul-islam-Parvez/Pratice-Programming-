#include<stdio.h>
int main()
{
    int n,m,i,j,a;
    scanf("%d %d",&n,&m);
    int array[m];
    int array1[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&array[i]);
    }
   for(i=0;i<m;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
            if(array[j]>array[j+1])

            {
                a=array[j];
                array[j]=array[j+1];
                array[j+1]=a;
            }
        }
    }
    for(i=0;i<m && n<=m;i++,n++)
    {
        array1[i]=array[n-1]-array[i];
    }

   int  smal=array1[0];
     for(j=0;j<i;j++)
    {
       if(smal>array1[j])
       smal=array1[j];
    }


    printf("%d\n",smal);

}
