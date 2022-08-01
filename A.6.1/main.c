#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=111;i<=999;i++)
    {
        if (i/100!=4 && i%10!=6)
            printf("%d\n",i);
    }
    printf("Hello world!\n");
    return 0;
}
