#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main()
{
    int i=0,arr[SIZE];
    scanf("%d",&arr[0]);
    for (i=1;i<SIZE;i++)
    {
        do
        {
            printf("dose mikroterh timh apo thn teleytaia: \n");
            scanf("%d",&arr[i]);
            if (arr[i-1]<=arr[i])
                printf("edoses timh megalyterh h ish \n");
        }while (arr[i-1]<=arr[i]);
    }
    for(i=0;i<SIZE;i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
