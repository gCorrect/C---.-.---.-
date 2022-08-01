#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    int a[SIZE],i,j;
    for (i=0; i<SIZE ; i++)
    {
        scanf("%d",a+i);
    }
    for (i=0; i<SIZE ; i++)
    {
        for (j=i+1; j<SIZE ; j++)
        {
            if (*(a+i)==*(a+j))
                *(a+j)=-99;
        }
    }
    for (i=0;i<SIZE; i++)
    printf("%d\n", *(a+i));
    printf("Hello world!\n");
    return 0;
}
