#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int i,j,k,len1,len2,cnt=0;
    do
    {
        fgets(str1,sizeof(str1), stdin);
        fgets(str2,sizeof(str2), stdin);
        len1=strlen(str1);
        len2=strlen(str2);
        if (len2>len1)
            printf("edoses len2>len1\n");
    }while(len2>len1);
    printf("len2= %d\n",len2);
    for(i=0;i<len1;i++)
    {
        k=i;
        j=0;
        while(str1[k]==str2[j] && j<len2-1)
        {
            k++;
            j++;
        }
        if(j==len2-1)
        {
            cnt++;
        }

    }
    printf("%d \n",cnt);
    return 0;
}
