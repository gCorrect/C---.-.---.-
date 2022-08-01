#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)/*douleyei*/
{
	int *p1,i;
	
	p1=(int*) malloc(3*sizeof(int));/*twra mporw na brw to megalytero me ta klassika if,else if ktl...*/
	
	for(i=0;i<3;i++)
	{
	scanf("%d",&p1[i]);/*prosoxh sto &*/
	getchar();
	}
	for(i=0;i<3;i++)
	{
	printf("%d",p1[i]);
	}
	
	return 0;
}
