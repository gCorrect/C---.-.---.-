#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS],i,j,katw,anw;
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
            if (i>j)
            {
                if (a[i][j]==0)
                    katw=1;
                else
                    katw=0;
            }
            if (i<j)
            {
                if (a[i][j]==0)
                    anw=1;
                else
                    anw=0;
            }
        }
    }
    if (katw==1)
    printf("katw trigwnikos\n");
    if (anw==1)
    printf("anw trigwnikos\n");
    return 0;
}
