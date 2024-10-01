

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter a number for row: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {

        for(col=1;col<=row;col++)
            printf("%d",row);

    printf("\n");;
}

   getch();
}
