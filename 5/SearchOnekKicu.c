#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^\t]",str);

    int i,j;
    int spaces=0,lines=0,vowel=0,consonant=0,uppercase=0,lowercase=0;

    int l = strlen(str);

    for(i=0; i<l; i++){
        if(str[i]==' '){
            spaces++;
        }
        else if(str[i] == '\n'){
            lines++;
        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonant++;
        }
    }

    for(i=0; str[i]; i++){
        if(str[i]>='a'&& str[i]<='z'){
            lowercase++;
        }
        else if(str[i]>='A'&& str[i]<='Z'){
            uppercase++;
        }
    }

    printf("No of Lines: %d\n",lines);
    printf("No of Spaces: %d\n",spaces);
    printf("No of Vowels: %d\n",vowel);
    printf("No of Consonants: %d\n",consonant);
    printf("No of UpperCase: %d\n",uppercase);
    printf("No of LowerCase: %d\n",lowercase);

    return 0;
}
