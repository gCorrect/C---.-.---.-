#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],i=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
        {

        printf("%d %c\n",i,*(str+i));
        i++;
        }
    if (str[i-2]=='a' && *(str+i-3) )
    {
            for(;i-2>=0;i--)
            printf("%c\n",*(str+i-2));
    }
    printf("Hello world!\n");
    return 0;
}
