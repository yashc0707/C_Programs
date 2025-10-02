#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length=0;
    int *Arr=NULL;

    printf("Enter the no. of elements:");
    scanf("%d\n",&length);

    Arr=(int*)calloc(length,sizeof(int));

    if(Arr==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory get succesfully allocated\n");
    }




    return 0;
}