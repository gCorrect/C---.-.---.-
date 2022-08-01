#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_text(char str[],int size,int flag);

int main()
{
    char str[100],*p=str,temp;
    int i=0,len,a,b;
    gets(str);
    len=strlen(str);
    do
    {
        puts("dose arithmo xarakthrwn gia diagrafh kai 8esh prwtou xarakthra: \n");
        scanf("%d%d",&a,&b);
    }
    while(a+b>len);
    len=len-b-a;
    for(i=b;i<=len+1;i++)
    {
        str[i]=str[i+a];
    }
    printf("%s\n",str);
    return 0;
}
