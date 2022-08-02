#include <stdio.h>
#include <stdlib.h>

int main()
{
    int success, fail, n ;
    float success_rate, fail_rate;
    printf("Type number of successes and fails respectively : \n");
    scanf("%d%d", &success, &fail);
    
    n = success + fail;
    success_rate = (float)success/(n)*100;
    fail_rate = (float)fail/(n)*100;
    
    printf("success rate: %.2f %%\nfail rate: %.2f %%",success_rate,fail_rate);
    return 0;
}
