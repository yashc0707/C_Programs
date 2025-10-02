#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj;

    printf("Size of Demo:%lu\n",sizeof(struct Demo));
    printf("Size of Object:%lu\n",sizeof(obj));

    return 0;
}