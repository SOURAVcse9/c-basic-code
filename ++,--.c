#include<stdio.h>
int main()
{
    int a,b;
    a=4;
    b=((a++) + (a++));
    printf("%d",b);
    getch();
}
