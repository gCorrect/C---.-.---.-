#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int sum=0,cnt=0;
    while (1)
    {
        printf("enter character: \n");
        scanf("%c",&ch);
        if(ch=='q')
            break;
        cnt++;
        sum+=ch;
        if (sum>500)
            break;
        getchar();
    }
    printf("%d  %d\n",cnt,sum);
    return 0;
}
