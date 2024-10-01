#include<stdio.h>
int main()
{
    int years,months,days;
    printf("Enter days\n");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("Years=%d\n Months=%d\n Days=%d",years,months,days);
    getch();
}
