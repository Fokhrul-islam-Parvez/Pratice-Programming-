#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<time.h>



struct registe
{
    char id[30];
    char ps[30];
} r1;


void Record()

{
    struct student
    {
        int id;
        int batch;
        char department[20];
        char name[30];
        double marks;

    };
    system("COLOR 2C");
    struct student s1,s2;
    FILE* file=fopen("d:\\student.txt","w+");
    if (file == NULL )
    {
        printf("Error in saving data:\n");
        return;
    }
    while (1)
    {

        printf("Enter Name:");
        scanf("%s",&s1.name);

        printf("\nEnter ID : ");
        scanf("%d",&s1.id);

        printf("\nEnter Marks:");
        scanf("%lf",&s1.marks);

        printf("\nEnter Department : ");
        scanf("%s",&s1.department);

        printf("\nEnter Batch : ");
        scanf("%d",&s1.batch);

        fprintf(file,"%d\t%s\t%lf\n",s1.id,s1.name,s1.marks);
        printf("\ncontinue (y/n)");
        char ch= getch();
        if(ch=='n')
            break;
    }
    fclose(file);
    printf("\nIf you want to continue");
    printf("\nFor continue press any number except  [6=Exit]\n");
    return;
}



int sum=0;
int Payment()
{

    int d,p;
    char ans;

    printf("This amount is fixed for a semester:\n");
    printf("Total Due: 50000/=\n\n");
    d=50000;
    printf("Enter your payment: \nTHat you paid this semester ");
    scanf("%d",&p);
    printf("You have paid %d\nYou have due %d\n\n",p,sum=d-p);


    printf("\nIf you want to continue");
    printf("\nFor continue press any number except [6=Exit]\n");
    scanf ("%c",&ans);
    //if( ans=='y'||ans=='Y'){

    //
}



void Information()
{
    int x;
    printf("\t\t\t----ON LINE INFORMATION----");
    printf("\n\nIf you want know about Your [SWE] Faculty over Online website:\nEnter [1] for this option\n");
    printf("\n If you want to know about your campus over Online:\nEnter [2] for this option\n");

    printf("\n\n\n\t\t\t---OFF LINE INFORMATION---\n");
    printf("\nIf you want know about this press any key without [1] or [2]\n");

    scanf("%d",&x);
    if (x==1)
    {
        system("explorer http://swe.daffodilvarsity.edu.bd/");
    }
    else if(x==2)
    {
        system("explorer https://daffodilvarsity.edu.bd/page/main_campus/main-campus ");
    }
    else
    {
        printf("\n\nYou are not enter correct option\n");
    }
    printf("\t\t\t---OFF LINE INFORMATION---\n\n");
    printf("\t----- Course Information Of Software Engineering Department-----\n\n");

    printf("\t\t1st Year \t\t Semester-1\n");
    printf("Course Code : SWE-112\t\tCourse Title : Computer Fundamentals\n");
    printf("Course Code : SWE-113\t\tCourse Title : Computer Fundamentals Lab\n");
    printf("Course Code : SWE-114\t\tCourse Title : Introduction to Software Engineering\n");
    printf("Course Code : PHY-113\t\tCourse Title : PhysicsI\n");
    printf("Course Code : PHY-114\t\tCourse Title : PHY-I Lab\n");

    printf("\n\n\t\t1st Year \t\t Semester-2\n");
    printf("Course Code : ENG-121\t\tCourse Title : Basic Functional English and English Spoken\n");
    printf("Course Code : MAT-111\t\tCourse Title : Math-I\n");
    printf("Course Code : SWE-121\t\tCourse Title : Software Requirement Analysis and Design\n");
    printf("Course Code : SWE-123\t\tCourse Title : Programming Language\n");
    printf("Course Code : SWE-124\t\tCourse Title : Programming Language Lab\n");

    printf("\n\n\t\t1st Year \t\t Semester-3\n");
    printf("Course Code : MAT-121\t\tCourse Title : Math-II\n");
    printf("Course Code : SWE-133\t\tCourse Title : Data Structure\n");
    printf("Course Code : SWE-133\t\tCourse Title : Data Structure Lab\n");
    printf("Course Code : SWE-134\t\tCourse Title : Statistics & Probabilities\n");
    printf("Course Code : SWE-231\t\tCourse Title : Software Engineering Project-1 (using-C)\n");

    printf("\nIf you want to continue\n");
    printf("For continue press any number except  [6=Exit]\n");

}



void login()
{
    int c;
    printf("\n1:>>Are You Student\n\n2:>>Are You Teacher\n");
    printf("\nEnter What you are:\n");
    scanf("%d",&c);
    system("cls");
    system("COLOR 41");
    if(c==1)
    {

        int t=0;
        char cid[30];
        char cps[30];
        printf("Enter Your ID: ");
        scanf("%s",cid);
        printf("Enter Your Password: ");
        scanf("%s",cps);
        FILE *fp;
        fp=fopen("saru.txt","r");
        while(fread(&r1,sizeof(r1),1,fp)==1)
        {
            if(strcmp(cps,r1.ps)==0)
            {
                t=1;
                 while(c!=6)
        {
            printf("\nEnter 1 for Record\n\nEnter 2 for result\n\nEnter 3 for Payment\n\nEnter 4 for information\n\n");

            scanf("%d",&c);
            system("cls");
            switch(c)
            {
            case 1:
                Record();
                break;
            case 2:
                printf("Result");
                break;
            case 3:
                Payment();
                break;
            case 4:
                Information();
                break;

            default:
                printf("invalid input:please enter 1 to 5");
            }
            scanf("%d",&c);
            system("cls");
        }
    }
            }

        if(t==0)
        {
            printf("Wrong password\n");
            printf("Try Again (1/0): ");
            int i;
            scanf("%d",&i);
            if(i==1)
                login();
            else
                return;
        }
}

if(c==2)
{

    int a=0;
    char did[30];
    char dps[30];
    printf("Enter Your ID: ");
    scanf("%s",did);
    printf("Enter Your Password: ");
    scanf("%s",dps);
    FILE *fp;
    fp=fopen("saru.txt","r");
    while(fread(&r1,sizeof(r1),1,fp)==1)
    {
        if(strcmp(dps,r1.ps)==0)
        {
            a=1;

             while(c!=3)
    {
        printf("\nEnter 1 for Result\n\nEnter 2 for Shedule\n\nEnter 3 for Exit\n\n");
        printf("Enter Your Choice:\n");

        scanf("%d",&c);
        system("cls");
        switch(c)
        {

        case 1:
            Update_Result();
            break;
        case 2:
            printf("Shedule\n");
            break;
        case 3:
            printf("Exit");
            break;

        default:
            printf("invalid input:please enter 1 to 5");
        }
        scanf("%d",&c);
        system("cls");

    }
}

    }

    if(a==0)
    {
        printf("Wrong password\n");
        printf("Try Again (1/0): ");
        int i;
        scanf("%d",&i);
        if(i==1)
            login();
        else
            return ;
    }
}
}




void Update_Result()
{

    int swe133,swe134,swe121;
    float per;
    FILE * fp;
    fp=fopen("result.txt","w+");
    if (fp == NULL )
    {
        printf("Error in saving data:");
        return ;
    }


    while(1)
    {


        printf("Enter SWE133's mark :\n");
        scanf("%d",&swe133);

        printf("Enter SWE134's mark :\n");
        scanf("%d",&swe134);

        printf("Enter SWE121's mark :\n");
        scanf("%d",&swe121);

        per=(swe133+swe121+swe134)/3;
        printf("Percentage =%.2f\n",per);

        if(per>=80 && per<=100)
        {
            printf("%d is,Grade A+:CGPA=4.00",per);
            printf(("\nHe will able to chose next course:"));
            printf("\n He or She will be got 50(%) scholarship");
        }
        else if(per>=70 && per<80)
        {
            printf("%d is Grade A\nCGPA=3.50",per);
            printf(("\nHe will able to chose next course:"));
            printf("\n He or She will be got 40% scholarship");
        }
        else if(per>=60 && per<70)
        {
            printf("%d is Grade A-\nCGPA=3.25",per);
            printf(("\nHe will able to chose next course:"));
            printf("\n He or She will be got 25% scholarship");
        }
        else if(per>=50 && per<60)

        {
            printf("d isGrade B\nCGPA=3.00",per);
            printf(("\nHe will able to chose next course:"));
            printf("\n He or She will be got 15% scholarship");
        }
        else if(per>=40 && per<50)
        {
            printf("%d is Grade c\nCGPA=2.75",per);
            printf(("\nHe will able to chose next course:"));
            printf("\nThere is no  scholarship for this result");
        }
        else
        {
            printf("Grade F\n\n");
            printf(" \nAnd He/SHe will  not grandted for next course:");
        }

        fprintf(fp,"%d\n",per );
        printf("\ncontinue (y/n)");
        char ch= getch();
        if(ch=='n')
            break;
    }
    fclose(fp);
    printf("\nIf you want to continue");
    printf("\nFor continue press any number except  [3=Exit]\n");

    return;
}

int registration()
{
    printf("Enter Your ID: ");
    scanf("%s",r1.id);
    printf("Enter Your Password: ");
    scanf("%s",r1.ps);
    FILE *fp;
    fp=fopen("saru.txt","w");
    fwrite(&r1,sizeof(r1),1,fp);
    fclose(fp);
    main();
}




int main ()
{
    system("COLOR 1E");
    int c;

    printf("\n                   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    printf("\n                   <------ Daffodil International University----->            ");
    printf("\n                     ------->>  Software Engineering  <<-------                   ");
    printf("\n                                  :Student Portal:                     ");
    printf("\n                   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    (void) printf("\t\t\tToday is %s", c_time_string);


    while(c!=2)
    {


        printf("\n\n\n    1:->>Registration  \n\n    2:->>Log In \n\n    3:->>Exit\n\n             ");



        printf("Enter your choice:-\n    ");
        scanf("%d",&c);
        system("cls");
        switch(c)
        {


        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("Exit");
        default:
            printf("\n\n\n\t\tinvalid input:\n\nplease enter 1 to 3:\n");
        }

        printf("\n\n\n    1.Registration \n    2.Log In\n 3.Exit\n\n            ");
        printf("Enter your choice:\n    ");
        scanf("%d",&c);
    }

    printf("\nIf you want to continue");
    printf("\nFor continue press any number except  [3=Exit]\n\n");
    return 0;
}
