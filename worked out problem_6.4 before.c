#include<stdio.h>
int main()
{
    double balance,bonas;
    printf("Please give your balance data: ");
    scanf("%lf",&balance);
    if(balance>=500)
    {


        bonas=0.05*balance;
       /* if{
            bonas=0.02*balance;
        }*/
    }
    else
       {

       bonas=0.002*balance;
       }
    balance=balance+bonas;
    printf("%lf",balance);
}
