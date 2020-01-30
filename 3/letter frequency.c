#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 //Maximum size of the string

int main()
{
    char string[MAX_SIZE];
    int i, r, a, flag,len;
    int frequency[26];

    /* Reads a string from user */
    printf("Enter any string: ");
    gets(string);

    len = strlen(string);

    /* Initializes frequency of each character to 0 */
    for(i=0; i<26; i++)
    {
        frequency[i] = 0;
    }


    /* Finds total number of occurrences of each character */
    for(i=0; i<len; i++)
    {

        /* If the current character is lowercase alphabet */
        if(string[i]>='a' && string[i]<='z')
        {
            frequency[string[i] - 97]++;
        }
        else if(string[i]>='A' && string[i]<='Z')
        {
            frequency[string[i] - 65]++;

        }
    }

    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(frequency[i]!=0)
        {
            a=frequency[i];
            //printf("%c = %d\n", (i+65), frequency[i]);
            for(r=2; r<a/2; r++)
            {
                if(a % r == 0)
                {
                    flag=1;
                    break;
                }
            }
             if(flag==0)
              printf("prime.\n");
            else
              printf("empty.\n");
        }
    }
        /*a=(i+65);
        for(r=2; r<a; r++)
        {
            if(a%r==0)
            {
                flag=1;
            }
        }
        if(flag==0)
            printf("prime.");
        else
            printf("empty.");*/
    return 0;
}
