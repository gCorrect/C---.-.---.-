#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100],str3[100],temp[100];
    fgets(str1,sizeof(str1), stdin);

    fgets(str2,sizeof(str2), stdin);

    fgets(str3,sizeof(str3), stdin);
    strcpy(temp,str1);
    strcpy(str1,str3);
    strcpy(str3,str2);
    strcpy(str2,temp);
    printf("%s\n%s\n%s",str1,str2,str3);
    return 0;
}
