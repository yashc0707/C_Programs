#include<stdio.h>

int main()
{
    int arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p=&(arr[1]);
    q=&(arr[4]);

    //p+q; -Not Allowed

    p=p+3; //111

    printf("Data Pointed by P is:%d\n",*p);
    



    return 0;
}