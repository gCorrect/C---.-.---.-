#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main()
{
    int p=0,i;
    float a,b,arr[SIZE];
    for(i=0;i<SIZE;i++)
    {
        printf("dose bathmo toy %d foithth: \n",i+1);
        scanf("%f",&arr[i]);
    }
    do
    {
        printf("dose diasthma a-b: \n");
        scanf("%f%f",&a,&b);
        if (a>b)
            printf("dose a mikrotero apo b\n");
    }while (a>b);
    for(i=0;i<SIZE;i++)
    {
        if (arr[i]>=a && arr[i]<=b)
            p++;
    }
    printf("%d\n",p);
    return 0;
}
