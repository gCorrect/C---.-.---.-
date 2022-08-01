#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)/*douleyei*/
{
	int *p,size,i;
	
	START:
	printf("dose arithmo akeraiwn\n");
	scanf("%d",&size);
	
	p=(int*) malloc(size*sizeof(int));
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&p[i]);/*prosoxh sto &*/
		if (p[i]==-5)
		{
			free(p);
			goto START;
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d",p[i]);
	}	
	return 0;
}

