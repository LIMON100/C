#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

//declaration
void userdetail(void);
void mainmenu(void);
void menu(void);
void menu_two(void);
void lines(void);
void getSubject(void);
void getCalculation(void);
void about(void);
float gradesToGP(char grades);

//display
void main()
{
    mainmenu();
}

//definition
void mainmenu(void)
{
    int select;

    lines();
    printf("\t\t\t   CGPA Calculation \n");

    lines();
    printf("Enter \"1\" - Student Detail and Subject Information\n");
    printf("Enter \"2\" - About\n");
    printf("Enter \"0\" - Exit\n");
    lines();
    printf("Enter your choice :");
    scanf("%d", &select);
    lines();

    if (select == 1)
    {
        userdetail();
        getSubject();
    }
    else if (select == 2)
    {
        about();
        getch();
        menu();
    }
    else if (select == 0)
    {
        system("cls");
        printf("\t\t  THANK YOU FOR USING THIS PROGRAM =D \n");
        getch();
    }
    else
    {
        printf("\a\a WRONG INPUT! \n");
        lines();
        getch();
        system("cls");
        mainmenu();
    }
}

void menu(void)
{
    int choice;
    printf("Enter \"1\" - Back to Main Menu\n");
    printf("Enter \"0\" - Exit\n");

    lines();

    printf("Enter your choice :");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system ("cls");
        mainmenu();
    }
    else if (choice == 0)
    {
        system("cls");
        printf("\t\t  THANK YOU FOR USING THIS PROGRAM =D \n");
        getch();
    }
    else
    {
        printf("\a\a WRONG INPUT! \n");
        getch();
        system("cls");
        menu();
    }
}


void lines(void)
{
    printf("**********************************************************************");
}

void userdetail(void)
{
    char name[100][100], id[100][10];

    printf("Enter your full name :\n");
    scanf("%s", &name);
    printf("Enter your student ID :\n");
    scanf("%s", &id);
}

void getSubject(void)
{
    int loop,numSubject, credit[100];
    float GP[100], TargetCGPA[100];
    char SubjectCode[100][40], grade[100];
    char name[100][100];
    char id[100][40];
    int sumCredit = 0;
    double sumCreditxGP = 0;

    system("cls");

    lines();
    printf("Enter total subject :");
    scanf("%d", &numSubject);
    lines();

    for (loop = 0; loop <= numSubject-1; loop++)
    {
        printf("Subject %d \n", loop+1);

        printf("Enter subject code :");
        scanf("%s", &SubjectCode[loop]);

        printf("Credit hour :");
        scanf("%d", &credit[loop]);

        printf("Enter your grade :");
        scanf("%s", &grade[loop]);

        GP[loop] = gradesToGP(grade[loop]);


        lines();
    }

    printf("Enter your targeted CGPA for this semester :");
    scanf("%f", &TargetCGPA);
    lines();
    printf("Press \" ENTER \" or any button");
    getch();
    system("cls");
    menu_two();


    void menu_two(void);
    {
    int choice;
    printf("Enter \"1\" - CGPA Calculation\n");
    printf("Enter \"0\" - Exit\n");

    lines();

    printf("Enter your choice :");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system ("cls");
        getCalculation();
    }
    else if (choice == 0)
    {
        system("cls");
        printf("\t\t  THANK YOU FOR USING THIS PROGRAM =D \n");
        getch();
    }
    else
    {
        printf("\a\a WRONG INPUT! \n");
        getch();
        system("cls");
        menu_two();
    }

    }



    void getCalculation(void);
    {
    system("cls");


    lines();
    printf("Student Name : %c\n", name);
    printf("Student ID : %c\n", id);
    lines();

    printf("No. Subject Code  Credit Hour  Grade  Grade Point");
    lines();

    for (loop = 0; loop <= numSubject-1; loop++)
    {
        printf("\n%d %s\t %d\t%s\t%.2f\n", loop+1, SubjectCode[loop], credit[loop], grade[loop], GP[loop]);
    }

    for (loop = 0; loop <= numSubject-1; loop++)
    {
        sumCredit = sumCredit + credit[loop];
        sumCreditxGP = sumCreditxGP + credit[loop] * GP[loop];
    }

    lines();
    printf("Total credit hour is = %d\n\n", sumCredit);
    printf("Total credit hour X grade point is = %.2f\n\n", sumCreditxGP);
    printf("CGPA is = %.2f", sumCreditxGP / sumCredit);

    lines();
    getch();
    menu();
    }

}


void about(void)
{
    system("cls");

    lines();

    printf("\n\t\t\tMini Project\n");
    lines();
    printf("Develop by: Shah Rezza Bin Jasni\n");
    printf("Institution: Universiti Tenaga Nasional\n\n\n");
    lines();
    printf("COPYRIGHT 2014");
    lines();
}

float gradesToGP(char grades)
{
    if (grades == 'A+')
    {
        return(float)4.00;
    }
    else if (grades == 'A')
    {
        return(float)4.00;
    }
    else if (grades == 'A-')
    {
        return(float)3.67;
    }
    else if (grades == 'B+')
    {
        return(float)3.33;
    }
    else if (grades == 'B')
    {
        return(float)3.00;
    }
    else if (grades == 'B-')
    {
        return(float)2.67;
    }
    else if (grades == 'C+')
    {
        return(float)2.33;
    }
    else if (grades == 'C')
    {
        return(float)2.00;
    }
    else if (grades == 'C-')
    {
        return(float)1.67;
    }
    else if (grades == 'D+')
    {
        return(float)1.33;
    }
    else if (grades == 'D')
    {
        return(float)1.00;
    }
    else if (grades == 'E')
    {
        return(float)0.00;
    }
    else
    {
            return(float)0.00;
    }
}
