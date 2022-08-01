#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS],i,j,k,diff,b[ROWS-1][COLS-1],x;
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf("Enter number %d %d: ",i+1,j+1);
        scanf("%d", &a[i][j]);
        }
    }
    for(j=0; j < COLS; j++)
    {
        for(i = 0; i < ROWS; i++)
        {
            for (k=i+1;k<ROWS;k++)

            {if (a[i][j]==a[k][j])
                {diff=0;
                break;}
            else
                diff=1;}
        if (diff==0)
            break;
        }
        if (diff==1)
        {
            for(i = 0; i < ROWS; i++)
            printf("%d\n",a[i][j]);
        }
    }
    printf("Hello world!\n");
    return 0;
}
