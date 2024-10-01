
#include<math.h>
#include<stdio.h>
int main ()
{
float R,C;
float perimeter ;
float area;
scanf("%f",&R);

C=3.1416;
perimeter =2*C*R;
area=C*R*R;
printf("%.2f\n %.2f",perimeter,area);
return 0;
}
