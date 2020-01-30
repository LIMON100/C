#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int i,ln,j;

    while(scanf("%s",str)!=EOF){
      ln=strlen(str);
      j=0;

      for(i=ln+1; i>=0; i--){
        rev[j]=str[i];
        j++;
      }
      rev[j]='\0';
          if(strcmp(str,rev)==0)
        printf("pelindrome\n");
    else
        printf("not pelindrome\n");
    }
  return 0;
}
