#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,arr[5],i;/*exei elleipseis alla sth genikh idea to pianhei to nohma*/
    ptr=arr;
    scanf("%d",ptr);
    while (ptr<arr+4)
    {
        if(!*ptr)
        {*ptr=29382983;
            break;}
        while (*ptr==-1)
        {
        printf("edose -1\n");
        scanf("%d",ptr);
        }
        ptr++;
        scanf("%d",ptr);
        while (*(ptr-1)<=*ptr)
        {
            printf("edoses megalytero i iso mton prohgoymeno\n");
            scanf("%d",ptr);
        }
    }
   for (i=0;i<5; i++)
    printf("%d\n", *(arr+i));
    return 0;
}
