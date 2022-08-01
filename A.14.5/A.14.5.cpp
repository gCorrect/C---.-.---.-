#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char *name;
	int code;
	float grd;
};

int read_text(char str[], int size, int flag);

int main(void)/*H lysh einai sto peripou gt den exv katalabei ti akrivws zhtaei*/
{
	struct student *ptr;
	int size,i,len,cnt=0;
	char str[100];
	
	printf("dose arithmo foithtwn\n");
	scanf("%d",&size);
	
	ptr=(student*) malloc(size*sizeof(student));
	
	 for(i=0;i<size;i++)
    {
        printf("dOSE code \n");
        scanf("%d",&ptr[i].code);
        
        printf("dOSE GRADE \n");
        scanf("%f",&ptr[i].grd);
        getchar();
        
        printf("dOSE onoma \n");
        read_text(str, sizeof(str), 1);
        ptr[i].name=(char*)malloc(len+1);
        strcpy(ptr[i].name,str);
        if (*(ptr[i]).name=='A')
        {
        	cnt++;
        	printf("code: %d grade: %.2f name: %s\n",ptr[i].code,ptr[i].grd,ptr[i].name);
		}
	}
	printf("%d",cnt);
	
	/*/for(i=0;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}*/	
	return 0;
}

int read_text(char str[], int size, int flag)
{
    int len;

    if(fgets(str,size,stdin)==NULL)
    {
        printf("eroor: fgets() failed\n");
        exit(EXIT_FAILURE);
    }
    len=strlen(str);
    if(len>0)
    {
        if(flag && (str[len-1] == '\n'))
        {
            str[len-1] = '\0';
            len--;
        }
    }
    else
    {
        printf("error:No input\n");
        exit(EXIT_FAILURE);
    }
    return len;
}
