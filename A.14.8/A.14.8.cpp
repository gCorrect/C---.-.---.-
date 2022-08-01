#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 2
#define COLS 2

void set_values(int **arr,int rows, int cols);

int main(void)/*douleyei.ta filia m*/
{
	int **arr,*b,size,i,j,k=0,cnt=0;
	
	arr=(int**) malloc(ROWS*sizeof(int*));
	
	if(arr==NULL)
	{
		printf("Error: Not available memory\n");
		exit(EXIT_FAILURE);
	}
	
	for(i=0;i<ROWS;i++)
	{
		arr[i]= (int*) malloc(COLS*sizeof(int));
		if (arr[i]==NULL)
		{
			printf("Error: Not available memory\n");
			exit(EXIT_FAILURE);
		}
	}
	set_values(arr,ROWS,COLS);
	
	for (i=0;i<ROWS;i++)
	{
		for (j=0;j<COLS;j++)
		{
			if (arr[i][j]!=0)
				cnt++;
		}
	}
	i=j=0;
	b=(int*) malloc(cnt*3*sizeof(int));
	
	for (i=0;i<ROWS;i++)
	{
		for (j=0;j<COLS;j++)
		{
			if(arr[i][j]!=0)
			{
				b[k+2]=arr[i][j];
				b[k+1]=j;
				b[k]=i;
				k=k+3;
			}
		}
	}
	
	printf("cnt %d\n",cnt);
	for(i=0;i<cnt*3;i++)
	{
		printf("%d",b[i]);
	}
	for(i=0;i<ROWS;i++)
		free(arr[i]);
	free(arr);
	free(b);	
	return 0;
}

void set_values(int **arr,int rows, int cols)
{
	int i,j;
	
	for (i=0;i<ROWS;i++)
	{
		for (j=0;j<COLS;j++)
		{
			printf("SET arr[%d][%d]: ",i,j);
			scanf("%d",arr[i]+j);
			printf("arr[%d][%d]=%d\n",i,j,*(arr[i]+j));
		}
	}
}
