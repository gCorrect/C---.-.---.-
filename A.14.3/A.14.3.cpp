#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(double*arr,int size, int *un20,int *ov100);

int main(void)/*douleyei*/
{
	int *un20,*ov100,size,i;
	double *arr,prc;
	
	un20=(int*) malloc(sizeof(int));/*edw skeftomoyn na sygkrinw me memcmp() alla de mou bghke.etsi to kana kapws anaorthodoxa*/
	*un20=20;
	ov100=(int*) malloc(sizeof(int));
	*ov100=100;
	
	printf("dose arithmo proiontwn\n");
	scanf("%d",&size);
	
	arr=(double*) malloc(size*sizeof(double));
	
	for(i=0;i<size;i++)
	{
	scanf("%lf",&arr[i]);/*prosoxh sto &*/
	}
	
	find(arr,size,un20,ov100);
	
	
	printf("<20 einai %d  >100  %d",*un20,*ov100);
	
	return 0;
}

void find(double*arr,int size, int *un20,int *ov100)
{
	int i,cnt20=0,cnt100=0;
	
	for(i=0;i<size;i++)
	{
		if (arr[i]<(double)*un20)
			cnt20++;
		if (arr[i]>(double)*ov100)
			cnt100++;
	}
	*un20=cnt20;
	*ov100=cnt100;
	return;
}
