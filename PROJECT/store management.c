#include<stdio.h>
#include<string.h>


//Global Variables
char shop_name[100];
char owner[20];
char dat[20];
char pnam[30];
float purchase_pric;
float selling_pric;
float profi;


//User-defined Function Declaration
void write();
int welcome();
void display(char sd[]);


//main Function
void main()
{
    int ch;
    char sd[20];
    welcome();
    do
    {
        system("cls");
        printf("Welcome to the %s\nOwner %s",shop_name, owner );
        printf("\nPress <1> to create entry for product sold");
        printf("\npress <2> to display net profit of one specific date");
        printf("\nPress <0> to exit");
        printf("\n\nEnter Choice ::");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:{
                write();
                break;
            }
            case 2:
                {
                    printf("\nEnter Date format(dd-mm-yyyy)::");
                    scanf("%s", &sd);
                    display(sd);
                    break;
                }
            case 0:
                exit(0);
            default:
                printf("\nInvalid Selection");
        }
        getch();
    }while(ch!=0);
}

//definition of welcome() function
int welcome()
{
    system("cls");
    system("COLOR F0");
    printf("Enter Shop Name (Use Underscore instead of blank space )::\n");
    scanf("%s", shop_name);
    printf("Enter Owner's name (Use Underscore instead of blank space )::\n");
    scanf("%s", owner);
    return 0;
}



//Definition of write() function (writes data to a text file)
void write()
{
    FILE *fp;
    char date[20];
    char pname[30];
    float purchase_price;
    float selling_price;
    float profit;
    printf("\nEnter Date format(dd-mm-yyyy)::");
    scanf("%s", date);
    printf("\nEnter Product Name (Use Underscore instead of blank space)::");
    scanf("%s", pname);
    printf("\nPurchase Price::");
    scanf("%f", &purchase_price);
    printf("\nEnter Selling Price ::");
    scanf("%f", &selling_price);
    profit = selling_price - purchase_price;
    fp = fopen("record.txt", "a");
    fprintf(fp,"%s %s %.2f %.2f %.2f\n", date, pname, purchase_price, selling_price, profit);
    printf("\nRecord Written successfully!!!");
    fclose(fp);
    printf("\nPress any key to contitue");
}


//Definition of display() function (shows net profit of one specific day)
void display(char sd[])
{
    FILE *fp;
    int res;
    int flag = 0;
    double net_profit = 0;
    fp=fopen("record.txt", "r");
    while(fscanf(fp,"%s %s %f %f %f\n",dat,pnam,&purchase_pric,&selling_pric,&profi)!=EOF)
    {
        res = strcmp(dat,sd);
        if(res==0)
        {
            net_profit += profi;
            flag = 1;
        }
    }
    fclose(fp);
    if(flag==1)
    {
        printf("Date :: %s\n", sd);
        printf("Net Profit ::%lf\n", net_profit);
        printf("Press any key to continue");
    }else
    {
        printf("Sorry Your Input Doesn't Match Any Data!\nPlease Correct Your Input\n");
        printf("Press any key to continue");
    }
}
