#include<stdio.h>
int main()
{   while(1)
{


    float sum,n,term;
    int count=1;
    sum=0;
    printf("Enter value of n:");
    scanf("%f",&n);
    term = 1.0/n;
    while(count<=1)
    {
        sum=sum+term;
        count++;
    }
    printf("Sum = %10f\n",sum);
    getch();
}
}
