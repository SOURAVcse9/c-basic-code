#include <stdio.h>
int main()
{
    int x;
    x=1;
loop 1:
    x++
    if(x<=100)
    {
        printf("%d\t",x);

    }
    goto loop 1;

    getch();
}
