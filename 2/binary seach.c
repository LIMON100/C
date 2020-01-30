#include<stdio.h>
int main()
{
    int a[13]={12,23,30,32,38,42,50,60,65,70,85,90,98};
    int start,end,key,mid,i;
    start=0;
    end=12;
    key=32;
    do{
        mid=(int)((start+end)/2);
        if(a[mid]==key){
            printf("%find at %d\n",mid+1);
            break;
        }
        else if(a[mid>key]){
            end=mid-1;
        }
        else{
            end=mid-1;
        }
        printf("start:%d\tend:%d\t");
    }
