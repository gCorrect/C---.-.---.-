#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e,g,h,dekaetia=1;/*hmhtelhs*/
    char dek,xron;
    printf("dose txexon etos kai hmeromhnia gennhshs: \n");
    scanf("%d%d",&e,&g);
    h=e-g;
    dekaetia=h/10;
    switch (dekaetia)
    {
        case 0 :
            printf("mhden-");
        if (h<10 && h>=0)
        {
            if  (h==1)
                printf("ena\n");
            else if (h==2)
                printf("dyo\n");
            else if (h==3)
                printf("tria\n");
            else if (h==4)
                printf("tessera\n");
            else if (h==5)
                printf("pente\n");
            else if (h==6)
                printf("eksi\n");
            else if (h==7)
                printf("efta\n");
            else if (h==8)
                printf("oxtw\n");
            else if (h==9)
                printf("tessera\n");
            else if (h==0)
                printf("mhden\n");

        }
        break;
     case 1 :

        printf("deka-");
            if  (h%10==1)
                printf("ena\n");
            else if (h%10==2)
                printf("dyo\n");
            else if (h%10==3)
                printf("tria\n");
            else if (h%10==4)
                printf("tessera\n");
            else if (h%10==5)
                printf("pente\n");
            else if (h%10==6)
                printf("eksi\n");
            else if (h%10==7)
                printf("efta\n");
            else if (h%10==8)
                printf("oxtw\n");
            else if (h%10==9)
                printf("tessera\n");
            else if (h%10==0)
                printf("mhden\n");
    break;
    case 2 :

        printf("ekosi-");
            if  (h%10==1)
                printf("ena\n");
            else if (h%10==2)
                printf("dyo\n");
            else if (h%10==3)
                printf("tria\n");
            else if (h%10==4)
                printf("tessera\n");
            else if (h%10==5)
                printf("pente\n");
            else if (h%10==6)
                printf("eksi\n");
            else if (h%10==7)
                printf("efta\n");
            else if (h%10==8)
                printf("oxtw\n");
            else if (h%10==9)
                printf("tessera\n");
            else if (h%10==0)
                printf("mhden\n");
    break;
    case 3 :

        printf("trianta-");
            if  (h%10==1)
                printf("ena\n");
            else if (h%10==2)
                printf("dyo\n");
            else if (h%10==3)
                printf("tria\n");
            else if (h%10==4)
                printf("tessera\n");
            else if (h%10==5)
                printf("pente\n");
            else if (h%10==6)
                printf("eksi\n");
            else if (h%10==7)
                printf("efta\n");
            else if (h%10==8)
                printf("oxtw\n");
            else if (h%10==9)
                printf("tessera\n");
            else if (h%10==0)
                printf("mhden\n");
    break;
    case 4 :

        printf("saranta-");
            if  (h%10==1)
                printf("ena\n");
            else if (h%10==2)
                printf("dyo\n");
            else if (h%10==3)
                printf("tria\n");
            else if (h%10==4)
                printf("tessera\n");
            else if (h%10==5)
                printf("pente\n");
            else if (h%10==6)
                printf("eksi\n");
            else if (h%10==7)
                printf("efta\n");
            else if (h%10==8)
                printf("oxtw\n");
            else if (h%10==9)
                printf("tessera\n");
            else if (h%10==0)
                printf("mhden\n");
    break;
    case 5 :

        printf("penhnta-");
            if  (h%10==1)
                printf("ena\n");
            else if (h%10==2)
                printf("dyo\n");
            else if (h%10==3)
                printf("tria\n");
            else if (h%10==4)
                printf("tessera\n");
            else if (h%10==5)
                printf("pente\n");
            else if (h%10==6)
                printf("eksi\n");
            else if (h%10==7)
                printf("efta\n");
            else if (h%10==8)
                printf("oxtw\n");
            else if (h%10==9)
                printf("tessera\n");
            else if (h%10==0)
                printf("mhden\n");
    break;
    }
    return 0;
}
