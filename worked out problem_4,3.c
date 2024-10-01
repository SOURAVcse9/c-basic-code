#include<stdio.h>
int main()
{
while(1)
{


    int a,b,c,d,e,f;
    printf("enter one number, a: ");
    scanf("%d",&a);
    printf("enter another number, b: ");
    scanf("%d",&b);

    e=++a + ++b;
    printf("e=%d\n",e);
    f=a++ + b++;
    printf("f=%d\n",f);

    c=++a-b;
    printf("a = %d b = %d c = %d\n",a,b,c);
    d=a+b++;
    printf("a = %d b = %d d = %d\n",a,b,d);

    printf("a/b = %d\n",a/b);
    printf("a%%b = %d\n",a%b);
    printf("a*b = %d\n",a*b);

    printf("%d\n",(c>d)?1:0);
    printf("%d\n",(c,d)?1:0);

    e=++a + ++b;
    printf("e=%d\n",e);
    f=a++ + b++;
    printf("f=%d",f);
    getch();
}
}
