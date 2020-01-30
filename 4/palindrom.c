#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],re_str[100]={'\0'};
    int i,n,j=0,length=0;
    printf("enter string :");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
     printf("The length of the string '%s' = %d\n", str, length);

     for(i=length-1;i>=0;i--)
     {
         re_str[length-i-1]=str[i];
     }

     j=1;
     for(i=0;i<length;i++)
     {
         if(re_str[i]!=str[i])
            j=0;
     }

     if(j==0)
        printf("\n%s is not palindrome :",str);
     else
        printf("\n%s is palindrome :",str);
     return 0;
}
