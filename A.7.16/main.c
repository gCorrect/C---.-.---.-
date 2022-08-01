#include <stdio.h>
#include <stdlib.h>


#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS]={0},i,j,k,rsvd_rooms,sel=0,pt,pt_flag;
    rsvd_rooms=0;
    while (sel!=4)
    {
        printf("\nMenu selections\n");
        printf("------------------\n");
        printf("1.eleythera dwmatia\n");
        printf("2.Kraths dwmatiou\n");
        printf("3.Akyrwsh krathshs\n");
        printf("4.Telos\n");

        printf("\n Enter choice\n");
        scanf("%d",&sel);

        switch (sel)
        {
            case 1:
                if (rsvd_rooms==ROWS*COLS)
                {
                    printf("\nSorry, no free rooms\n");
                    break;
                }
                else
                    for(i = 0; i < ROWS; i++)
                    {
                        for(j=0; j < COLS; j++)
                        {
                            if(a[i][j]==0)
                        printf("\neleythero einai to : \n%d-%d",i+1,j+1);
                        }
                        if(a[i][j]==0)
                        printf("\n");
                    }
                    break;
            case 2:
                while(1)

                {printf("\ndose arithmo pterygas [1-10]: \n");
                scanf("%d",&pt);
                pt_flag=0;
                for(i = pt-1; i ==pt-1; i++)
                    {
                        for(j=0; j < COLS; j++)
                        {
                            if (a[i][j]==0)
                            {
                                a[i][j]=1;
                                pt_flag=1;
                                rsvd_rooms++;
                            break;
                            }
                        }
                    }
                if (pt_flag==0)
                    {printf("\nh pteryga einai gemath.epelkse allh pteryga\n");
                    if (rsvd_rooms==ROWS*COLS)
                        break;}
                else
                    break;
                }
                break;
            case 3:
                printf("\nDOSE arithmo pterygas kai dwmatioy gia akyrwsh\n");
                scanf("%d%d",&i,&j);
                a[i-1][j-1]=0;
                rsvd_rooms--;
                break;
            case 4:
                return 0;
            default:
                printf("\nwrong choice\n");
    }
    }
    return 0;
}
