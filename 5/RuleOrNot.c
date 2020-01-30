#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int flag,count,l,i,j,c,one=1,two=2,three=3,rule1,rule2;

    while(scanf("%s",str)!=EOF){

        l = strlen(str);

        count=flag=rule2=rule1=0;

        for(i=0; i<l; i++){

             if(i==0){
               if(str[i]=='a'){
                    rule1=1;
                }
            }
            if(str[i]=='a'){
                count++;
            }
            if(str[i]=='b'){
                flag++;
            }
            if(i==l-1){
                if(str[i]=='b'){
                    rule2=1;
                }
           }

        }
        if(count>1 && flag>1){
            printf("This is not under any rule.\n");
        }

        else if(rule2==1 && flag<=1 && count>=0){
            printf("This is under rule %d.\n",one);
        }

        else if(rule1==1 &&  flag>=1 && flag!=2){
            printf("This is under rule %d.\n",three);
        }

        else if(rule1==1 && flag==2){
            printf("This is under rule %d.\n",two);
            printf("This is under rule %d.\n",three);
        }
    }
    return 0;
}
