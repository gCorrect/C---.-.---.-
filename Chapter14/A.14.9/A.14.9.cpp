#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)/*sel 561.alliws me thn realloc.pantws douleyei mia xara*/
{
	int *p,*p1,size=1,i=0,k;
	
	 p=(int*) malloc(size*sizeof(int));
		if(p==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
		printf("Enter number: \n");
		scanf("%d",&p[0]);
		printf("output: %d\n",p[0]);
	
	while (1)
	{
		START:
		i++;
		size++;
		 p=(int*) realloc(p,size*sizeof(int));
		 
		if(p==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
		printf("Enter number: \n");
		scanf("%d",&p[i]);
		
		if(p[i]==-1)
		break;
		
		for(k=0;k<i;k++)
		{
			
			if (p[i]==p[k])
			{
				goto START;
			}
			if(k==i-1)
				printf("output: %d\n",p[i]);
		}
	}
	
	return 0;
}

