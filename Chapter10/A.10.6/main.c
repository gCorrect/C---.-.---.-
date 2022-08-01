#include <stdio.h>
#include <stdlib.h>

int main()
{   char str[100],*p=str,temp;
    int i=0,temp1;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
        {

        printf("%d %c\n",i,*(str+i));
        i++;
        }
        i-=2;
        printf("i:%d\n",i);
        temp1=i;
     for(;i>temp1/2;i--)
     {
         temp=str[i];
         str[i]=*p;
         *p=temp;
         p++;
     }
    printf("%s\n",str);
    return 0;
}
