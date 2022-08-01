#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct coord
{
    double x;
    double y;
};

struct rectangle
{
    struct coord point_A;
    struct coord point_B;
};

double rect_area(struct coord *c1,struct coord *c2);
struct coord center(struct coord *c1,struct coord *c2);/*epistrefei mia domh coord me ta mesa ton x1,y1 k x2,y2*/

int main()
{
    struct rectangle rect;
    struct coord m;

        printf("dOSE x,y \n");
        scanf("%lf%lf",&rect.point_A.x,&rect.point_A.y);

        printf("dOSE x,y \n");
        scanf("%lf%lf",&rect.point_B.x,&rect.point_B.y);

        printf("Area %f \n",rect_area(&rect.point_A,&rect.point_B));

        m=center(&rect.point_A,&rect.point_B);
        printf("To meso einai : xm %f ym %f\n",m.x,m.y);

    return 0;
}

double rect_area(struct coord *c1,struct coord *c2)
{
    double base ,height;

    if (c1->x>c2->x)
        base=c1->x-c2->x;
    else
        base=c2->x-c1->x;

    if (c1->y>c2->y)
        height=c1->y-c2->y;
    else
        height=c2->y-c1->y;

    return base*height;

}
struct coord center(struct coord *c1,struct coord *c2)
{
    struct coord meso;


        meso.x=(c1->x+c2->x)/2;

        meso.y=(c1->y+c2->y)/2;


    return meso;
}

