#include <stdio.h>
#include <stdlib.h>

int main(void)/*douleyei*/
{
	int *p1;
	double *p2;
	
	p1=(int*) malloc(sizeof(int));
	p2=(double*) malloc(sizeof(int));
	
	scanf("%d",p1);
	scanf("%lf",p2);
	printf("%f",(double)*p1+*p2);
	return 0;
}
