#include <stdio.h>
#include <stdlib.h>

int main()/*bgazei lathos ypologismous se kapoies epiloges*/
{
    int typos,kiv,hm;
    float cost;
    char ch;
    printf("dose typo oxhmatos (1 gia motosikleta,2 gia aytokinhto): \n");
    scanf("%d",&typos);
    printf("dose kivismo: \n");
    scanf("%d",&kiv);
    printf("dose hmeres enoikiashs: \n");
    scanf("%d",&hm);
    switch (typos)
    {
    case 1:
        if (kiv<=100)
        {
            if (hm==1 ||hm==2)
                cost=hm*30.0;
            else if (hm>=3 && hm<=5)
                cost=hm*25.0;
            else if (hm>5)
                cost=hm*20.0;
        }
        if (kiv>100)
        {
            if (hm==1 ||hm==2)
                cost=hm*40.0;
            else if (hm>=3 && hm<=5)
                cost=hm*35.0;
            else if (hm>5)
                cost=hm*30.0;
        }
        case 2:
             if (kiv<=1000)
        {
            if (hm==1 ||hm==2)
                cost=hm*60.0;
            else if (hm>=3 && hm<=5)
                cost=hm*55.0;
            else if (hm>5)
                cost=hm*50.0;
        }
        if (kiv>1000)
        {
            if (hm==1 ||hm==2)
                cost=hm*80.0;
            else if (hm>=3 && hm<=5)
                cost=hm*70.0;
            else if (hm>5)
                cost=hm*60.0;
        }

    }
    ch=getchar();
    fflush(stdin);
    printf("8elete kai asfalish? Nai---> y Oxi---> n\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'y':
        printf("to kostos einai%.2f",(cost*0.05)+cost);
        break;
    case 'n':
        printf("to kostos einai%.2f",cost);
        break;
        default:
        printf("error\n");
    }
    return 0;
}
