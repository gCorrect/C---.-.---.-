
#include <stdio.h>
 int main(void)
{
    unsigned long int a;
    int n,b,c;
    printf("dose thetiko akeraio arithmo: \n");
    scanf("%d",&a);
    printf("dose arithmo oktadwn apo 1 mexri 3 n: \n");
    scanf("%d",&n);
    printf("%d\n",sizeof a);
    if (a<=255)
    {
        if (n==3)
        {
            a<<=8;
        }
        else if (n==2)
        {
            a<<=16;
        }
        else if (n==1)
        {
            a<<=24;/*gamiesai edw gia moy bgazei arnhtiko.ah kai gamhsoy*/
        }
    }
    printf("O metasxhmatrismenos arithmos einai a= %d\n",a);
    return 0;
}
