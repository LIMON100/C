#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
    {
    char* firstString = argv[1];
    char* secondString = argv[2];
    int i, j;
    int flag = 0;
    for (i=0; i<strlen(firstString); i++)
    {
        for (j=0; j<strlen(secondString); j++)
        {
            if (firstString[i] == secondString[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf ("true\n");
        return 0;
    }
    else
    {
        printf ("false\n");
    }
    return 1;
}
