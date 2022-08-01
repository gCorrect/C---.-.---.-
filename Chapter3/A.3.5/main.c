#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arithmos_piatwn,arithmos_pothriwn;
    float prc_piatwn,prc_pothriwn,poso;
    printf("dose arithmo piatwn kai thn timh tou enos: \n");
    scanf("%d%f",&arithmos_piatwn,&prc_piatwn);
    printf("dose arithmo pothriwn kai thn timh tou enos: \n");
    scanf("%d%f",&arithmos_pothriwn,&prc_pothriwn);
    printf("dose to poso: \n");
    scanf("%f",&poso);

    printf("ta resta tou einai: %0.2f\n",poso-(arithmos_piatwn*prc_piatwn)-(arithmos_pothriwn*prc_pothriwn));
    return 0;
}
