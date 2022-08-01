#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE1 2
#define SIZE2 2

int main(void)
{
    char vivl[SIZE1] [100],titl[SIZE2][100],onom[100];/*TO A BGANEI OLOSWSTA.κ το β*/
    int i,j,a,num[SIZE2][SIZE1],sum=0;

    for (i=0;i<SIZE1;i++)
    {
        printf("Dose onoma vivliopoleiou : ");
        gets(vivl[i]);
    }
    for (i=0;i<SIZE2;i++)
    {
        printf("Dose titlo vivliou : ");
        gets(titl[i]);
        for(j=0;j<SIZE1;j++)
        {
            printf("Dose arithmo antitypwn gia to vivliopoleio %d se ayto to vivlio : ",j+1);
            scanf("%d",&a);
            num[i][j]=a;
        }
        fflush(stdin);
        getchar();
    }
    printf("Dose titlo vivliou: ");
    gets(onom);

    for(i=0;i<SIZE2;i++)
    {
        if (strcmp(titl[i],onom)==0)
            {
                for(j=0;j<SIZE1;j++)
                {
                    if (num[i][j]!=0)
                    {
                        printf("to vivliopoleio %s exei arithmo antitypwn : %d\n",vivl[j],num[i][j]);
                    }
                }

            }
    }
    printf("Dose onoma vivliopoleiou : ");
        gets(onom);
    for(i=0;i<SIZE1;i++)
    {
        if (strcmp(vivl[i],onom)==0)
            {
                for(j=0;j<SIZE2;j++)
                {
                    sum+=num[j][i];
                }

            }
    }
    printf("synolo: %d",sum);
    return 0;
}
