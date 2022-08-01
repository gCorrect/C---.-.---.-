#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

struct student
{
    char name[50];/*doylepse.ta filia m*/
    int  am;
    float grd;
};

int read_text(char str[], int size, int flag);

int main()
{
    struct student s[SIZE];
    struct student temp;

    char name[50];
    int  am,i,j,k;
    
	printf("dOSE am \n");
    scanf("%d",&s[0].am);
    
    printf("dOSE GRADE \n");
    scanf("%f",&s[0].grd);
    getchar();
    
    printf("dOSE onoma \n");
    read_text(s[0].name, sizeof(s[0].name), 1);
    

    for(i=1;i<SIZE-1;i++)
    {
        printf("dOSE am \n");
        scanf("%d",&s[i].am);
        
        printf("dOSE GRADE \n");
        scanf("%f",&s[i].grd);
        getchar();
        
        printf("dOSE onoma \n");
        read_text(s[i].name, sizeof(s[i].name), 1);
        
        for(j=0;j<i;j++)
        {
        	if (s[i].grd<s[j].grd)
        	{
        		temp=s[i];
        		s[i]=s[j];
        		s[j]=temp;
        		
			}
		}
    }
	
	printf("dOSE am teleytaio \n");
    scanf("%d",&s[SIZE-1].am);
    
    printf("dOSE GRADE teleytaio \n");
    scanf("%f",&s[SIZE-1].grd);
    getchar();
    
    printf("dOSE onoma \n");
    read_text(s[SIZE-1].name, sizeof(s[SIZE-1].name), 1);
    
    for(i=0;i<SIZE-1;i++)
    {
		if(s[SIZE-1].grd<=s[i].grd)
		{
			
			temp=s[i];
			printf("edw %f edw %f\n",s[SIZE-1].grd,s[i].grd);
        	s[i]=s[SIZE-1];
        	printf("edw %f edw %f\n",s[SIZE-1].grd,s[i].grd);
        	s[SIZE-1]=temp;
        	printf("edw %f edw %f\n",s[SIZE-1].grd,s[i].grd);
        	break;
		} 
		 
	}	
        		
	for(j=i+1;j<SIZE;j++)
    {   
        for(k=i+1;k<j;k++)
        {
        	if (s[j].grd<s[k].grd)
        	{
        		temp=s[j];
        		s[j]=s[k];
        		s[k]=temp;
        		
			}
		}
     }
    for(i=0;i<SIZE;i++)
    {
        printf("taksinomhsh %f\n",s[i].grd);
     }
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
