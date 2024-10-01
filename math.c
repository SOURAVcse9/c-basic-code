#include<stdio.h>

#include<math.h>
#define PI 3.1416
#define MAX 180
int main()
{
    int angle;

    float x,y;

    printf("Angle Cos(angle):\n\n");
    for(angle=0;angle<=MAX;angle=angle+10)
    {
        x=(PI/MAX)*angle;
        y=cos(x);
        printf("%d %100f\n",angle,y);


    }
    getch();
}
