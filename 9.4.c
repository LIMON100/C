#include<stdio.h>
#define SWAP(a,b){\
    a^=b; \
    b^=a; \
    a^=b; \
}
int main()
{
    int a=545,b=422;
    printf("a=%d,b=%d\n",a,b);
    SWAP(a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
