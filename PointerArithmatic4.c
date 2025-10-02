#include<stdio.h>

int main()
{
    int arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p=&(arr[1]);
    q=&(arr[4]);

    printf("Result of Substraction is:%ld\n",q-p); //3 Allowed

    q=q-2; //Allowed

    printf("Data pointed by qis:%d\n",*q); //51


    
    



    return 0;
}