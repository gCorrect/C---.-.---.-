#include <stdio.h>
#include <stdlib.h>

int f(int x);
int g(int x);

int main()
{
    int x,a;

    printf("dose timh tou x : ");
    scanf("%d",&a);
    printf("%d",f(a));

    return 0;
}

int f(int x)
{
    int k;
    k=g(x);

    if(k>0)
        return k+2;
    else
        return -3*k+7;
}
int g(int x)
{
    if (x>0)
        return x*x+2;
    else
        return 7*x-5;
}
