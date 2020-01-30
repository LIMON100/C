#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    char m[]="1001";
    int i,j,T,k,l1,l2,c,count,n,l,p;
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",a);
    l1=strlen(a);
    l2=strlen(m);
    count=0,l=0,n=1,p=1;
    for(c=0;c<l1;c++)
    {
        if(a[c]!=' ' && a[c]!='.' && a[c]!=" " && a[c]!='\0')
        {
            l++;
        }
    }
    for(k=0; k<l2; k++)
    {
        if(m[k]!=' ' &&  m[k]!=" " && m[k]!='\0')
        {
            count++;
        }
    }
    for(i=0; i<l; i++)
    {
        if(m[0]==a[i])
        {
            for(j=1; j<count; j++)
            {
                if(m[j]==a[i+j])
                  {
                    n++;
                  }
                  else
                  {
                      p++;
                  }
            }
        }
    }

            if(n==5 && p==5)
            {
                printf("NORMAL\n");
            }
            else
            {
                printf("MAGIC\n");
            }
            //printf("%d %d\n",n,p);
            n=0,p=0;
    }
    return 0;
}
