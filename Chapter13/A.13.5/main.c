#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 2
#define COLS 2

struct student
{
    char name[50];/*swsto.h read_text telika einai axreiasth*/
    int  am;
};

int read_text(char str[], int size, int flag);

int main()
{
    struct student s[ROWS][COLS];

    char name[50];
    int  am,i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("dOSE am \n");
            scanf("%d",&s[i][j].am);
            getchar();
            printf("dOSE onoma \n");
            read_text(s[i][j].name, sizeof(s[i][j].name), 1);

        }
     }
        printf("dOSE onoma mathhth na brethei \n");
            gets(name);

            printf("dOSE am \n");
            scanf("%d",&am);
            getchar();

         for(i=0;i<ROWS;i++)
        {
        for(j=0;j<COLS;j++)
        {
            if (s[i][j].am==am)
                printf("%d %d",i+1,j+1);
        }
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
