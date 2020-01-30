#include<stdio.h>
#include<string.h>
int main()
{
    char word[]="concatenation";
    char temp[]="-------------";
    char ch;
    int i,count;
    count=0;
    do{
        printf("%s\n",temp);
        printf("enter your guess :");
        ch=getchar();
        printf("\n");
        for(i=0;i<strlen(word);i++)
            if(ch==word[i])
            temp[i]=ch;
        count++;
    }
    while(strcmp(temp,word));
    printf("%s\n",temp);
    printf("you guessed the word and used %d gussess",count);
    return 0;
}
