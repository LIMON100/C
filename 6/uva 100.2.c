#include<stdio.h>
int main()
{
    long long n,a,b,mxcycle=0,cycle,mx=0;
    long long count=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        count++;
        while(a<=b){
        if(n==1)
            break;
        if(n%2!=0){
            n= (3*n + 1)+1;
        }
        else
            n= (n/2)+1;
            cycle=long long a;
        if(mx<cycle){
        mx=cycle;
        a++;
        }
    }
  }
    printf("%lld\n",count);
    return 0;
}
