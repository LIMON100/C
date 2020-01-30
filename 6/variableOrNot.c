#include<stdio.h>
#include<string.h>

int main()
{
    char string[50];

    int count,flag,j,i,l;

        gets(string);

        l=strlen(string);
        count=0;

         if((string[0]>='a'&& string[0]<='z') || (string[0]>='A'&& string[0]<='Z') || (string[0]=='_')){

           for(int i=1; i<=strlen(string); i++)
           {
             if((string[i]>='a'&& string[i]<='z') || (string[i]>='A' && string[i]<='Z') || (string[i]>='0'&& string[i]<='9') || (string[i]=='-') || (string[i]!=' ')){

                count++;
             }
           }
         }

         if(count==l){
            printf("This is a variable\n");
         }
         if(count!=l){
            printf("This is not a variable\n");
         }

    return 0;
}
