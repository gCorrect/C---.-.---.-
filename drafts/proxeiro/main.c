#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
    int i,arr[SIZE];
    srand(time(NULL));
    for (i=0;i<SIZE;i++)
        arr[i]=rand()%8;
    for (i=99;i>=0;i--)
    printf("%d\n",arr[i]);
    return 0;
}
