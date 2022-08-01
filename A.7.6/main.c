#include <stdio.h>
#define SIZE 5
int main(void)
{
int i, j, cnt, arr[SIZE];
cnt = 0;
for(i = 0; i < SIZE; i++)
{
printf("Enter number: ");
scanf("%d", &arr[i]);
for(j = 0; j < i; j++)
{
if(arr[j] == arr[i])
{
cnt++;
break;
}
}
}
printf("%d\n", cnt);
return 0;
}
