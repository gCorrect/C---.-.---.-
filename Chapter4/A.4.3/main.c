#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min_grd,grd1,grd2,grd3;
    printf("dose th bash: ");
    scanf("%f",&min_grd);
    printf("dose to bathmo 3 foithtwn: \n");
    scanf("%f%f%f",&grd1,&grd2,&grd3);
    printf("O arithmos twn foithtwn pou perasan einai: %d\n",(min_grd<grd1)*1+(min_grd<grd2)*1+(min_grd<grd3)*1);
    return 0;
}
