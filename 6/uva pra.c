#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i=0,count=0,l;
    gets(str);
    l=strlen(str);
    for(i=0;i<=l;i++)
    {
         if(str[i]!=' '){
            if(str[i]!='.')
            count++;
        while(str[i]!=' ')
            i++;
    }
  }
  printf("%d",count);
  return 0;
}
