#include<stdio.h>
int main()
{
    int taka,rem1,rem2,rem3,rem4,rem5,rem6;
    scanf("%d",&taka);
    if(0<taka<1000000)
    {
        printf("\n%d nota(s) de R$ 100,00",taka/100);
        rem1=taka%100;
        printf("\n%d nota(s) de R$ 50,00",rem1/50);
        rem2=rem1%50;
        printf("\n%d nota(s) de R$ 20,00",rem2/20);
        rem3=rem2%20;
        printf("\n%d nota(s) de R$ 10,00",rem3/10);
        rem4=rem3%10;
        printf("\n%d nota(s) de R$ 5,00",rem4/5);
        rem5=rem4%5;
        printf("\n%d nota(s) de R$ 2,00",rem5/2);
        rem6=rem5%2;
        printf("\n%d nota(s) de R$ 1,00",rem6/1);
    }
    else
        printf("enter valid number");
    return 0;
}

