#include<stdio.h>
#include<string.h>
#include<ctype.h>

char caps_check(char *);

int main()
{
    char s[30],letter;
    printf("Enter a string: ");
    scanf("%s",&s);
    letter=caps_check(s);
       if (letter == 0)
    {
        printf("No capital letter is present in %s.\n", s);
    }
    else
    {
        printf("The first capital letter in %s is %c.\n", s, letter);    }
        return 0;
}

char caps_check(char *s)
{
    static int i=0;
    if(i<strlen(s))
    {
        if(isupper(s[i]))
        {
            return s[i];
        }
        else
        {
            i=i+1;
            return caps_check(s);
        }
    }
    else return 0;
}
