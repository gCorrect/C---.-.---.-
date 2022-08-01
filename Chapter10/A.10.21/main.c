#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

int main(void)
{
    char str[SIZE] [100],a[SIZE];/*TO A BGANEI OLOSWSTA.opws kai to b*/
    int i,j=0,num,word=0,cnt=0;

    for (i=0;i<SIZE;i++)
    {
        printf("Enter text: ");
        gets(str[i]);
    }
    printf("enter col number: ");
    scanf("%d",&num);
    for(i=0;i<SIZE;i++)
    {
        while((strlen(str[i])>=num) && i<SIZE)
            {
                if (strlen(str[i])>=num)
                    a[j]=str[i][num-1];
                i++;
                j++;
                if(strlen(str[i])<num || i==SIZE)
                   {
                       word++;
                       a[j]='\0';
                       j=0;
                       break;
                   }
            }
            printf("WORD%d %s\n",word,a);
    }
    do
    {printf("dose arithmo  grammhs: ");
    scanf("%d",&num);}
    while(num==0);
    for(j=0;j<strlen(str[num-1]);j++)
    {
        if(str[num-1][j]>='a' && str[num-1][j]<='z' )
        {
            cnt++;
        }
    }
    if(cnt<5)
        strcpy(str[0],str[num-1]);
    printf("%s",str[0]);
    return 0;
}
