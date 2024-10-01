
#include<stdio.h>
int main()
{
    double a,b,c,x1,x2;
    printf("enter three value:\n");
    scanf("%lf%lf%lf",&a,&b,&c);

    x1=((-b+(sqrt(b*b-4*a*c)))/2*a);
    x2=((-b-(sqrt(b*b-4*a*c)))/2*a);
    printf("%lf%lf",x1,x2);
    return 0;
}
