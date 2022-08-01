#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,mera,fdays;
    enum months{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC} s;
    printf("dose arithmo mhna kai hmeras\n");
    scanf("%d%d",&s,&mera);
    printf("mhnas feb exei 28 h 29 meres?\n");
        scanf("%d",&fdays);
    if (s==1)
    {
        if (fdays==28)
        {
            if (mera>9)
          {
            mera=50-28-31+mera;
            printf("%d/%d",MAR,mera);
          }
          else
            printf("%d/%d",MAR,50-31+mera);
        }
        else
        {
            if (mera>10)
            {
            mera=50-29-31+mera;
            printf("%d/%d",MAR,mera);
            }
            else
            {
                printf("%d/%d",MAR,50-31+mera);
            }
        }
    }
    else if (s==FEB)
    {
        if (fdays==28)
        {
            if (mera>9)
          {
            mera=50-(28-mera)-31;
            printf("%d/%d",MAR,mera);
          }
          else
            printf("%d/%d",MAR,50-28+mera);
        }
        else
        {
            if (mera>10)
            {
            mera=50-29-31+mera;
            printf("%d/%d",APR,mera);
            }
            else
            {
                printf("%d/%d",MAR,50-29+mera);
            }
        }
    }
    else if (s==3)
    {
            if (mera>11)
          {
            mera=50-30-31+mera;
            printf("%d/%d",MAY,mera);
          }
          else
            printf("%d/%d",APR,50-31+mera);

    }
    else if (s==4)
    {
        if (mera>11)
        {
             mera=50-30-31+mera;
            printf("%d/%d",JUN,mera);
        }
        else
        printf("%d/%d",MAY,50-30+mera);

    }
    else if (s==5)
    {
        if (mera>11)
        {
             mera=50-30-31+mera;
            printf("%d/%d",JUL,mera);
        }
        else
        printf("%d/%d",JUN,50-30+mera);
    }
    else if (s==6)
    {
        if (mera>11)
        {
             mera=50-30-31+mera;
            printf("%d/%d",AUG,mera);
        }
        else
        printf("%d/%d",JUL,50-30+mera);
    }
    else if (s==7)
    {
        if (mera>11)
        {
             mera=50-31-31+mera;
            printf("%d/%d",SEP,mera);
        }
        else
        printf("%d/%d",AUG,50-31+mera);
    }
    else if (s==8)
    {
        if (mera>11)
        {
             mera=50-30-31+mera;
            printf("%d/%d",JUN,mera);
        }
        else
        printf("%d/%d",MAY,50-30+mera);
    }
    return 0;
}
