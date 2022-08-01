#include <stdio.h>

#define abs(a) ((a)>0 ? (a) : (-a))

int main()
{
	int i;
	scanf("%d",&i);
	printf("%d",abs(i));
	return 0;
}
