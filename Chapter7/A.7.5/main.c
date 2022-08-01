#include <stdio.h>
#define SIZE 4
int main(void)
{
int i, temp, arr[SIZE];
for(i = 0; i < SIZE; i++)
{
printf("Enter number: ");
scanf("%d", &arr[i]);
}
for(i = SIZE-1; i > 0; i--)
{
temp = arr[i-1];
arr[i-1] = arr[i];
arr[i] = temp;
}
for(i = 0; i < SIZE; i++)
printf("%d\n", arr[i]);
return 0;
}
