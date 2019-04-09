#include<stdio.h>
#include<string.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
int main()
        {
            char password[15];
            char ch;
            int i=0,j,s;
            printf("Enter Your Password: ");
            while(1)
            {
                ch=getch();
                if(i==15)
                    break;
                if(ch==ENTER)
                {
                    password[i]='\0';
                    break;
                }
                else if(ch==BKSP)
                {
                    if(i>0)
                    {
                        i--;
                        printf("\b \b");
                    }
                }
                else if(ch==TAB || ch==SPACE)
                {
                    continue;
                }
                else
                {
                    password[i]=ch;
                    i++;
                    printf("*");
                }

            }

        printf("\n%s\n",password);
         return 0;
        }
