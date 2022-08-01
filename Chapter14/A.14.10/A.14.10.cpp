#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)/*komple2*/
{
	int *p,*p1,*p2,*p3,size,size1=1,i,j,k;
	
	printf("Dose size pinakwn: \n");
	scanf("%d",&size);
	
	p=(int*) malloc(size*sizeof(int));
		if(p==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
	p1=(int*) malloc(size*sizeof(int));
		if(p1==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
	p2=(int*) malloc(size1*sizeof(int));
		if(p1==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
		p3=(int*) malloc(size*sizeof(int));
	printf("Enter p[0]: \n");
	scanf("%d",&p[0]);
	
	for(i=1;i<size;i++)
	{
		START:
		printf("Enter p[%d]: \n",i);
		scanf("%d",&p[i]);
		
		for(k=0;k<i;k++)
		{
			
			if (p[i]==p[k])
			{
				goto START;
			}
		}
	}
	for(i=0;i<size;i++)
	printf("p: %d",p[i]);
//--------pinakas p1-----------------	
	printf("\nEnter p1[0]: \n");
	scanf("%d",&p1[0]);
	
	for(i=1;i<size;i++)
	{
		START1:
		printf("Enter p1[%d]: \n",i);
		scanf("%d",&p1[i]);
		
		for(k=0;k<i;k++)
		{
			
			if (p1[i]==p1[k])
			{
				goto START1;
			}
		}
	}
	for(i=0;i<size;i++)
	printf("p1: %d",p1[i]);
	
//----eyresh koinwn stoixeivn.Pinakas p2------
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if (p[i]==p1[j])
			{
				p2[size1-1]=p[i];
				size1++;
				//printf("\n p2: %d",p2[size1-2]);
				p2=(int*) realloc(p2,size1*sizeof(int));
				break;
			}
		}
	}
	for(i=0;i<size1-1;i++)
	printf("\np2: %d",p2[i]);
//----Antigrafh stoixeivn pinaka p se p3 xvris epanalhpsh----
	printf("\n");
	
	memcpy(p3,p,size*sizeof(int));
	for(i=0;i<size;i++)
	printf("p3: %d",p3[i]);
	return 0;
}
