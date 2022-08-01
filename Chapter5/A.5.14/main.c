#include <stdio.h>
#include <stdlib.h>

int main()/* einai apolytws swsth*/
{
    float a;
    scanf("%f",&a);
    printf("%s\n",(a>18 && a<=20) ? "exellent"  : (a>16 && a<=18) ? "good" : (a>14 && a<=16) ? "bad" : "oxi");
    return 0;
}
