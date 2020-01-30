#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[20],token[20];
    int a=0,b=0,c,d;

    while(scanf("%s",str)!=EOF){

        while(str[a]!='\0'){
            if(str[a]=='(' || str[a]=='{' || str[a]=='['){
                token[b]='4';
                b++;
            }

            if(str[a]==')' || str[a]=='}' || str[a]==']'){
                token[b]='5';
                b++;
            }

            if(isdigit(str[a])){
                while(isdigit(str[a])){
                    a++;
                }
            }
            a--;
            token[b]='6';
            b++;

            if(str[a]=='+'){
                token[b]='2';
                b++;
            }
            if(str[a]=='*'){
                token[b]='3';
                b++;
            }
            a++;

        }

        token[b]='\0';
        b=0;

        while(token[b]!='\0'){
            if(((token[b]=='6') && (token[b+1]=='2') && (token[b+2]=='6'))
               || ((token[b]=='6') && (token[b+1]=='3') && (token[b+2]=='6'))
               || ((token[b]=='4') && (token[b+1]=='6') && (token[b+2]=='5')))

               {
                   token[b]='6';
                   c=b+1;
                   while(token[c]!='\0'){
                        token[c]=token[c+2];
                        c++;
                   }

                   token[c]='\0';
                   b=0;
               }
              else{
                 b++;
              }

        }

        if(token=="6"){
            d=token;
        }

        if(d==0){
            printf("This is a grammar.\n");
        }
        else{
            printf("This is not a grammar.\n");
        }

    }

    return 0;
}
