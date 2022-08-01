#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch,a[8];
    int i,j,flag=1,len,sum=0;
    while (1)
    {
        gets(a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if ((a[i]<'0' || a[i]>'9') && (a[i]<'a' || a[i]>'f') && (a[i]<'A' || a[i]>'F'))
            {
                flag=0;
                printf("dose pali arithmo metaksy 0-9 k a-f k A-F...\n");
                break;
            }
            else
                flag=1;
        }
        if (flag==1)
            break;
    }
    for(i=len-1;i>=0;i--)
    {
        if (i==len-1)
        {
            if (a[i]>='0' && a[i]<='9')
            {
                sum+=(a[i]-'0');
            }
            else
            {
                sum+=(a[i]-'a'+10);
            }
        }
        else if (i==len-2)
        {
            if (a[i]>='0' && a[i]<='9')
            {
                sum+=(a[i]-'0')*16;
            }
            else
            {
                sum+=(a[i]-'a'+10)*16;
            }
        }
        else if (i==len-3)
        {
            if (a[i]>='0' && a[i]<='9')
            {
                sum+=(a[i]-'0')*16*16;
            }
            else
            {
                sum+=(a[i]-'a'+10)*16*16;
            }
        }
        /*to 1af ginetai 431.apo kei ki epeita to programma synexizei me ton idio tropo*/
    }
    printf("sum:%d\n",sum);
    printf("%s",a);
    return 0;
}
