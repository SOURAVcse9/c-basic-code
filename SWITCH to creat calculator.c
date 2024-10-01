#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
     printf("Please enter an operetor,such as (+,-,*,/,) :  ");
    scanf("%c",&op);
    printf("\nPlease enter two number:");
    scanf("%lf %lf",&num1,&num2);

    switch(op)

    {
    case '+':
    {
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
        break;
    }
    case '*':
    {
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
        break;

    }
    case '/':
    {
        printf("%lf / %lf = %.4lf\n",num1,num2,num1/num2);
        break;
    }
    default:
    {

        printf("Blank");
        break;
    }


    }
    getch();
}
