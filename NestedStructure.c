#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj;
};
int main()
{

    printf("Size of Hello Structutre:%lu\n",sizeof(struct Hello)); //16


  
    return 0;
}