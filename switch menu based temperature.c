#include<stdio.h>
int main()
{
    int choice;
    float F,C;
    printf("Temperature conversion menu\n\n");
    printf("1.Fahrenheit to Celsious\n\n");
     printf("2.Celsious to Fahrenheit\n\n");
     printf("Please select an option:");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
        {
            printf("Enter the Fahrenheit Temperature:");
            scanf("%f",&F);
            C=(F-32)/1.8;
            printf("C= %.2f\n\n",C);
            break;
        }
     case 2:
        {
           printf("Enter the Celcious Temperature:");
           scanf("%f",&C);
           F=(1.8*C)+32;
           printf("F = %.2f\n\n",F);
        }
     default:
        printf("Please enter the correct option");
     }
     getch();
}
