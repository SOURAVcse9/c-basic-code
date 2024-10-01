#include<stdio.h>
int main()
{
    float sum;
    int n;
    sum=0;
    for(n=1;n<=10;n++)
    {
       // printf("%f\n", sum);
        sum=sum+1/(float)n;

        printf("%5d %10f\n",n,sum);
    }
    getch();
}

