#include<stdio.h>
char upper_case(char ch)
{
    if(ch>='a' && ch<='z')
      return('A' + ch - 'a');
      else
       return ch;
}
int main()
{
    char lower,letter;
    printf("\n type a lowercase letter:");
    scanf("%c",&lower);
    letter=upper_case(lower);
    printf("\n\n the upper case of your typing letter is:%c",letter);
    return 0;
}

