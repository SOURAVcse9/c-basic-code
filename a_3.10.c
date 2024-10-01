
#include<stdio.h>
int main()
{
    int year,period;
    float amount,inrate,value;
    printf("Input amount:  ");
    scanf("%f",&amount);
    printf("Input inret:  ");
    scanf("%f",&inrate);
    printf("Input period:  ");
    scanf("%d",&period);
    printf("\n\n");
    for(year=1;year<=period;year=year+1)
    {
        value = amount + inrate * amount;
        printf("%5d RS %10.2f\n",year,value);
        amount=value;

    }
    getch();
}
