#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float j;
    printf("Type a positive integer: ");
    scanf("%d",&a);
    a=a+50;
    j=(float)a/100;
    a=(int)j*100;
    printf("Rounded number is: %d\n",a);
    return 0;
}
