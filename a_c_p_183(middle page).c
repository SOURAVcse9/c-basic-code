#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<20&&sum<100;++i);
    {
        sum=sum+i;
        printf("%d %d \n",i ,sum);

    }


    getch();
}
