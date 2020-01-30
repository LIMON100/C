#include<stdio.h>
int main()
{
    int return_value;
    char *filename="image1.png";

    return_value=remove(filename);

    if(return_value!=0)
    {
        perror("file remove failed");
        return 1;
    }

    printf("%s removed successfully\n",filename);
    return_value=remove(filename);

    if(return_value!=0)
    {
        perror("file remove failed");
        return 1;
    }


    printf("%s removed successfully\n",filename);
    return 0;
}
