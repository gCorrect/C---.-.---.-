#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned char a;
    for (i=1;i<=256;i*=4)
    {
        printf("%d\n",i);
    }
    printf("Hello world!\n");
    return 0;
}
