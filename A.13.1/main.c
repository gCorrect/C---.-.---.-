#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

struct employee
{
    char name[50];
    char surn[50];
    int age;
    float wage;

};

char empl_max_wage(struct employee empl[]);/*to idio ginetai kai gia thn hlikia*/

int main()
{
    int i;
    struct employee empl[SIZE];

    for (i=0;i<SIZE;i++)
    {
        printf("dOSE ONOMA: \n");
        gets(empl[i].name);

        printf("dOSE eponymo: \n");
        gets(empl[i].surn);

        printf("dOSE hlikia: \n");
        scanf("%d",&empl[i].age);

        printf("dOSE mistho: \n");
        scanf("%f",&empl[i].wage);
        getchar();
    }
    empl_max_wage(empl);
    return 0;
}

char empl_max_wage(struct employee empl[])
{
    int i;
    float max;
    char max_surn[50];

    max=empl[0].wage;
    for(i=0;i<SIZE;i++)
    {
        if (max<empl[i].wage)
        {
            strcpy(max_surn,empl[i].surn);
            max=empl[i].wage;
        }
    }
    printf("max wage surname: %s me mistho %f",max_surn,max);
}
