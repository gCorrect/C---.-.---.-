#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

int read_text(char str[], int size, int flag);

int main(void)
{
    char *temp, *ptr[SIZE], str[SIZE] [100],a[100];
    int i,j;

    for (i=0;i<SIZE;i++)
    {
        printf("Enter text: ");
        read_text(str[i], sizeof(str[i]), 1);
        ptr[i]=str[i];
    }
    printf("enter another text: ");
    gets(a);
    for(i=0;i<SIZE;i++)
    {
        if (strcmp(str[i],a)==0)
            printf("alhtheia");
    }
    printf("Hello world!\n");
    return 0;
}
