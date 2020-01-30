#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int ln,count;
    ln=strlen(str);
    if(ln == str){
        printf("%d",ln);
        count++;
  }
    return 0;
}
