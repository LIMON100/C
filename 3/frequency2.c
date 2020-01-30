#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char string[MAX_SIZE];
    int i, len, j, flag;
    int frequency[26];

    printf("Enter any string: ");
    gets(string);

    len = strlen(string);

    for(i=0; i<26; i++)
    {
        frequency[i] = 0;
    }

    for(i=0; i<len; i++)
    {

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
            printf("%c = %d\n", (i+97), frequency[i]);
        }
        for(j=2; j<frequency[i]; j++)
        {
            if(frequency[i]%j==0)
              {
                flag=1;
              }
        }
    }
    if(flag==0)
        printf("prime.",frequency[i]);
    else
        printf("not prime.",frequency[i]);

    return 0;
}
