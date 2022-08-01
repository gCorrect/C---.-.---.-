#include <stdio.h>
#include <stdlib.h>

int main()/*thelw na to kanw beltistopoihsw me ligoteres metablhtes alla den exv akoma ton tropo*/
{
    unsigned char ch,x2,x4,x6,x8;
    printf("dose thetiko akeraio apo 0 mexri 255: \n");
    scanf("%d",&ch);
    x2=(ch&2)>>1; // ch&2 Is the logical and for 11111111 & 00000010 = 00000010
    x4=(ch&8)>>3;
    x6=(ch&32)>>5;
    x8=(ch&128)>>7;
    printf("to athroisma twn pshfivn einai: %d\n",x2+x4+x6+x8);
    return 0;
}
