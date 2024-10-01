#include<stdio.h>
int main(){
int a1,b1,a2,b2,c1,c2;
printf("enter a1,b1,c1: ");
scanf("%d%d%d",&a1,&b1,&c1);
printf("%dx+%dy=%d\n",a1,b1,c1);


printf("enter a2,b2,c2: ");
scanf("%d%d%d",&a2,&b2,&c2);
printf("%dx+%dy=%d\n",a2,b2,c2);
double p=a1*b2-a2*b1;
double x=(b2*c1-b1*c2)/p;
double y=(b1*c2-b2*c1)/p;
printf("X=%.4lf",x);
printf("Y=%.4lf",y);
}
