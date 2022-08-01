#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    char ch,pr;
    printf("dose arithmith kai paronomasth 1ou klasmastas(px. 5/6)\n");
    scanf("%f/%f",&a,&b);
    printf("dose arithmith kai paronomasth 2ou klasmastas(px. 5/6)\n");
    scanf("%f/%f",&c,&d);
    ch=getchar();
    fflush(stdin);
    printf("dose epilogh prakshs \"+\" \"-\" \"*\": \n");
    scanf("%c",&pr);
    switch (pr)
    {
    case '+':
        printf("apotelesma prostheshs: %f\n",(a/b)+(c/d));

    case '-':
        printf("apotelesma afaireshs: %f\n",(a/b)-(c/d));

    case '*':
        printf("apotelesma pol/smou: %.3f\n",(a/b)*(c/d));
    }
    return 0;
}
