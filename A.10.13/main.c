#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch,a[100],min_a[100],max_a[100];
    int i,j,len,sum=0,max,min;
    gets(a);
    len=strlen(a);
    sum=0;
    for(i=0;i<len;i++)
        {
            if (a[i]>='a' && a[i]<='i')
            {
                sum+=a[i]-'a'+1;
            }
            if (a[i]>='j' && a[i]<='r')
            {
                sum+=(a[i]-'j'+1)*10;
            }
            if (a[i]>='s' && a[i]<='z')
            {
                sum+=(a[i]-'s'+1)*100;
            }
        }
        printf("sum:%d\n",sum);
        strcpy(min_a,a);
        min=sum;
        strcpy(max_a,a);
        max=sum;
    while (1)
    {
        gets(a);
        len=strlen(a);
        sum=0;
        if (a[0]=='*' && a[1]=='*' && a[2]=='*')
        {
            break;
        }
        for(i=0;i<len;i++)
        {
            if (a[i]>='a' && a[i]<='i')
            {
                sum+=a[i]-'a'+1;
            }
            if (a[i]>='j' && a[i]<='r')
            {
                sum+=(a[i]-'j'+1)*10;
            }
            if (a[i]>='s' && a[i]<='z')
            {
                sum+=(a[i]-'s'+1)*100;
            }
        }
        printf("sum:%d\n",sum);
        if(sum>=max)
            {
                max=sum;
                strcpy(max_a,a);
            }
        if(sum<=min)
            {
                strcpy(min_a,a);
                min=sum;
            }
    }

    printf("min string:%s value:%d \nmax string:%s value:%d \n",min_a,min,max_a,max);
    return 0;
}
