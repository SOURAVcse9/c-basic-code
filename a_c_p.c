
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter a number for row: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
    for(col=1;col<=n-row;col++)
           printf(" ");
        for(col=1;col<=row;col++)
            printf("*");

    printf("\n");;
}

   getch();
}



