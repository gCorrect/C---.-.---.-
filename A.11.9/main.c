#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find_part(char a[],char b[]);

int main()
{
    char *point,*p1,*p2,a[100],b[100];/*doyleyei oloswsta se osa exei dei*/

    gets(a);
    gets(b);
    point=find_part(a,b);
    if (point==NULL)
        printf("no such part...");
    else
        printf("part start at %c",*point);
}

char *find_part(char a[],char b[])
{
    int i,j,len1,len2,flag_p1=0,same,max=0,flag_ena_mono=0;
    char *p1,*p2,*p1_max,*p2_max;
    len1=strlen(a);
    len2=strlen(b);
    p1=a;
    p2=a;
    for (i=0; i<len1;i++)
    {
        same=0;
        for(j=0;j<len2;j++)
        {
            if (a[i]==b[j])
            {
                printf("same \n");
                same=1;
                break;
            }
        }
        if (same==1)
            {
                flag_p1=0;
                continue;
            }
        else
            {
                if (flag_p1==0)
                {
                    p1=a+i;
                    p2=a+i;
                    flag_p1=1;
                    printf("edw p1 %c \n",a[i]);
                    flag_ena_mono=1;/*elegxei se periptwsh poy yparxei mono ena diaforetiko*/
                    if (flag_ena_mono==1)
                        p1_max=a+i;
                }
                else
                {
                    printf("edw p2 %c \n",a[i]);
                    p2=a+i;
                    flag_ena_mono=0;
                }
            }
        if (p2-p1>max)
        {
            printf("/nedw elegxei ta max\n");
            max=p2-p1;
            p1_max=p1;
            p2_max=p2;
        }
    }
    printf("\nmax: %d\n",max);
    if (max==0 && flag_ena_mono==0)
        p1_max=NULL;

    return p1_max;
}

