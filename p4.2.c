#include<stdio.h>
int main()
{
    int N,A,a;
    N=200;
    A=2;
    a=A;
    while(a<N)
    {
        printf("%d\n",a);
        a*=a;
    }
    getch();
}
