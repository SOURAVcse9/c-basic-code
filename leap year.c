#include<stdio.h>
int main()
{
    int number;
    printf("Enter a year:");
    scanf("%d",&number);
    if(number%400==0)
    {
        printf("\nThis year is leapyear\n");
    }
    else if(number%4==0 && number%100!=0)
        {
            printf("This year is leapyear");
        }
    else
    {
        printf("This year is not leapyear");
    }
    getch();
}
