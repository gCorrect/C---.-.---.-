#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct circle
{
    double rad;/*nomizw einai oloswsth*/
};

struct square
{
    double len;
};

void * center (void* c1,int a);

int main()
{
    struct circle c={0};
    struct square s={0};

    int ptr,a;

    scanf("%d",&a);
    ptr=center(ptr,a);

    printf("%p\n",ptr);

    return 0;
}

void * center (void* c1,int a)
{
    struct circle *ptr,c={0};
    struct square *ptr1,s={0};

    if (a==0)
    {

        ptr=&c;
        ptr->rad=5;
        c1=ptr;
        printf(" %p----%p\n",c1,ptr);
        printf("edw %f\n",ptr->rad);
    }
    else
    {
        ptr1=&s;
        ptr1->len+=5;
        c1=ptr1;
         printf("edw %f\n",ptr1->len);
    }
    return c1;
}
