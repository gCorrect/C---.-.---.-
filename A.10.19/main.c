#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10];/*entaksei bghke.exv kanei mono gia dekadiko.gia akeraio pame paromoia me thn prohgoymenh
                                askhsh*/
    int i,j,lena,pos_yp=0,num;
    double sum=0,syn=1,syn_dek=0.1;
    gets(a);
    lena=strlen(a);
    printf("mhkos alfa: %d\n",lena);
    for(i=0;i<lena;i++)/*elegxw an yparxei ypodiastolh*/
    {
        if (a[i]=='.')
        {pos_yp=i;
        break;}
    }
    if (pos_yp!=0)

    {
        if(a[0]=='-')
        {for(i=pos_yp-1;i>0;i--)
        {
            sum+=(a[i]-'0')*syn*1.0;/*briskw to akeraio meros toy arnhtikou arithmou*/
            syn*=10;
        }
        printf("%f\n",sum);
        for(i=pos_yp+1;i<lena;i++)
        {
            num=(a[i]-'0');
            sum=sum+((double)num*syn_dek);/*briskw to akeraio meros toy arnhtikou arithmou*/
            syn_dek/=10;
        }
        }
        else
        {for(i=pos_yp-1;i>=0;i--)
        {
            sum+=(a[i]-'0')*syn*1.0;/*briskw to akeraio meros toy arnhtikou arithmou*/
            syn*=10;
        }
        printf("%f\n",sum);
        for(i=pos_yp+1;i<lena;i++)
        {
            num=(a[i]-'0');
            sum=sum+((double)num*syn_dek);/*briskw to akeraio meros toy arnhtikou arithmou*/
            syn_dek/=10;
        }
        }
    }
        if(a[0]=='-')
            sum*=-1;
    printf("%f",sum);
    return 0;
}
