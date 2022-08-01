#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,i,num,temp1,p=0,max_p=0;
    srand(time(NULL));
    scanf("%d",&a);
    num=rand()&1;
    temp1=num;
    printf("%d\n",num);
    for (i=2;i<=a;i++)
    {
        num=rand()&1;
        printf("%d\n",num);
        if (temp1==0 && num==1)
        {
            temp1=1;
            p++;
            continue;
        }
        else if (temp1==1&&num==0)
        {
            temp1=0;
            continue;
        }
        else
        {
            temp1=num;
        }
        if (p>max_p)
            max_p=p;
            p=0;
    }
    printf("plhthos epanalhpsewn: %d\n",max_p);
    return 0;
}
