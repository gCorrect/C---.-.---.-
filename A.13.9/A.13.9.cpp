#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

struct publisher
{
    char onoma[100];
};

struct book
{
    char writer[100];
    int code;
    struct publisher p;
};

int main()
{
    int i,kod;
    struct book b[SIZE];

    for (i=0;i<SIZE;i++)
    {
        printf("dOSE writer: \n");
        gets(b[i].writer);

        printf("dOSE ekdoth: \n");
        gets(b[i].p.onoma);

        printf("dOSE code: \n");
        scanf("%d",&b[i].code);
        getchar();
    }
    printf("dOSE code eyreshs: \n");
    scanf("%d",&kod);
        
    for (i=0;i<SIZE;i++)
    {
        if(kod==b[i].code)
        {
        	printf("Onoma syggrafea: %s kai ekdoths: %s",b[i].writer,b[i].p.onoma);
		}
    }
    return 0;
}
