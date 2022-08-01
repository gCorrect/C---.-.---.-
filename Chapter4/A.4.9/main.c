#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int a,n1,n2,i=32,j,sum=0,pos=0;
    printf("dose arithmo a: ");
    scanf("%d",&a);
    while ((a>>(i-1) & 1)==0)
    {
        i--;
    }
    do
    {
        printf("dose dyo thesh bit metaksy 1-%d: ",i);
        scanf("%d%d",&n1,&n2);
    }while (n1<=1 || n2<n1 || n2>=i);
    for (j=n1; j<=n2; j++)
    {
       if (a>> (j-1) &1)
       sum+=pow(2,pos);
       pos++;
    }
    printf("%d\n",sum);
    printf("%d\n",sizeof a);
    return 0;
}
