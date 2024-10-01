//ansi c 7.7
#include<stdio.h>
int main()
{
    int row,col,n,count=0;
    printf("enter a number for generating the pyramid: ");
    scanf("%d",&n);
    for(row=0; row<=n; row++)
    {
        for(col=0; col<=n-row; col++)
            printf("  ");

        for(col=row; col>=0; col--)

            printf("%d ",col);

        for(col=1; col<=row; col++)

            printf("%d ",col);
        printf("\n");;
    }

    getch();
}
