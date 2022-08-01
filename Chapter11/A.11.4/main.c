#include <stdio.h>
#include <stdlib.h>

int char_cnt(char str[],char ch);

int main()
{
    char a[100],ch;
    int ;

    while(1)
    {
        printf("dose alfarithmitiko : ");
        gets(a);
        if (a[0]=='e' && a[1]=='n' && a[2]=='d')
            break;
        printf("dose xarakthra : ");
        scanf("%c",&ch);
        getchar();

        printf("o xarakthras %c briskete sto alpharithmitiko %s fores: %d\n",ch,a,char_cnt(a,ch));
    }
    printf("%s program",a);
    return 0;
}

int char_cnt(char str[],char ch)
{
    int i,cnt=0;

    while(*str!='\0')
        {
            if (*str==ch)
            cnt++;
            str++;
        }
    return cnt;
}

