#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_cnt(char str[],int *p_low,int *p_upper,int *p_dig);

int main()
{
    char a[100];
    int *p1,*p2,*p3,low_cnt=0,upper_cnt=0,dig_cnt=0;

    p1=&low_cnt;
    p2=&upper_cnt;
    p3=&dig_cnt;
    gets(a);
    if (a[0]=='a' && a[strlen(a)-1]=='q')
        {str_cnt(a,p1,p2,p3);
        }

    printf("\nlow :%d upper: %d digits: %d",low_cnt,upper_cnt,dig_cnt);
    printf("\nend program");
    return 0;
}

void str_cnt(char str[],int *p_low,int *p_upper,int *p_dig)
{
    int i;
    for(i=0;i<strlen(str);i++)/**/
    {
        if (str[i]>='a' && str[i]<='z')
            *p_low=*p_low+1;
        else if (str[i]>='A' && str[i]<='Z')
            *p_upper=*p_upper+1;
        else if (str[i]>='0' && str[i]<='9')
            *p_dig=*p_dig+1;
    }
}
