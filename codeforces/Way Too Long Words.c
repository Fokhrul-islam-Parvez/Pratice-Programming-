#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[100];
    while(n!=0)
    {
        scanf("%d",s);
     int a=s.length();
		if(a>10) {
		char c= s.charAt(a-1);
		char c1=s.charAt(0);
		printf("%c %d %c",c1,a,c);
		}
		else
			printf("%s\n",s);

        n--;
    }
}
