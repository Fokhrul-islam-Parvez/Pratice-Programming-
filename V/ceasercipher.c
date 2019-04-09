#include<stdio.h>
#include <string.h>
int main()
{
    printf("Select your operation\nEncryption==1\nDecryption==2\n");
    int op;
    scanf("%d",&op);
    if(op==1)
    {
                    int key1,length=0,i=0;
					char c;
					char pt[100];
					char ct[100];
						printf("Enter key: \n");
						scanf("%d",&key1);
						printf("Enter Plain text:\n");
						scanf("%s",&pt);
						length=strlen(pt);
						for(i=0;i<length;i++)
						{
							c=pt[i];
							int b=c;
							b=b-64;
							b=b+key1;
							b=b%26;
							b=b+64;
							char cc=(char)b;
							ct[i]=cc;
						}
						for(i=0;i<length;i++)
						{
						    printf("%c",ct[i]);
						}
    }
    if(op==2)
    {
        int key1,length=0,i=0;
					char c;
					char pt[100];
					char ct[100];
						printf("Enter key: \n");
						scanf("%d",&key1);
						printf("Enter cipher text:\n");
						scanf("%s",&ct);
						length=strlen(ct);
						for(i=0;i<length;i++)
						{
							c=ct[i];
							int b=c;
							b=b-64;
							b=b-key1;
								if(b<=0)
							{
								b=-1*b;
								int d=b/26;
								d=d+1;
								d=d*26;
								d=d-b;
								if(d==0)
									d=26;
								d=d+64;
								char cc=(char)d;
								pt[i]=cc;

							}
							else
							{
								b=b+64;
								char cc=(char)b;
								pt[i]=cc;
							}
						}
						for(i=0;i<length;i++)
						{
						    printf("%c",pt[i]);
						}
    }
}
