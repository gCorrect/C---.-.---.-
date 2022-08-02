#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposit,rate;
    printf("Type the deposit amount: ");
    scanf("%f",&deposit);
    printf("Type the monthly interest rate %%: ");
    scanf("%f",&rate);
    rate/=100;
    printf("After a year deposit amount will grow to: %.2f\n",deposit+deposit*rate*12);
    return 0;
}
