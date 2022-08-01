#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,let,dig,oth,star1=1,star_pair=0;
    let=dig=oth=0;
    printf("enter text: \n");
    while((ch=getchar()) !='\n' && ch!=EOF)
    {
        if (ch=='*')
         {
                if(star1)
                {
                    let=dig=oth=0;
                    star1=0;
                    continue;
                }
                else
                {
                    star_pair++;
                        printf("Star pair %d facts: letters %d digits %d other %d\n",star_pair,let,dig,oth);
                        let=dig=oth=0;
                }
        }
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
                let++;
            else if (ch>='0' && ch<='9')
                dig++;
            else if (ch!='*')
                oth++;
    }
    if (star_pair==0)
        printf("error no pair of stars...\n");
    return 0;
}
