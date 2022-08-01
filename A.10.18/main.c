#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10];/*etsi bgainei kai me 10pshfio arithmo kai antistoixa bgainei kai gia thetiko*/
    int i,j,lena,sum=0,syn=1;
    gets(a);
    lena=strlen(a);
     if(a[0]=='-')
        {for(i=lena-1;i>0;i--)
        {
                sum+=(a[i]-'0')*syn;/*kathe fora o syn(syntelesth) pollaplasiazetai epi 10.Milame gia megalh empneysh*/
                syn*=10;
        }
        }
        if(a[0]=='-')
            sum*=-1;
    printf("%d",sum);
    return 0;
}
/*Ayton to kwdika eixa skeftei arxika.ELEOS!!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[4];/*etsi antistoixa bgainei kai me 10pshfio arithmo kai antistoixa bgainei kai gia thetiko
    int i,j,lena,sum=0,ekat,dek,mon;
    gets(a);
    lena=strlen(a);
     if(a[0]=='-')
        {for(i=0;i<lena;i++)
        {
                if (i==1)
                {
                    ekat=a[i]-'0';
                    sum+=ekat*100;
                }
                else if (i==2)
                {
                    dek=a[i]-'0';
                    sum+=dek*10;
                }
                 else if (i==3)
                {
                    mon=a[i]-'0';
                    sum+=mon;
                }
        }
        }
        if(a[0]=='-')
            sum*=-1;
    printf("%d",sum);
    return 0;
}*/


