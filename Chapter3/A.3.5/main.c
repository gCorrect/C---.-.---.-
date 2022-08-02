#include <stdio.h>
#include <stdlib.h>

int main()
{
    int plates, glasses;
    float prc_plates,prc_glasses,payment;
    printf("Type number of plates and the price of single one: \n");
    scanf("%d%f",&plates,&prc_plates);
    printf("Type number of glasses and the price of single one: \n");
    scanf("%d%f",&glasses,&prc_glasses);
    printf("Type the payment amount: \n");
    scanf("%f",&payment);

    printf("The change is: %0.2f\n",payment-(plates*prc_plates)-(glasses*prc_glasses));
    return 0;
}
