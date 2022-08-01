#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS],i,j,sum=0,b[ROWS-1][COLS-1],x;
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf("Enter number %d %d: ",i+1,j+1);
        scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number [1-5]: \n");
        scanf("%d", &x);
     for(i = 0; i < x; i++)
    {
            for(j=0; j < x; j++)
            {
                b[i][j]=a[i][j];
            }
            for(j=x+1; j < COLS; j++)
            {
                b[i][j-1]=a[i][j];
            }
    }
     for(i = x+1; i < ROWS; i++)
    {
        for(j=0; j < x; j++)
            {
                b[i-1][j]=a[i][j];
            }
            for(j=x+1; j < COLS; j++)
            {
                b[i-1][j-1]=a[i][j];
            }
    }
    printf("\n\n");
    printf("\n\n");
    for(i = 0; i < ROWS-1; i++)
    {
        for(j=0; j < COLS-1; j++)
        {
        printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
