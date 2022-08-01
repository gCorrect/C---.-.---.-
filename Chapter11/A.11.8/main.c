#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

int *test(int str[]);

int main()
{
    int *ptr,a[SIZE],i;

    for (i=0;i<SIZE;i++)
    {
        scanf("%d",a+i);
        getchar();
    }
    ptr=test(a);
    if (ptr==NULL)
        printf("den epanalamvanetai...");
    else
    printf("%d\n",*ptr);
    return 0;
}

int *test(int str[])
{
    int *max_num=NULL,i,j,cnt=0,max=1,flag=0;/*δηλώνω μαξ=1 γιατί αν επαναλαμβάνεται θα είναι για τουλάχιστον 1*/

    for(i=0;i<SIZE;i++)
    {
        for(j=i+1;j<SIZE-1;j++)
        {
            if (str[i]==str[j])
                cnt++;
        }
        if (cnt==1 && max==1)
        {
                max_num=str+i;
                cnt=0;
        }
        if (cnt>max)
        {
            max=cnt;
            max_num=str+i;
            cnt=0;
        }

    }
    if (max_num==NULL)
    {
        return max_num;
    }
    else
        return max_num;
}
