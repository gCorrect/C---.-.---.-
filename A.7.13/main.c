#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5
int main()
{
    int a[ROWS][COLS],i,j,sum=0,min[COLS];
    srand(time(NULL));
    for(j=0; j<COLS; j++)
    {
        sum=0;
        for(i = 0; i < ROWS-1; i++)
        {
             a[i][j]=rand()%21;
             sum+=a[i][j];
        }
        do
        {
            a[ROWS-1][j]=rand()%21;
            sum+=a[ROWS-1][j];
        } while(sum>50);
        printf("%d\n",sum);
    }
     for(j=0; j<COLS; j++)
    {
        min[j]=a[0][j];
        for(i = 1; i < ROWS; i++)
        {
            if(a[i][j]<min[j])
                min[j]=a[i][j];
        }
    }
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(j=0; j < COLS; j++)
    {
        printf(" %d\n",min[j]);
    }
    return 0;
}
