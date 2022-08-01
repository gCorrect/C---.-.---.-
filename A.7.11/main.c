#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS],i,j,temp[ROWS][COLS];
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf("Enter number %d %d: ",i+1,j+1);
        scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
            if(j>=i)
            {
            temp[i][j]=a[i][j];
            a[i][j]=a[j][i];
            }
            else
            a[i][j]=temp[j][i];
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
    printf("Hello world!\n");
    return 0;
}
