#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*arr[3],i,j,k,m,sum;
    arr[1]=&i;
    arr[2]=&j;
    arr[3]=&k;
    sum=0;
    for(m=0;m<3;m++)
        scanf("%d",arr[m]);
    for(m=0;m<3;m++)
    {
        if (*arr[m]%2==0)
            sum+=*arr[m];
    }

    printf("%d\n",sum);
    return 0;
}
