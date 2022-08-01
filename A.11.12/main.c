#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5

int *row_cnt_max(int a[ROWS][COLS],int num);/*douleyei komple*/

int main()
{
    int *p,a[ROWS][COLS],num,i,j;

    srand(time(NULL));
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            a[i][j]=rand()%3;
        }
    }
    printf("dose arithmo : ");
    scanf("%d",&num);
    printf("pinakas a: \n");
    for(i=0;i<ROWS;i++)/*elegxei apla an mphkan oi times ston pinaka a*/
    {
        printf("\n");
        for(j=0;j<COLS;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    p=row_cnt_max(a,num);
    if (p==NULL)
        printf("den exei %d",num);
    else
    {
        printf("\nTimes grammhs: ");
        for(j=0;j<COLS;j++)
            {
                printf("%d ",*(p+j));
            }
    }
    return 0;
}

int *row_cnt_max(int a[ROWS][COLS],int num)
{
    int *p,i,j,cnt,max=0;

    for(i=0;i<ROWS;i++)
    {
        cnt=0;
        for(j=0;j<COLS;j++)
        {
            if (a[i][j]==num)
                cnt++;
        }
        if (cnt>max)
           {
                max=cnt;
                p=a[i];
           }
    }
    if (max==0)
        p=NULL;
    return p;
}
