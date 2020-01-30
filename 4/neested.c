#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            if(j!=i){
            for(c=1;c<=3;c++){
                if(c!=i && c!=j){
                printf("%d %d %d\n",i,j,c);
            }
        }
    }
  }
}
    return 0;
}
