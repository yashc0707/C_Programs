#include<stdio.h>

int main()
{
    int i=10;
    short int j=20;
    long int k=30;

    printf("Size of Integer:%lu\n",sizeof(i));  //4Byte
    printf("Size of short integer:%lu\n",sizeof(j)); //2
    printf("Size of Long integer:%lu\n",sizeof(k));  //8

    return 0;
}