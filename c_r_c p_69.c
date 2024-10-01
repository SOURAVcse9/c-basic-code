#include<stdio.h>
int main (void)
{
    int isqrd,i;
    printf("Enter a number: ");
    scanf("%d",&i);
    isqrd = i>0 ? i*i: -(i*i);
    printf("%d squard is %d",i,isqrd);
    getch();

}
