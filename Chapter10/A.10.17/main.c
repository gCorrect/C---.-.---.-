#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],b[100];/*bghke swsto gamw thn panagia tou*/
    int i,j,p1,p2,max=0,max_p1,max_p2,lena,lenb,cnt=0,cnt1=0;
    gets(a);
    lena=strlen(a);
    gets(b);
    lenb=strlen(b);
        for(i=0;i<lena;i++)
        {
            cnt1=0;
            for(j=0;j<lenb;j++)
            {
                if (a[i]==b[j])
                {
                    cnt++;
                    p2=i;
                    break;
                }
                else
                {
                    cnt1++;
                    if(cnt1==lenb)
                        {cnt=0;
                        if (p2-p1>max)
                        {
                            max=p2-p1;
                            max_p1=p1;
                            max_p2=p2;
                        }
                        }
                }
            }
            if(cnt==1)
                p1=i;
        }
        for(i=max_p1;i<=max_p2;i++)
    {printf("%c",*(a+i));}
    printf("\nmax_p1 : %d max_p2 : %d",max_p1,max_p2);
    return 0;
}
