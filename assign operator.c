//unari operator(+,-,++,--)

#include<stdio.h>
int main()
{
    int x,y,p,q,a=4,b=10;
    x=++a;
    y=b--;
    p=a++;
    q=++b;
    printf(" x=%d\n y=%d\n p=%d\n q=%d\n a=%d\n b=%d\n",x,y,p,q,a,b);

    return 0;
}
