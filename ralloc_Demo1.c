#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr=NULL;

//Step1:Allocate the memory
    Arr=(int*)malloc(5*sizeof(int));

    Arr=(int*)realloc(Arr,10*sizeof(int));

    free(Arr);

   




    return 0;
}