#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main()
{
    int a[SIZE],i,j,freq[11]={0},max_freq=0,max_p=0,grd;
    for(i = 0; i < SIZE; i++)
    {
        do{
        printf("Enter grade [0-10] \n");
        scanf("%d", &grd);
        }while (grd<0 || grd>10);
        freq[grd]++;
    }
    for(i = 0; i <= 10; i++)
    {
            if (max_freq<freq[i])
            {
            max_freq=freq[i];
            grd=i;
            }
        }
    for(i = 0; i <= 10; i++)
    {
        if (max_freq==freq[i] && grd!=i)
        printf("grade %d appears most times also %d\n",i,max_freq);
    }
     for(i = 0; i <= 10; i++)
   {
        printf("grade %d appears %d times \n",i,freq[i]);
   }
    return 0;
}
