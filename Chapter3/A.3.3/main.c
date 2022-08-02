#include <stdio.h>
#include <stdlib.h>

int main()
{
    int father_age,child_age,x;
    printf("Type ages of the father and the child repsectively: ");
    scanf("%d%d",&father_age,&child_age);
    x=father_age-2*child_age;/*father_age+x=2(child_age+x) -> x=father_age-2*child_age*/
    printf("Father will double age his child in: %d years.\nThe age of the father will be :%d \nThe age of the child will be: %d\n",x,father_age+x,child_age+x);
    return 0;
}
