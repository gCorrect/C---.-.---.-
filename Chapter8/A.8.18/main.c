#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5
int main()
{
    int a[ROWS][COLS],i,j,sum1=0,sum2=0;
    srand(time(NULL));
    for (i=0;i<ROWS; i++)
    {
        for (j=0;j<COLS; j++)
        {
            *(a[i]+j)=rand()%10;
        }
    }
    for (i=0;i<ROWS; i++)
        sum1+=*(a[i]+i);
    for (i=0;i<ROWS; i++)
        sum2+=*(a[i]+COLS-1-i);
    for (i=0;i<ROWS; i++)
    {
        for (j=0;j<COLS; j++)
        {
            printf("%3d ",*(a[i]+j));
        }
        printf("\n");
    }
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    return 0;
}
