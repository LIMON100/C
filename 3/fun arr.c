#include<stdio.h>
void abc(int arr1[])
{
    printf("before change in abc function arr[3]=%d\n",arr1[3]);
    arr1[3]=100;
    printf("after change in abc function arr[3]=%d\n",arr1[3]);
}
int main()
{
    int arr[5]={1,2,3,8,9};
    //
    printf("before change in main function arr[3]=%d\n",arr[3]);
    abc(arr);
    printf("after chsnge in main function arr[3]=%d\n",arr[3]);
    return 0;
}

