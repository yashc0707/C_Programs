#include<stdio.h>

#pragma pack(1)

struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};
int main()
{

    printf("size of structure is:%lu\n",sizeof(struct Demo));
    

  
    return 0;
}