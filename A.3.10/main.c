#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    temp=b;
    b=(b/100)*100+(((b%100)/10)*10)+a/100;
    a=(temp%10)*100+(((a%100)/10)*10)+a%10;
    printf("%d,%d\n",a,b);
    return 0;
}
