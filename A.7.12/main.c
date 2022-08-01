#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5
int main()
{
    int a[ROWS][COLS]={0},i,j,k,temp;
    srand(time(NULL));
    for(i = 0; i < ROWS; i++)
    {
        for(j=i; j==i; j++)
        {
            a[i][j]=rand()%1001+1000;
            temp=a[i][j];
        }
        for (j=i+1;j<COLS;j++)
        {
            do{
            a[i][j]=rand()%1001+1000;
           } while(a[i][j]<=temp);
        }
        for (j=0;j<i;j++)
        {
            do{
            a[i][j]=rand()%1001+1000;
           } while(a[i][j]>=temp);
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
    for(i = 0; i < ROWS; i++)/*APO DW KAI STO EKSHS LYNW THN ASKHSH KATA STHLH */
    {
        for(j=i; j==i; j++)
        {
            a[i][j]=rand()%1001+1000;
            temp=a[i][j];
            for (k=ROWS-1;k>i;k--)
            {
            do{
            a[k][j]=rand()%1001+1000;
            } while(a[k][j]>=temp);
            }
            for (k=0;k<i;k++)
            {
            do{
            a[k][j]=rand()%1001+1000;
            } while(a[k][j]<=temp);
            }
        }
    }
    printf("\n\n");
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
