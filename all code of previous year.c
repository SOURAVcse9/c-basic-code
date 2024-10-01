//TRIANGLE(F16-17<3D>)
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter n:");
    scanf("%d",&n);
    for(row=0;row<=n;row++)
    {
        for(col=1;col<=row;col++)
            printf("*");
        printf("\n");
    }
}

//SUBTRACT OF MATRIX(F16-17<6D>)
#include<stdio.h>
int main()
{
    int a[40][40],b[40][40],c[40][40],i,j;
//scanning A matrix
    printf("\nPlease give the input for A matrix\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }

    //scanning B matrix
    printf("\nPlease give the input for B matrix\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            scanf("%d",&b[i][j]);
        printf("\n");
    }


    //print A matrix
    printf("The matrix of A(3 x 4) is=\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    //print A matrix
    printf("The matrix of B(3 x 4) is=\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
//scanning result matrix
    // printf("\nPlease give the input for A matrix\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)

            c[i][j]=b[i][j]-a[i][j];

        printf("\n");
    }

    printf("subtraction of B-A=\n");

    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

    getch();
}
//PALIDROM(F16-17<6D>)
#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Please enter a string:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);

    printf("revers str1:%s\n",str1);

    int d=strcmp(str1,str2);
    if(d==0)
        printf("string is palindrom");
    else
        printf("string is not palindrom");
    getch();
}


