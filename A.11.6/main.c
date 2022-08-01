#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

int arr_tax(int str[]);

int main()
{
    int a[SIZE] ,i,n,same;

    srand(time(NULL));
    for(i=0;i<SIZE;i++)
    {
        a[i]=5+rand()%16;

    }
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n%d",arr_tax(a));
    printf("\nend program");
    return 0;
}

int arr_tax(int str[])
{
    int ayx,fthin,i;

    for(i=0;i<SIZE-1;i++)/*elegxei an ayksanetai diadoxika. o parakatw broxos kanei to idios fninwn pinaka.*/
    {
        if (str[i]<str[i+1])
            ayx=1;
        else
            {ayx=0;
            break;}
    }
    for(i=0;i<SIZE-1;i++)
    {
        if (str[i]>str[i+1])
            fthin=1;
        else
            {fthin=0;
            break;}
    }
    if (ayx==1)
        return 1;
    else if (fthin==1)
        return 2;
    else return 3;
}
