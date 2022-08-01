#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0;
    float lab_grd,theory_grd;
    printf("dose vathmous 1ou mathhth: \n");
    scanf("%f%f",&lab_grd,&theory_grd);
    if ((lab_grd*0.3+theory_grd*0.7)>8)
        p++;
    printf("dose vathmous 2ou mathhth: \n");
    scanf("%f%f",&lab_grd,&theory_grd);
    if ((lab_grd*0.3+theory_grd*0.7)>8)
        p++;
    printf("dose vathmous 3ou mathhth: \n");
    scanf("%f%f",&lab_grd,&theory_grd);
    if ((lab_grd*0.3+theory_grd*0.7)>8)
        p++;
    printf("%d",p);
    return 0;
}
