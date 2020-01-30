/*#include<stdio.h>
void main()
{
    /*char str1[20] = "Sheyang";
    char str2[20] = "Sheyang";
    printf("%d",strcmp(str1,str2));*/

    /*int x=4,y;
    if(x%2==0)
        y=0;
    else
        y=1;

    printf("%d\n",y);*/

    /*int arr[10] = {1,1,1,1,1,-1,-1,-1,-1,-1};
    int i,result=0;

    for(i=0; i<10; i++)
    {
        result = result+arr[i];
        printf("result=%d",result);
    }*/

    /*struct people
    {
        char name[20];
        int age;
        char city[20];
        char country[20];
    }p={"Mike",23,"Dalian","China"}

    printf("%s,%d,%s",p.name,p.age,p.city);*/

    /*int v1,v2,temp;

    scanf("%d%d",&v1,&v2);

    temp=v1;
    v1=v2;
    v2=temp;

    printf("v1=%d,v2=%d",v1,v2);*/

    /*int n,j=0;
    for(n=1; n<=200; n++)
    {
        if(n%5==0)
            printf("%d ",n);
    }
}

#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);

    if(x==0)
        y=0;
    if(x<0)
        y=2;
    if(x>0)
        y=-2;

    printf("X=%d",y);
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int s=(a+b+c)/2;

    int value = (s*(s-a)*(s-b)*(s-c));
    int area = sqrt(value);
    printf("Area=%d",area);
    return 0;
}*/


#include<stdio.h>
#include<math.h>
int main()
{
    int a[10],i,value,Max,Min;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    Max = a[0];
    Min = a[0];

    for(i=1; i<10; i++)
    {
        if(a[i] > Max)
        {
            Max = a[i];
        }
        if(a[i] < Min)
        {
            Min = a[i];
        }
    }

    printf("Largest number is= %d\nSmallest number is= %d",Max,Min);
    return 0;
}
