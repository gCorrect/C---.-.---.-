// ex. page 59, matrix page 46
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x=-12.123456789;
    
    printf("%3.3f\n",x); // page 52 --> Field width
    printf("%3.9f\n",x);
    printf("%*.9f\n",15,x);
    printf("%3.6f\n",x);
    printf("%3.5f\n",x);
    printf("%.f\n",x);
    return 0;
}
