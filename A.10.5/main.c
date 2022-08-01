#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()/*midenizei to prwto stoixei toy pinaka str ara kai to prwto toy p gi ayto k etsi sketo den bgazei tpt*/
{
    char str[]="test",*p=str;
    *str=str[strlen(str)-1];
    while(*p)
        printf("%s",p++);
    return 0;
}
