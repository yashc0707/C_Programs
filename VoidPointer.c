#include<stdio.h>

int main()
{
    void *vp=NULL;
    char ch='A';
    // int no=07;
    // float marks=45.55f;
    // double d=12.33;

    vp=&ch;
    
    printf("Value of vp:%c\n",*(char*)vp);


    return 0;
}