#include<stdio.h>
int main()
{//bitwise and ,or,xor
    int a=32,b=12,c;
    c=a&b;//bitwise and
    printf("a&b = %d\n",c);
    c = a|b;//bitwise or
    printf("a|b = %d\n",c);
    c=a^b;//bitwise xor
    printf("a^b = %d\n",c);

getch();

}
