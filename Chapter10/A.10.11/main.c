#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch,a[100];
    int i,j,flag;
    for(i=0;i<100;i++)
    {
        scanf("%c",&ch);
        a[i]=ch;
        if(ch=='q')
        {
            a[i+1]='\0';
            break;
        }
        for(j=0;j<i;j++)
        {
            if (a[j]==a[i])
            {
                i--;
                break;
            }
        }
        getchar();
    }
    printf("%s",a);
    return 0;
}
