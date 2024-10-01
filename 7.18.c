#include<stdio.h>
int main()
{

    int row,col,n,count=0, temp =65;
    printf("enter any number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        if(row%2==1){
        for(col=1;col<=row;col++)
            printf("%d ",++count);
        }
        else
        {
            for(col=1;col<=row;col++)
            printf("%c ",temp++);
        }

        printf("\n");
    }
    getch();
}

