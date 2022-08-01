#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i,j,words,p1,p2,len;

    i=words=0;

    printf("enter text: ");
    gets(str);
    len=strlen(str);
    printf("to mhkos einai: %d\n",len);
    for(i=len-1;i>=0;i--)
    {
        if ((str[i]!=' ' && str[i]!='\t') && (str[i+1]==' ' || str[i+1]=='\t' || str[i+1]=='\0'))
        {
            p2=i;
            for (j=i;j>=0;j--)
            {
                if (str[j]==' ' || str[j]=='\t')
                {
                    p1=j+1;
                    i=j;
                    break;
                }
                if (j==0 && (str[i]!=' ' && str[i]!='\t'))
                {
                    p1=0;
                }
            }
            for(j=p1;j<=p2;j++)
            {
                printf("%c",*(str+j));
            }
            printf("\n");
        }
    }
    return 0;
}
