#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double i=1,s1=0;
    scanf("%d",&n);
    do
    {
        s1=s1+(pow(5,i)/pow(3,i));
        printf("%f\n",s1);
        i++;
    }while(s1<=n);
    printf("%f oroi: %d\n",s1,(int)i-1);
    return 0;
}
