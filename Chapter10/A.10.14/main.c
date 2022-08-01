#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch,a[100],b[100];/*douleyei me to paradeigma tou bibliou kai me
    alla paradeigmata.alla an grapseis some something some kai some.8a bgalei arloumpes*/
    int i=0,j,k,lena,lenb,found,end=0;
    gets(a);
    lena=strlen(a);
    gets(b);
    lenb=strlen(b);
    while (1)
    {
        found=0;
        k=i;
        j=0;
        if (a[k]==a[strlen(a)-1])
        break;
        for(j=0;j<lenb;j++)
        {
            if (a[k]!=b[j])
                {
                    break;
                }
            if (a[k]==b[j])
            {
                k++;
            }
        }
        if(j==lenb)
                {
                    found=1;
                    k=i;
                    printf("j swsto");
                }
        while (found==1 && a[k]!='\0')
            {
                a[k]=a[k+lenb];
                k++;
            }
        if(found==0)
            i++;
    }
    printf("string1 : %s\n",a);
    printf("mhkos alfarithmitikou%d",strlen(a));
    return 0;
}
