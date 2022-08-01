#include <stdio.h>
int main(void)
{
    unsigned char a,b,c;
    int n;
    printf("dose thetiko akeraio arithmo: \n");
    scanf("%d",&a);
    printf("dose arithmo oktadwn apo 0 mexri 8 n: \n");
    scanf("%d",&n);
    printf("%d\n",sizeof a);
    printf("%d\n",a);
    b=a<<n;
    c=a>>8-n;
    printf("To a) erwthma : %d\n",b+c);
    b=a>>n;
    c=a<<8-n;
    printf("To a) erwthma : %d\n",b+c);
    return 0;
}
