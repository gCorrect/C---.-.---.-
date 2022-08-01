#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0,i;

    for (number=100;number<1000;number++)
    {
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d \n.",number);
    else
        printf("%d is not an Armstrong number.\n",number);
    }
    printf("%d",1%10);
    return 0;
}
