#include <stdio.h>
#include <stdlib.h>

int main()/*deixnei poses fores epanalambanetai enas arithmos diadoxika ektws twn allwn*/
{
    int i,a,temp,p=1,max_p=0,num;
    scanf("%d",&a);
    temp=a;
    for (i=1;i<10;i++)
    {
        scanf("%d",&a);
        if (temp!=a)
            p=1;
        if (temp==a)
            p++;
        temp=a;
        if (p>=max_p)
        {
            max_p=p;
            num=a;
        }
    }
    printf("%d\t%d\n",max_p,num);
    return 0;
}
