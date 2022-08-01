#include <stdio.h>
int main(void)
{
int cnt, flag;
double num, min, arr[10];
cnt = flag = 0;
while(1)
{
printf("Enter number: ");
scanf("%lf", &num);
if(num == -1)
break;
if(num > 5)
{
if(flag == 0)
{
min = num; /* Θεωρούμε ότι ο
πρώτος εισαγόμενος αριθμός
είναι ο μικρότερος. */
flag = 1;
}
arr[cnt] = num;
cnt++;
if(min > num)
min = num;
if(cnt == 9)
break;
}
}
if(cnt != 0)
printf("Min value of %d elements: %f\n", cnt, min);
return 0;
}
