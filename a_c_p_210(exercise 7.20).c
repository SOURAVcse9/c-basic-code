//7.20
#include<stdio.h>
int main()
{
    int row,col,i,n;
    printf("enter any number: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {
            if(col==row||(row+col)%2==0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }
    getch();

}
