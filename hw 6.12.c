#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number: ");

    scanf("%d",&m);
    for(m=1; m<5; m++)
        printf("%d\t",(m%2)? m : m*2);
    getch();
}
