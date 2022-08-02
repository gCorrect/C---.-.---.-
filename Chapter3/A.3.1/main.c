#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b,sum;
    printf("Give me an integer: \n");
    scanf("%d",&a);
    printf("Give me a float\n");
    scanf("%f",&b);
    sum=a+b;
    printf("Multiply 3 times their sum equals: %.2f",3*sum);
    return 0;
}
