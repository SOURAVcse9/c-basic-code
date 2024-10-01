#include<stdio.h>
int main()
{
    int n,i,c,a=0,b=1;
    printf("enter the value of n: ");
    scanf("%d",&n);

printf("%d %d ",a ,b );

    for(i=0;i<=n;i++)

    {

        c=a+b;
        a=b;
        b=c;
        printf("%d  ",c);
}

getch();
}
