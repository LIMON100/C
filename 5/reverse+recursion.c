#include <stdio.h>
#include <string.h>

/* Function Prototype */
void disp_str1_rec(char *);

void main()
{
    char str1[100], *ptr;
    int len1 = 0, i;
    char ch;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str1);
    ptr = str1;
    len1 = strlen(str1);
    for (i = len1 - 1; i >= 0;i--)
    {

        ch = str1[i];
        printf("%c", ch);
    }
    return 0;
}
