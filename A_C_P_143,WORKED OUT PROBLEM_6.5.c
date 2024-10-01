#include<stdio.h>
int main()
{
    int customer_number,units;
    float charges;
    printf("Enter customer number: ");
    scanf("%d",&customer_number);
    printf("Enter customer consumption units: ");
    scanf("%d",&units);
    if(units<=200)
        charges=0.5*units;
    else if(units<=400)
        charges=100+0.65*(units-200);
     else if(units<=600)
        charges=230+0.80*(units-400);
    else
        charges=390+1*(units-600);
    printf("\nCustomer no:%d, Charges: %.2f",customer_number,charges);
    getch();
}
