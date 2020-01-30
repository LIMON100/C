#include <string.h>
#include <stdio.h>

int main()
{
    char s1[100], s2[100],s3[100][100];
    int i, len,k=0,m=0,temp,l2,o=0,l3,arr[100],j;

    printf("\nEnter a string : ");
    scanf("%[^\n]s", s1);

    printf("\nEnter another string to concat : ");
    scanf(" %[^\n]s", s2);

    len = strlen(s1);
    s1[len] = ' ';

    for(i=len+1,j=0; s2[j]!='\0'; i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';

    l2=strlen(s1);
    for(i=0; i<l2; i++)
    {
        if(s1[i]!=' ')
        {
            s3[k][m]=s1[i];
            m++;
        }
        else
        {
            s3[k][m]='\0';
            k++;
            m=0;
        }

    }
   ///s3[k][m]='\0';

    for(i=0; i<m; i++)
    {
        for(j=0; j<1; j++)
        {
            if(s3[i][j]>='a' && s3[i][j]<='z')
            {
                arr[o]=s3[i][j]-97;
                printf("%d\n",arr[o]);
                o++;
            }
        }
    }
  printf("\n");
     for(i=0;i<o;i++)
     {
         for(j=i+1;j<o;j++)
         {
             if(arr[i]>arr[j])
             {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }

     for(i=0;i<o;i++)
     {
         if(arr[i]=)
     }
    return 0;
}
