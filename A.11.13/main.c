#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS1 5
#define ROWS2 5
#define COLS 10

int find(char a[][COLS],char num[],int type);/*doyleyei*/
int insert_num(char a[][COLS],char num[],int type);

int main()
{
    char aut[ROWS1][COLS],mhx[ROWS2][COLS],num[COLS];
    int i,j,type,pos,sum=0;

    for(i=0;i<ROWS1;i++)//arxikopoiw oles tis times me mhden
    {
        aut[i][0]='0';
        aut[i][1]='\0';
    }
    for(i=0;i<ROWS1;i++)
    {
        mhx[i][0]='0';
        mhx[i][1]='\0';
    }
    if (strcmp(mhx[1],"0")==0)
    for(i=0;i<ROWS1;i++)
    {
        printf("%s\n",aut[i]);
    }
    while(1)
    {
        gets(num);
        scanf("%d",&type);
        getchar();
        if(strcmp(num,"end")==0)//<-----na mathainw synarthseis vivliothiki oti pio shmantiko
        break;

        if (type==1)
        {
            pos=find(aut,num,type);
            printf("pos:%d\n",pos);
            if (pos==-1)
            {
                i=insert_num(aut,num,type);
                strcpy(aut[i],num);
                printf("egine antigrafh sto %d\n",i);
            }
            else
            {
                strcpy(aut[pos],"0");
                sum+=10;
                printf("sum: %d\n",sum);
            }
        }
        else if (type==2)
        {
            pos=find(mhx,num,type);
            printf("pos:%d\n",pos);
            if (pos==-1)
            {
                i=insert_num(mhx,num,type);
                strcpy(mhx[i],num);
                printf("egine antigrafh sto %d\n",i);
            }
            else
            {
                strcpy(mhx[pos],"0");
                sum+=4;
                printf("sum: %d\n",sum);
            }
        }
    }
    return 0;
}
int find(char a[][COLS],char num[],int type)
{
    int i,j;

    if (type==1)
    {
        for(i=0;i<ROWS1;i++)
        {
                if (strcmp(a[i],num)==0)
                {
                    return i;
                }
        }
    }
    else if (type==2)
    {
        for(i=0;i<ROWS2;i++)
        {
                if (strcmp(a[i],num)==0)
                {
                    return i;
                }
        }
    }
    if (i==ROWS1 || i==ROWS2)
        return -1;
}

int insert_num(char a[][COLS],char num[],int type)
{
    int i,j;

    if (type==1)
    {
        for(i=0;i<ROWS1;i++)
        {
            printf("%s",a[i]);
            printf("copy\n");
            if (strcmp(a[i],"0")==0)
            {
                return i;
            }
        }
    }
    else if (type==2)
    {
        for(i=0;i<ROWS2;i++)
        {
            if (strcmp(a[i],"0")==0)
            {
                return i;
            }
        }
    }
}
