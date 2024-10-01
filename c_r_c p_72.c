//divide the first number by the second number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer numbers: ");
    scanf("%d %d",&a,&b);
    if(b)printf("%d/n",a/b);
    else printf("Cannot divide by zero.\n");
    getch();
}
