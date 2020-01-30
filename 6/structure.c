#include<stdio.h>
#include<string.h>

struct account
{
    char name[50];
    char username[50];
    char password[50];
    struct birthday
    {
        int day,year,month;
    }birth;
    struct Sex
    {
        int male;
        int female;
    }sex;
};

int main()
{
    struct account user;
    char passck[50],sexck[50];
    printf("Enter your name : ");
    scanf("%s",user.name);
    printf("Enter Username : ");
    scanf("%s",user.username);

    printf("Enter your password : ");
    scanf("%s",user.password);
    printf("Re-enter your name : ");
    scanf("%s",passck);
    if(strcmp(user.password,passck)!=0)
    {
        printf("Your password is not correct.");
        return 0;
    }

    printf("Enter your Birthdate: \n");
    printf("\tDay : ");
    scanf("%d",&user.birth.day);
    printf("\tmonth : ");
    scanf("%d",&user.birth.month);
    printf("\tyear : ");
    scanf("%d",&user.birth.year);
    printf("Enter your sex (if male press m else press f): ");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0 || strcmp(sexck,"M")==0)
    {
        user.sex.male=1;
        user.sex.female=0;
    }
   else if(strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0)
    {
        user.sex.male=0;
        user.sex.female=1;
    }
    else
    {
        printf("You pressed Wrong key\n");
        return 0;
    }

    printf("NAME : %s\n",user.name);
    printf("USERNAME : %s\n",user.username);
    printf("NAME : %s\n",user.password);
    printf("Birthdate : %d / %d / %d \n",user.birth.day,user.birth.month,user.birth.year);

    printf("Sex :\n");
    if(user.sex.male==1)
        printf("Male\n");
     if(user.sex.female==1)
     printf("Female\n");

    return 0;
}
