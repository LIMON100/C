#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    char student_name[20],subject_name[18];

    int student_roll,total_credit=0, elected_subject, marks;

    char intt[1];

    int i, credit, all_sub=6, sum_cr=0;

    float grade, mult=1, sum=0.0, result=0,add=0.0,sgpa;
    //getchar();


    printf("Enter student name :" );
    gets(intt);
    if(!isdigit(intt[0]))
    {
       student_name[0]=atoi(intt);
    }
    printf("Enter student roll :");
    scanf("%d",&student_roll);

    printf("Name : %s\nRoll : %d\n",student_name,student_roll);


    printf("input the name of subjects :\n");

    for(i=0;i<all_sub;i++) //subject=6;
     {
        printf("Name of subject %d :",i+1);
        scanf("%s",&subject_name[i]);

        printf("subject credit :");
        scanf("%d",&credit);

        printf("Obtained marks :");

        scanf("%d",&marks);
             ////////conversion of marks////////
        if(credit==3)
                {


        if(marks>=80 && marks<=100)
                {

        grade=4.00;
        printf("gp:4.00\n");

                }
        else if(marks>=75 && marks<80)
                {

        grade=3.75;
        printf("gp:3.75\n");

                }
        else  if(marks>=70 && marks<75)
                {

        grade=3.50;
        printf("gp:3.50\n");

                }
        else  if(marks>=65 && marks<70)

                {

        grade=3.25;
        printf("gp:3.25\n");

                }
        else if(marks>=60 && marks<65)

                {

        grade=3.00;
        printf("gp:3.00\n");

                }
        else if(marks>=55 && marks<60)

                {

        grade=2.75;
        printf("gp:2.75\n");

                }
        else if(marks>=50 && marks<55)

                {

        grade =2.50;
        printf("gp:2.50\n");

                }
        else if(marks>=45 && marks<50)

                {

        grade =2.25;
        printf("gp:2.25\n");

                }
        else if(marks>=40 && marks<45)

                {

        grade  =2.00;
        printf("gp:2.00\n");

                }
        else

                {

        grade =0.00;
        printf("gp:0.00\n");

                }
            }

        if(credit==1)
                {
        if(marks>=40 && marks<=50)
                {

        grade=4.00;
        printf("gp:4.00\n");

                }
        else if(marks>=38 && marks<40)
                {

        grade=3.75;
        printf("gp:3.75\n");

                }
        else  if(marks>35 && marks<38)
                {

        grade=3.50;
        printf("gp:3.50\n");

                }
        else  if(marks>=33 && marks<=35)

                {

        grade=3.25;
        printf("gp:3.25\n");

                }
        else if(marks>=30 && marks<33)

                {

        grade=3.00;
        printf("gp:3.00\n");

                }
        else if(marks>=28 && marks<30)

                {

        grade=2.75;
        printf("gp:2.75\n");

                }
        else if(marks>=25 && marks<28)

                {

        grade =2.50;
        printf("gp:2.50\n");

                }
        else if(marks>=23 && marks<25)

                {

        grade =2.25;
        printf("gp:2.25\n");

                }
        else if(marks>=20 && marks<23)

                {

        grade  =2.00;
        printf("gp:2.00\n");

                }
        else

            {

        grade =0.00;
        printf("gp:0.00\n");
            }
        }
    }
    sum_cr= sum_cr+credit;
    mult=grade*credit;
    add=sum+mult;

    sgpa=add/sum_cr;

    printf("\nYour SGPA In this Semister %.3f",sgpa);
    return 0;
 }

