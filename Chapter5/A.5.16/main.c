#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,p=0;
    char oug,ch;
    printf("dose treis akeraious: \n");
    scanf("%d%d%d",&a,&b,&c);
    ch=getchar();
    fflush(stdin);
    printf("dose epilogh a b c: \n");
    scanf("%c",&oug);
    switch (oug)
    {
        case 'a' :
        if ( a!=b && a!=c && b!=c)
                printf("einai oloi diaforetikoi\n");
        else
            printf("yparxei isothta");
        case 'b' :
        if (a==b || a==c || b==c)
        printf("dyo isoi\n");
        else
        printf("einai oloi diaforetikoi\n");
        case 'c':
        if (a>=-5 &&a<=5)
            p++;
        if (b>=-5 && b<=5)
        p++;
        if (c>=-5 && c<=5)
            p++;
        printf("sto diasthma -5,5 einai %d arithmoi",p);
    }
    return 0;
}
