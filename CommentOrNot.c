#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^\t]",str);

    int i,j,lines=0;
    int l = strlen(str);

    for(i=0; i<l; i++){
        if(str[i] == '\n'){
            lines++;
       }
    }

    for(i=0; i<l; i++){
        if(lines==1){
            if(str[i]=='/'){
                printf("This is a comment.\n");
                break;
            }
            else{
                printf("This is not a comment.\n");
                break;
            }
        }
        else{
            if(str[i]=='\n'){
                if(str[i+1]=='/'){
                    printf("This is a comment.\n");
                    break;
                }
                else{
                    printf("This is not a comment.\n");
                    break;
                }
            }
        }

    }
    return 0;
}
