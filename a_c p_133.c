#include<stdio.h>
int main()
{
    int a,b,c,d;
    float ratio;
    printf("Enter four integer values\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(c-d!=0)//execute statement blok
    {
        ratio = (float)(a+b)/(float)(c-d);
        printf("Ratio = %f\n",ratio);

    }
    getch();

}
