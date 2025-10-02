#include<stdio.h>

int main()
{
    char cvalue='s';
    int ivalue=99;
    float fvalue=88.27f;
    double dvalue=77.222;

    printf("Size of Character is:%lu\n",sizeof(cvalue));
    printf("Size of integer is:%lu\n",sizeof(ivalue));
    printf("Size of float is:%lu\n",sizeof(fvalue));
    printf("Size of dounble is:%lu\n",sizeof(dvalue));

    printf("Address of cvalue:%lu\n",&cvalue);
    printf("Address of ivalue:%lu\n",&ivalue);
    printf("Address of fvalue:%lu\n",&fvalue);
    printf("Address of dvalue:%lu\n",&dvalue);

    return 0;
}