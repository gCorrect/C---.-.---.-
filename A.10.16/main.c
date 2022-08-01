#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1];/*θα το κάνω με αριθμους τυπου -156 μεχρι 156.Αντιστοιχα μπορείς να βγάλεις για τους υπόλοι
    πους αριθμούς ένα πίνακα αλφαριθμητικών*/
    int i,a,dig;
    scanf("%d",&a);
    if (a>=0)
    {
        if (a>=100)
        {
            dig=a%10;
            printf("%d\n",dig);
            if (dig==0)
                str[0]='0';
            else if (dig==1)
                str[0]='1';
            else if (dig==2)
                str[0]='2';
            else if (dig==3)
                str[0]='3';
            else if (dig==4)
                str[0]='4';
        }
    }
    printf("%c",str[0]);
    return 0;
}
